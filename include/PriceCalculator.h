#pragma once

#include <cmath>
#include <memory>

namespace PriceCalc
{
    enum class DiscountType
    {
        CASH_NORMAL,
        CASH_PERCENTOFF_10,
        CASH_PERCENTOFF_20,
        CASH_PERCENTOFF_30,
        CASH_BACK,
    };
    class PriceCalculator final
    {
    public:
        double AcceptCash(const DiscountType discountType, const double money) const noexcept;
    };
} // namespace PriceCalc
