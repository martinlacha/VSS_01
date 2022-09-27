#include "Exponential_Distribution.h"

Exponential_Distribution::Exponential_Distribution(Input_Parameters input) : Distribution_Function(input), lambda(input.lambda) {
    Create_Buckets();
    Create_Histogram();
    Print_Parameters();
    Print_Graph();
}

Exponential_Distribution::~Exponential_Distribution() = default;

double Exponential_Distribution::Get_Minimum() {
    return 0;
}

double Exponential_Distribution::Get_Maximum() {
    return -std::log(MIN_PROBABILITY/lambda)/(1 / lambda);
}

double Exponential_Distribution::Get_Mean() {
    return 1/lambda;
}

double Exponential_Distribution::Get_Variance() {
    return 1/(lambda * lambda);
}

double Exponential_Distribution::CDF(double number) {
    return 1 - std::exp(-lambda * number);
}

void Exponential_Distribution::Print_Parameters() {
    std::cout << "Exp: HERE print parameters" << std::endl;
}

void Exponential_Distribution::Calculate_Params() {

}

void Exponential_Distribution::Valid_Parameters() {
    if (lambda <= 0) {
        throw std::runtime_error("Invalid lambda parameter.");
    }
}


