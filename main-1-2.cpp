#include<iostream>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std; 

int main(){
    Truck_yard y1(3);
    cout << y1.get_total_stock_count() << endl; 
    Truck t1(123,"Honda");
    Truck t2(456,"Yamaha");
    Truck t3(789,"Toyota");
    Truck t4(101112,"Honda");

    // cout << t1.get_brand_code() << endl; 
    // cout << t2.get_brand_code() << endl; 
    // cout << t3.get_brand_code() << endl; 
    // cout << t4.get_brand_code() << endl; 

    cout << y1.addStock(t1) << endl; 
    cout << y1.addStock(t2) << endl;
    cout << y1.addStock(t3) << endl;
    cout << y1.addStock(t4) << endl;

    // Test:
    // cout << y1.get_stock_count(789) << endl;
    // cout << y1.get_total_stock_count() << endl; 

    // Truck* list = y1.get_current_stock_list(); 

    // for(int i = 0; i< 4 ; i++){
    //     cout << list[i].get_brand_name() << endl; 
    //     cout << list[i].get_brand_code() << endl; 

    // }

    // return 0;
}