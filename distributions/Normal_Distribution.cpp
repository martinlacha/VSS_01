#include "Normal_Distribution.h"

Normal_Distribution::Normal_Distribution(Input_Parameters input) : Distribution_Function(input),
mean(input.mean), variance(input.variance), standard_deviation(sqrt(input.variance)) {
    Create_Buckets();
    Create_Histogram();
    Print_Parameters();
    Print_Graph();
}

Normal_Distribution::~Normal_Distribution() = default;

double Normal_Distribution::Get_Minimum() {
    return mean - (MAX_RANGE * variance);
}

double Normal_Distribution::Get_Maximum() {
    return mean + (MAX_RANGE * variance);
}

double Normal_Distribution::Get_Mean() {
    return mean;
}

double Normal_Distribution::Get_Variance() {
    return variance;
}

double Normal_Distribution::CDF(double number) {
    return 0.5 * (1 + std::erf((number - mean) / (standard_deviation * sqrt(2))));
}

void Normal_Distribution::Print_Parameters() {
    std::cout << "normal: HERE print parameters" << std::endl;
}

void Normal_Distribution::Calculate_Params() {

}

void Normal_Distribution::Valid_Parameters() {
    ;
}