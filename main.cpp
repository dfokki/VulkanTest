//sample code.In this chapter we're starting from scratch with the following code:



#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "Application.h"

int main() {
    Application app("VULCAN TRIANGLE LOL");

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}