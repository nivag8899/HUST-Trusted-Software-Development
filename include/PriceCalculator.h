#pragma once

namespace PriceCal{
    enum class DiscountType {CASE_NORMAL,CASE_90PERCENTOFF,CASH_80PERCENTOFF,CASH_70PERCENTOFF,CASE_BACK};

    class PriceCalculator final{
    public:
        double AcceptCash(const DiscountType type,const double money)const noexcept;
    };
};
