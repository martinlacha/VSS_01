#pragma once

#include <iostream>
#include "Distribution_Function.h"
#include "../Config.h"

constexpr double MIN_PROBABILITY = 0.05;

class Exponential_Distribution : public Distribution_Function {
public:
    explicit Exponential_Distribution(Input_Parameters input);
    ~Exponential_Distribution();
    double Get_Minimum() override;
    double Get_Maximum() override;
    double Get_Mean() override;
    double Get_Variance() override;
    double CDF(double number) override;
    void Calculate_Params() override;
    void Print_Parameters() override;
private:
    void Valid_Parameters() override;
    double lambda;
};
