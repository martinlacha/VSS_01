#include "Distribution_Function.h"

Distribution_Function::~Distribution_Function() = default;

Distribution_Function::Distribution_Function(Input_Parameters input) : count(input.count), intervals(input.intervals) {
    srand( (unsigned)time( nullptr ) );
}

size_t Distribution_Function::Get_Count() const {
    return count;
}

size_t Distribution_Function::Get_Intervals() const {
    return intervals;
}

std::map<double, size_t> Distribution_Function::Get_Buckets() {
    return buckets;
}

double Distribution_Function::Get_Random_Number() {
    return (double) rand()/RAND_MAX;
}

void Distribution_Function::Create_Histogram() {
    for (int i = 0; i < count; ++i) {
        double random_number = Get_Random_Number();
        double probability = CDF(random_number);

        auto iterator = buckets.upper_bound(probability);
        (*iterator).second++;
    }
}

void Distribution_Function::Create_Buckets() {
    double range = Get_Maximum() - Get_Minimum();
    double step = range / intervals;

    for (size_t i = 0; i < intervals; ++i) {
        std::pair <double, size_t> bucket (Get_Minimum() + (step * i), 0);
        buckets.insert(bucket);
    }
}

void Distribution_Function::Print_Graph() {
    for (auto& item : Get_Buckets()) {
        std::cout << std::setprecision(5) << item.first << ": " << item.second << std::endl;
    }
}
