// InvoiceTest.h

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetDollarOwned(); 
        testGetInvoiceId(); 
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
    }
    void testGetDollarOwned(){
        Invoice invoice("ABCD");
        invoice.addServiceCost(100);
            
        if (invoice.getDollarsOwed() != 100) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testGetInvoiceId(){
        Invoice invoice("ABCD");
        if (invoice.getInvoiceId().compare("ABCD") != 0) {
                std::cout << "Test 4 failed!" << std::endl;
         }
    } 

        // Add more test cases here
    

    // Add other test functions here
};
