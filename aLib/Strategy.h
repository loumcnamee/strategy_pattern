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
  Strategy();
  
public:
  
  Strategy(std::string name); // constructor assigning name
  const std::string& name() const;
  virtual ~Strategy() = default;
  
  // api to calculate a mean from a vector of floats
  // derived classes must override this member fucntion
  virtual float mean(std::vector<float>) = 0;

  // the Kahan summation algorithm, also known as compensated summation
  // significantly reduces the numerical error in the total obtained by
  // adding a sequence of finite-precision floating-point numbers
  // source https://en.wikipedia.org/wiki/Kahan_summation_algorithm
  float kahanSum(const std::vector<float>& data);
};

