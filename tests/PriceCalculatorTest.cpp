#include <gtest/gtest.h>

#include "PriceCalculator.h"

TEST(PriceCalculator, should_return_90_when_gvien_cash_normal_and_price_90)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_NORMAL,90.0);

    //then
    EXPECT_EQ(90, cash);
}

TEST(PriceCalculator, should_return_81_when_given_cash_90percentoff_and_price_90)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_90PERCENTOFF, 90.0);

    //then
    EXPECT_DOUBLE_EQ(81, cash);
}

TEST(PriceCalculator, should_return_72_when_given_cash_80percentoff_and_price_90)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_80PERCENTOFF, 90.0);

    //then
    EXPECT_DOUBLE_EQ(72, cash);
}

TEST(PriceCalculator, should_return_70_when_given_cash_70percentoff_and_price_100)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_70PERCENTOFF, 100.0);

    //then
    EXPECT_DOUBLE_EQ(70, cash);
}

TEST(PriceCalculator, should_return_90_when_given_cash_back_and_price_90)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_BACK,90.0);

    //then
    EXPECT_DOUBLE_EQ(90, cash);
}

TEST(PriceCalculator, should_return_80_when_given_cash_back_and_price_100)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_BACK,100.0);

    //then
    EXPECT_DOUBLE_EQ(80, cash);
}

TEST(PriceCalculator, should_return_210_when_given_cash_back_and_price_250)
{
    //given
    PriceCal::PriceCalculator priceCalculator;

    //when
    double cash = priceCalculator.AcceptCash(PriceCal::DiscountType::CASE_BACK,250.0);

    //then
    EXPECT_DOUBLE_EQ(210, cash);
}

