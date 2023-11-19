#pragma once

#include <cmath>

enum class DiscountType {
    CASH_NORMAL,
    CASH_PERCENTOFF_10,
    CASH_PERCENTOFF_20,
    CASH_PERCENTOFF_30,
    CASH_BACK,
};

namespace PriceCalc
{
    class PriceCalculator final
    {
    public:
        double AcceptCash(const DiscountType discountType, const double money) const noexcept;
    };

    class Normal final
    {
    public:
        double AcceptCash(const double money) const noexcept{
            return money;
        }
    };

    class PercentOff final
    {
    public:
        double AcceptCash(const double money) const noexcept{
            const double discontRate = 0.9;
            return money * discontRate;
        }
    };

    class CashBack final
    {
    public:
        double AcceptCash(const double money) const noexcept{
            const double threshold = 100.0;
            const double cashback = 20.0;
            return money - std::floor(money / threshold) * cashback;
        }
    };
}  // namespace PriceCalc
