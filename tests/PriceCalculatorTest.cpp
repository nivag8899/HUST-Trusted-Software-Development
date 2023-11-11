#include <gtest/gtest.h>

#include "PriceCalculator.h"

TEST(PriceCalculator, should_return_100_when_gien_cash_normal_and_price_100)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_NORMAL,100.0);

    //then
    EXPECT_EQ(100, cash);
}

TEST(PriceCalculator, should_return_90_when_gien_cash_percentoff_and_price_100)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_PERCENTOFF,100.0);

    //then
    EXPECT_EQ(90, cash);
}

TEST(PriceCalculator, should_return_80_when_gien_cash_back_and_price_100)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_BACK,100.0);

    //then
    EXPECT_EQ(80, cash);
}