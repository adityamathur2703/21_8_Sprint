#include "Functionalities.h"
#include "DataInitialized.h"
#include <gtest/gtest.h>

TEST(CalculateFuelInjectionDuration, FuelInjection)
{
    DataContainer data=initalized();
    EXPECT_EQ(CalculateFuelInjectionDuration(data), 1);
}
int main()
{
    DataContainer data;
    CalculateFuelInjectionDuration(data);
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}