#include "Context.h"
#include <iostream>
#include "StrategyOne.h"


Context::Context() {
    _numStrategies = 0;
    _strategy = 0;


    StrategyOne* s1 = new StrategyOne;
    _strategies.insert(pair(++_numStrategies,std::move(s1)));
}
void Context::add_strategy(std::unique_ptr<Strategy> strategy) {
        strategy_ = std::move(strategy);
    }


bool Context::setStrategy(int index) {
    bool result = false;
    int c = _strategies.count(index);
    if (c==1) {
        _strategy = index;
        result = true;
    }

    return result;
}

unsigned int Context::getMode() const {
    return _strategy;
}

float Context::calculateMean(std::vector<float> data) const
    {
        float result = 0.0f;
        if (_strategy > 0) {
            //std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
            Strategy* s = _strategies.find(_strategy)->second;
            result = s->mean(data);   
            
        } else {
            std::cout << "Context: Strategy isn't set\n";
        }
        return result;
    }
