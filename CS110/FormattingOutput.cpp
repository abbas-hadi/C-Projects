//  This program will bring in two prices and two quantities of items
//  from the keyboard and print those numbers in a formatted chart.

//Hadi Abbas
// Monthly Sales Tax

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;


int main()

{
    string month, year, totalamount;
    double total_amount = 0, productsales = 0, totalstate = 0, totalcounty = 0, totaltax = 0;
    double const staterate = 0.04, countyrate = 0.02;
    
    
    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the month: " << endl;
    getline (cin, month);
    cout << "PLease input the year: " << endl;
    getline (cin, year);
    cout << "Please input the total amount (in $) collected at the cash register during this month: " << endl;
    getline (cin, totalamount);
    stringstream (totalamount) >> total_amount;
    
    productsales = total_amount/1.06;
    
    totalstate = staterate * productsales;
    totalcounty = countyrate * productsales;
    totaltax = totalstate + totalcounty;
    
    cout << "Month: " << month << " " << year << endl;
    cout << "-------------------------" << endl;
    cout << "Total collected:           $ " << total_amount << endl;
    cout << "Sales:                     $ " << productsales << endl;
    cout << "County Sales Tax:          $   " << totalcounty << endl;
    cout << "State Sales Tax:           $  " << totalstate << endl;
    cout << "Total Sales Tax:           $  " << totaltax << endl;
    
    return 0;
    
}
