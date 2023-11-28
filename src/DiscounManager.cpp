//
// Created by Gavin on 2023/11/28.
//
#include "DiscountManager.h"

namespace PriceCalc {

    DiscountManager::DiscountManager() {
        discountMap.emplace(DiscountType::CASH_NORMAL, std::make_unique<Normal>());
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_10, std::make_unique<PercentOff>(0.9));
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_20, std::make_unique<PercentOff>(0.8));
        discountMap.emplace(DiscountType::CASH_PERCENTOFF_30, std::make_unique<PercentOff>(0.7));
        discountMap.emplace(DiscountType::CASH_BACK, std::make_unique<CashBack>());
    }

    DiscountManager& DiscountManager::GetInstance() {
        static DiscountManager instance;
        return instance;
    }

    Discount* DiscountManager::GetDiscount(DiscountType discountType) const {
        auto it = discountMap.find(discountType);
        return (it != discountMap.end()) ? it->second.get() : nullptr;
    }

} // namespace PriceCalc
