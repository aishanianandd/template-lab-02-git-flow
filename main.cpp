HEAD
#include "c-echo.h"
#include "c-count.h"

int main(int argc, char** argv) {
    std::cout << "Count of output: " << count(echo(argc, argv)) << std::endl;

#include "c-count.h"
#include "c-echo.h"
#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Count of output: " << count(echo(argc, argv)) << std::endl;
    return 0;
cd240cd (add  count function and fix main)
}
