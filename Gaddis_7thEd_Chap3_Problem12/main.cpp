/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 8:57 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Declare variables
    string month, year;
    float totCash,sales,dolSTax,dolCTax;
    float sSlsTax=4e-2f,cSlsTax=2e-2f;
        //Prompt user for information
	cout << "What month of sales to calculate? ";
	getline(cin, month);
	cout << "What year of sales to calculate? ";
	getline(cin, year);
        cout << "What was the total cash received? ";
	cin>>totCash;
	//calculations required
        sales=totCash/(1+sSlsTax+cSlsTax);
        dolSTax=sales*sSlsTax;
        dolCTax=sales*cSlsTax;
        
        //Output story]
	cout<<" Month: " << month<<" Year: "<<year<<endl;
        cout<<" --------------------------"<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
	cout<<" Total collected:        $ "<<setw(8)<<totCash<<endl;
        cout<<" sales:                  $ "<<setw(8)<<sales<<endl;
        cout<<" County Sales Tax:       $ "<<setw(8)<<dolCTax<<endl;
        cout<<" State Sales Tax:        $ "<<setw(8)<<dolSTax<<endl;
        cout<<" Total Sales Tax:        $ "<<setw(8)<<dolSTax+dolCTax<<endl;
        //Exit stage right!
	return 0;
}