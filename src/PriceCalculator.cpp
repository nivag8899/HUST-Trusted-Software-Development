#include "PriceCalculator.h"

using namespace PriceCal;
double PriceCalculator::AcceptCash(DiscountType type, double money)const noexcept {
    switch (type) {
        case DiscountType::CASE_NORMAL:
            break;
        case DiscountType::CASE_PERCENTOFF:
            money *=0.9;
            break;
        case DiscountType::CASE_BACK:
            money -=20;
            break;
    }
    return money;
}
