#include "StrategyOne.h"
#include <numeric>


StrategyOne::StrategyOne() : Strategy{"Arithmetic mean"}
{

}


StrategyOne::~StrategyOne()
{
}

float StrategyOne::mean(std::vector<float> data) {

    float result = 0.0;
    if (data.size() != 0)
        result = kahanSum(data) / data.size();

    return result;

}
