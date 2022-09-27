#pragma once

#include <iostream>
#include <cmath>
#include "Distribution_Function.h"
#include "../Config.h"

constexpr size_t MAX_RANGE = 4;

class Normal_Distribution : public Distribution_Function {
public:
    explicit Normal_Distribution(Input_Parameters input);
    ~Normal_Distribution();
    double Get_Minimum() override;
    double Get_Maximum() override;
    double Get_Mean() override;
    double Get_Variance() override;
    double CDF(double number) override;
    void Calculate_Params() override;
    void Print_Parameters() override;
private:
    void Valid_Parameters() override;
    double mean;
    double variance;
    double standard_deviation;
};