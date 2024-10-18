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
        result = std::accumulate(data.begin(), data.end(), 0.0f) / data.size();

    return result;

}
