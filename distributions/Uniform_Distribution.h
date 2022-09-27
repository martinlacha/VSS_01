#pragma once

#include <iostream>
#include <cmath>
#include "Distribution_Function.h"

class Uniform_Distribution : public Distribution_Function {
public:
    Uniform_Distribution(Input_Parameters input);
    ~Uniform_Distribution();
    double Get_Minimum() override;
    double Get_Maximum() override;
    double Get_Mean() override;
    double Get_Variance() override;
    double CDF(double number) override;
    void Calculate_Params() override;
    void Print_Parameters() override;
private:
    void Valid_Parameters() override;
    double a;
    double b;
};