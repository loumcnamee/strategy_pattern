#include <gtest/gtest.h>
#include "Context.h"


//Test Context class constructor
TEST(ContextTest, ConstructorTest) {
  
  Context client;
  
  ASSERT_EQ(0,client.getMode());
}

/**)
client.setStrategy(1);
    
    std::vector<float> d = {8.0, 4.0, 5.0, 9.0};
    
    float result = client.calculateMean(d);

    */