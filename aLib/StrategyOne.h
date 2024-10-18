#pragma once

#include "Strategy.h"
#include <string>


class StrategyOne :   public Strategy
{
private:
 

public:
  StrategyOne();
  ~StrategyOne();
  float mean(std::vector<float>);

};

