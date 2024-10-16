#pragma once

#include <mutex>
#include "Strategy.h"
#include <map>
#include <memory>

using namespace std;

/**
 * The Context defines the interface of interest to clients.
 */
class Context
{

private:
    std::unique_ptr<Strategy> strategy_;
    /**
     * Usually, the Context accepts a strategy through the constructor, but also
     * provides a setter to change it at runtime.
     */
public:
    explicit Context(std::unique_ptr<Strategy> &&strategy = {}) : strategy_(std::move(strategy))
    {
    }
    
    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void set_strategy(std::unique_ptr<Strategy> strategy)
    {
        strategy_ = std::move(strategy);
    }
    
    /**
     * The Context delegates some work to the Strategy object instead of
     * implementing +multiple versions of the algorithm on its own.
     */
    void doStuff() const;
    
};
  



