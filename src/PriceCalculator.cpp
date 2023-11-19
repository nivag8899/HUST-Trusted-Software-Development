#include "PriceCalculator.h"

#include <cmath>

namespace PriceCalc
{
    double PriceCalculator::AcceptCash(const DiscountType discountType, const double money) const noexcept
    {
        double cash = 0.0;

        switch (discountType) {
            case DiscountType::CASH_NORMAL: {
                cash = Normal(money);
                break;
            }

            case DiscountType::CASH_PERCENTOFF_10: {

                cash = PercentOff(money);
                break;
            }

            case DiscountType::CASH_PERCENTOFF_20: {
                const double discountRate = 0.8;

                cash = money * discountRate;
                break;
            }

            case DiscountType::CASH_PERCENTOFF_30: {
                const double discountRate = 0.7;

                cash = money * discountRate;
                break;
            }

            case DiscountType::CASH_BACK: {
                cash = CashBack(money);
                break;
            }
        }

        return cash;
    }
}  // namespace PriceCalc
