#include <gtest.h>
#include <iostream>
#include "polynomial.h"

int main(int argc, char** argv) {
    while (true) {

        std::cout << "Enter the first polynomial:\n";
        std::string s1, s2;
        std::getline(std::cin, s1);

        if (s1 == "run_test") {
            ::testing::InitGoogleTest(&argc, argv);
            return RUN_ALL_TESTS();
        }

        std::cout << "Enter the second polynomial:\n";
        std::getline(std::cin, s2);
        polynom p1, p2, res;

        try {
            p1.polynom::parser(s1);
            p2.polynom::parser(s2);
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
            continue;
        }

        std::cout << "The  result   of   the  addition:\n";
        res = p1 + p2;
        res.print();

        std::cout << "The result  of  the  subtraction:\n";
        res = p1 - p2;
        res.print();

        std::cout << "The result of the multiplication:\n";
        res = p1 * p2;
        res.print();
    }
}