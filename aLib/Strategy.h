#pragma once

#include <string>
#include <vector>

/**
 * The Strategy interface declares operations common to all supported versions
 * of the algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */

class Strategy
{
private:
  std::string _name;

public:
  Strategy();
  Strategy(std::string name); // constructor assigning name
  virtual ~Strategy() = default;
  virtual float mean(std::vector<float>) = 0;
};

