#pragma once


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
  

public:
  Strategy();
  virtual ~Strategy() = default;
  virtual void stuff() = 0;
};

