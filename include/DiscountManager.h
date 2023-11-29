#ifndef CPP_TRAINING_DISCOUNTMANAGER_H
#define CPP_TRAINING_DISCOUNTMANAGER_H

#include <unordered_map>
#include "Discount.h"
#include "PriceCalculator.h"

namespace PriceCalc {

    class DiscountManager {
    public:
        static DiscountManager& GetInstance();

        DiscountStrategy GetDiscountStrategy(DiscountType discountType) const;

    private:
        DiscountManager();

        std::unordered_map<DiscountType, DiscountStrategy> discountMap;
    };

} // namespace PriceCalc

#endif //CPP_TRAINING_DISCOUNTMANAGER_H
