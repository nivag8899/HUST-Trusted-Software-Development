#include "PriceCalculator.h"
#include "DiscountManager.h"  // Add this line
#include "Discount.h"
#include <unordered_map>

namespace PriceCalc {
    double PriceCalculator::AcceptCash(const DiscountType discountType, const double money) const noexcept {
        DiscountManager& discountManager = DiscountManager::GetInstance();
        Discount* myDiscount = discountManager.GetDiscount(discountType);
        return (myDiscount) ? myDiscount->AcceptCash(money) : money;
    }
} // namespace PriceCalc



