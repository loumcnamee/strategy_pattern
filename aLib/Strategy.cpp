#include "Strategy.h"

Strategy::Strategy() : _name("none") {} //default constructor

Strategy::Strategy(std::string name) : _name(name) {} // constructor assigning name

const std::string& Strategy::name() const {
    return _name;
}

float Strategy::kahanSum(const std::vector<float>& data) {
    
    // Prepare the accumulator.
    float sum = 0.0f;
    
    // A running compensation for lost low-order bits.
    float c = 0.0f;

    float y = 0.0f;
    float t = 0.0f;

    // The array input has elements indexed input[1] to input[input.length].
    for (auto i : data ) {
        
        // c is zero the first time around.
        y = i - c;
        
        // Alas, sum is big, y small, so low-order digits of y are lost.         
        t = sum + y;
        
        // (t - sum) cancels the high-order part of y;
        // subtracting y recovers negative (low part of y)
        
        c = (t - sum) - y;
        // Algebraically, c should always be zero. Beware
        // overly-aggressive optimizing compilers!
        
        sum = t;
        // Next time around, the lost low part will be added to y in a fresh attempt.
    }
   
    return sum;
}




