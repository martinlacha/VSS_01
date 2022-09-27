#pragma once
#include <map>
#include <utility>
#include <iostream>
#include <vector>
#include <iomanip>
#include "../Config.h"

class Distribution_Function {
public:
    explicit Distribution_Function(Input_Parameters input);
    virtual ~Distribution_Function();
    size_t Get_Count() const;
    size_t Get_Intervals() const;
    std::map<double, size_t> Get_Buckets();
    virtual double Get_Minimum() = 0;
    virtual double Get_Maximum() = 0;
    virtual double Get_Mean() = 0;
    virtual double Get_Variance() = 0;
    virtual double CDF(double number) = 0;
    virtual void Calculate_Params() = 0;
    virtual void Print_Parameters() = 0;
    void Print_Graph();
    double Get_Random_Number();
    void Create_Buckets();
    void Create_Histogram();
private:
    virtual void Valid_Parameters() = 0;
    std::map<double, size_t> buckets;
    size_t count;
    size_t intervals;
};
