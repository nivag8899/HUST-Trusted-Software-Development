//
// Created by Gavin on 2023/11/19.
//

#ifndef CPP_TRAINING_DISCOUNT_H
#define CPP_TRAINING_DISCOUNT_H

#endif //CPP_TRAINING_DISCOUNT_H

#pragma once

#include <cmath>

namespace  PriceCalc{
    class Discount
    {
    public:
        virtual ~Discount(){};
        virtual double AcceptCash(const double money) const noexcept = 0;
    };

    class Normal final : public Discount
    {
    public:
        double AcceptCash(const double money) const noexcept override
        {
            return money;
        }
    };

    class PercentOff final : public Discount
    {
    public:
        explicit PercentOff(const double rate) : rate(rate)
        {
        }
        double AcceptCash(const double money) const noexcept override
        {
            return money * rate;
        }

    private:
        const double rate;
    };

    class CashBack final : public Discount
    {
    public:
        double AcceptCash(const double money) const noexcept override
        {
            const double threshold = 100.0;
            const double cashback = 20.0;
            return money - std::floor(money / threshold) * cashback;
        }
    };
}
