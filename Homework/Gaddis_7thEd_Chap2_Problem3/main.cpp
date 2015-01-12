/* 
 * File:   main.cpp
 * Author: Laura Herrera    
 * Purpose: Gaddis 7thEd Chapter2 Problem3
 *
 * Created on January 11, 2015, 9:17 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global constants
//Function prototypes

//Execution begins here
int main(int argc, char** argv) {

//Declare variables
    float purchaseAmount = 52; //Amount of purchase before tax
    float counSalesTax = .02; //County sales tax percentage
    float stateTaxAmount = .04; //State sales tax percentage
    float counTaxTot = purchaseAmount*counSalesTax;
    float stTaxTot = purchaseAmount*stateTaxAmount;
    float purAmountTot= purchaseAmount + counTaxTot + stTaxTot;
    
   
    //Calculate total of purchase amount with county and state tax
    cout<<"Purchase amount = $ "<<std::setprecision(4)<<purchaseAmount<<endl;
    cout<<"County sales tax (2%) on $52 = $ "<<std::setprecision(4)<<counTaxTot<<endl;
    cout<<"State sales tax (4%) on $52 = $ "<<std::setprecision(4)<<stTaxTot<<endl;
    cout<<"Purchase total (tax included) = $ "<<std::setprecision(4)<<purAmountTot<<endl;
   
    return 0;
}