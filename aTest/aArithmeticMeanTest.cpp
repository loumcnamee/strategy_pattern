#include <gtest/gtest.h>
#include "StrategyOne.h"
#include <String>

// Test constructor, ensure name is correct
TEST(ArithMeticMeanTest, ConstructorTest) {
  
  StrategyOne* s = new StrategyOne();
  std::string aName = s->name();

  ASSERT_EQ("Arithmetic mean",aName);
  
  delete(s);

}

// 
TEST(ArithMeticMeanTest, NoDataTest) {
  
  StrategyOne* s = new StrategyOne();
    
  std::vector<float> data; 

  float mean1 = s->mean(data);

  ASSERT_EQ(0.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, SingleValueMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data = {1.2345f};

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(1.2345f,mean1);
  
  delete(s);

}


TEST(ArithMeticMeanTest, MeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(5.0,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, NegativeMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data = {0.0, -1.0, -2.0, -3.0, -4.0, -5.0, -6.0, -7.0, -8.0, -9.0, -10.0 };

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(-5.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, BalanceMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data = {-1.0f,-1.0f,-1.0f, -1.0f,-1.0f,-1.0f,-1.0f,-1.0f,-1.0f,-1.0f,
  1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,};

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(0.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, 1000MeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data;
  for (unsigned int i=0; i <1001; ++i) {
    data.push_back(static_cast<float>(i));
  }

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(500.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, ThousandMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data;
  for (unsigned int i=0; i <1001; ++i) {
    data.push_back(static_cast<float>(i));
  }

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(500.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, MillionMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data;
  for (unsigned int i=0; i <1000001; ++i) {
    data.push_back(static_cast<float>(i));
  }

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(500000.0f,mean1);
  
  delete(s);

}

TEST(ArithMeticMeanTest, BillionMeanTest) {
  
  StrategyOne* s = new StrategyOne();
  
  //vector of 11 elements totaling 55, avg = 5
  std::vector<float> data;
  for (unsigned int i=0; i <1000000001; ++i) {
    data.push_back(static_cast<float>(i));
  }

  float mean1 = s->mean(data);

  EXPECT_FLOAT_EQ(500000000.0f,mean1);
  
  delete(s);

}