#include "Invoice.h"

Invoice:: Invoice(string invoiceId){
    this->invoiceId = invoiceId; 
    this->dollarsOwed = 0; 
}
void Invoice:: addServiceCost(int costDollars){
    this->dollarsOwed = this->dollarsOwed + costDollars;
}
int Invoice:: getDollarsOwed(){
    return this->dollarsOwed; 
}
string Invoice:: getInvoiceId(){
    return this->invoiceId;
}