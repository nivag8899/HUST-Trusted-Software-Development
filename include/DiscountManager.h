//
// Created by Gavin on 2023/11/28.
//

#ifndef CPP_TRAINING_DISCOUNTMANAGER_H
#define CPP_TRAINING_DISCOUNTMANAGER_H

#endif //CPP_TRAINING_DISCOUNTMANAGER_H

#include <unordered_map>
#include <memory>
#include "Discount.h"
#include "PriceCalculator.h"

namespace PriceCalc {
    class DiscountManager {
    public:
        static DiscountManager& GetInstance();

        Discount* GetDiscount(DiscountType discountType) const;

    private:
        DiscountManager();

        std::unordered_map<DiscountType, std::unique_ptr<Discount>> discountMap;
    };
}

