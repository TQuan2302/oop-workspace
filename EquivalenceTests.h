// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedInteger(); 
        testBothZero(); 
        testEdgeCase(); 
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testMixedInteger(){
        Addition addition;
        if (addition.add(-4, 5) != 1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testBothZero(){
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testEdgeCase(){
        Addition addition;
        if (addition.add(-1, 1) != 0) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    

    // Add other test functions here
};