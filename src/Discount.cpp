//
// Created by Gavin on 2023/11/29.
//

#include "Discount.h"
#include <cmath>

namespace PriceCalc {

    DiscountStrategy NormalDiscount() {
        return [](double money) {return money; };
    }

    DiscountStrategy PercentOffDiscount(double rate) {
        return [rate](double money) {return money * rate;};
    }

    DiscountStrategy CashBackDiscount() {
        const double threshold = 100.0;
        const double cashback = 20.0;
        return [threshold, cashback](double money) {
            return money - std::floor(money / threshold) * cashback;
        };
    }

} // namespace PriceCalc

