//
// Created by Gavin on 2023/11/19.
//

#ifndef CPP_TRAINING_DISCOUNT_H
#define CPP_TRAINING_DISCOUNT_H

#include <functional>

namespace PriceCalc {

    using DiscountStrategy = std::function<double(double)>;

    DiscountStrategy NormalDiscount();
    DiscountStrategy PercentOffDiscount(double rate);
    DiscountStrategy CashBackDiscount();

} // namespace PriceCalc

#endif //CPP_TRAINING_DISCOUNT_H

