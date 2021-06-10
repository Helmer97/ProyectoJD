#include "pch.h"
#include "JD.cpp"


TEST(Adc2Volt, Volt) {
  EXPECT_EQ(tvoltage(2048U),1.65);
  
}