#include "PriceCalculator.h"
#include "DiscountManager.h"
#include "Discount.h"

namespace PriceCalc {
    double PriceCalculator::AcceptCash(const DiscountType discountType, const double money) const noexcept {
        DiscountManager& discountManager = DiscountManager::GetInstance();
        DiscountStrategy discountStrategy = discountManager.GetDiscountStrategy(discountType);

        // Check if the strategy is valid
        if (discountStrategy) {
            return discountStrategy(money);
        } else {
            // Handle unsupported or missing discount strategy
            return money;
        }
    }
} // namespace PriceCalc
