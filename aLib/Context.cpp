#include "Context.h"
#include <iostream>



  void Context::doStuff() const
    {
        if (strategy_) {
            std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
            strategy_->stuff();
            
        } else {
            std::cout << "Context: Strategy isn't set\n";
        }
    }
