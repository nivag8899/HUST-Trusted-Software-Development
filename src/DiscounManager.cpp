#include "DiscountManager.h"
#include "Discount.h"
#include "PriceCalculator.h"

namespace PriceCalc {

    DiscountManager::DiscountManager() {
        discountMap.emplace(DiscountType::CASH_NORMAL, NormalDiscount());
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_10, PercentOffDiscount(0.9));
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_20, PercentOffDiscount(0.8));
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_30, PercentOffDiscount(0.7));
        discountMap.emplace(DiscountType::CASH_BACK, CashBackDiscount());
    }

    DiscountManager& DiscountManager::GetInstance() {
        static DiscountManager instance;
        return instance;
    }

    DiscountStrategy DiscountManager::GetDiscountStrategy(DiscountType discountType) const {
        auto it = discountMap.find(discountType);
        return (it != discountMap.end()) ? it->second : nullptr;
    }

} // namespace PriceCalc
