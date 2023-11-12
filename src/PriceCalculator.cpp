#include "PriceCalculator.h"

using namespace PriceCal;
double PriceCalculator::AcceptCash(DiscountType type, double money)const noexcept {
    int CASH_BACK_cnt = 0;
    switch (type) {
        case DiscountType::CASE_NORMAL:
            break;
        case DiscountType::CASE_PERCENTOFF:
            money *=0.9;
            break;
        case DiscountType::CASE_BACK:
            CASH_BACK_cnt = money / 100;
            money -=20 * CASH_BACK_cnt;
            break;
    }
    return money;
}
