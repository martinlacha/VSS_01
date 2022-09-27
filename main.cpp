#include <iostream>
#include "Config.h"
#include "distributions/Exponential_Distribution.h"
#include "distributions/Normal_Distribution.h"
#include "distributions/Uniform_Distribution.h"

Input_Parameters Parse_Input_Parameters(char** argv) {
    Input_Parameters inputParameters;
    char* p_a;
    inputParameters.count = strtol(argv[1], &p_a, 10);
    inputParameters.mean = strtod(argv[2], &p_a);
    inputParameters.variance = strtod(argv[3], &p_a);
    inputParameters.lambda = strtod(argv[4], &p_a);
    inputParameters.a = strtod(argv[5], &p_a);
    inputParameters.b = strtod(argv[6], &p_a);
    return inputParameters;
}

int main(int argc, char** argv) {
    if (argc < 3) {
        std::cout << "Invalid count of arguments" << std::endl;
        return 1;
    }

    Input_Parameters input = Parse_Input_Parameters(argv);
    //Exponential_Distribution exp_dist(input);
    //Normal_Distribution norm_dist(input);
    Uniform_Distribution uniform_dist(input);

    /*
    for (int i = 0; i < input.count; ++i) {
        std::cout << i << ": " << norm_dist.Get_Random_Number() << std::endl;
    }
     */
    return 0;
}
