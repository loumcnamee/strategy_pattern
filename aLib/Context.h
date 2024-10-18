#pragma once

#include <mutex>
#include "Strategy.h"
#include <map>
#include <memory>
#include <map>

using namespace std;

/**
 * The Context defines the interface of interest to clients.
 */
class Context
{

private:
    unsigned int _numStrategies = 0;
    unsigned int _strategy; //selectegy strategy to execute
    
    std::map<unsigned int, Strategy*> _strategies;
    std::unique_ptr<Strategy> strategy_;
    /**
     * Usually, the Context accepts a strategy through the constructor, but also
     * provides a setter to change it at runtime.
     */
public:
    Context(); //(std::unique_ptr<Strategy> &&strategy = {}) : strategy_(std::move(strategy))
    
    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void add_strategy(std::unique_ptr<Strategy> strategy);

    bool setStrategy(int index);
    
    /**
     * The Context delegates some work to the Strategy object instead of
     * implementing +multiple versions of the algorithm on its own.
     */
    float calculateMean(std::vector<float>) const;
    
};
  



