#include "PriceCalculator.h"

#include <cmath>
#include <memory>

namespace PriceCalc
{
    double PriceCalculator::AcceptCash(const DiscountType discountType, const double money) const noexcept
    {
        double cash = 0.0;

        switch (discountType) {
            case DiscountType::CASH_NORMAL: {
                std::unique_ptr<Normal> normal = std::make_unique<Normal>();
                cash = normal->AcceptCash(money);
                break;
            }

            case DiscountType::CASH_PERCENTOFF_10: {
                std::unique_ptr<PercentOff> percentoff = std::make_unique<PercentOff>();
                cash = percentoff->AcceptCash(money);
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
                std::unique_ptr<CashBack> cashback = std::make_unique<CashBack>();
                cash = cashback->AcceptCash(money);
                break;
            }
        }

        return cash;
    }
}  // namespace PriceCalc
