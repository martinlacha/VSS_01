#include "Uniform_Distribution.h"

Uniform_Distribution::Uniform_Distribution(Input_Parameters input) : Distribution_Function(input), a(input.a), b(input.b){
    Create_Buckets();
    Create_Histogram();
    Print_Parameters();
    Print_Graph();
}

Uniform_Distribution::~Uniform_Distribution() {

}

double Uniform_Distribution::Get_Minimum() {
    return a;
}

double Uniform_Distribution::Get_Maximum() {
    return b;
}

double Uniform_Distribution::Get_Mean() {
    return 0.5 * (a + b);
}

double Uniform_Distribution::Get_Variance() {
    return (1.0/12) * std::pow(b - a, 2.0);
}

double Uniform_Distribution::CDF(double number) {
    if (number < a) {
        return 0;
    } else if (number > b) {
        return 1;
    }
    return ((number - a) / (b - a));
}

void Uniform_Distribution::Print_Parameters() {
    std::cout << "Uniform: HERE print parameters" << std::endl;
}

void Uniform_Distribution::Calculate_Params() {

}

void Uniform_Distribution::Valid_Parameters() {
    if (a > b) {
        throw std::runtime_error("Invalid a and b parameter.");
    }
}