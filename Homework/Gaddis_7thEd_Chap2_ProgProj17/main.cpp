/*
* File: main.cpp
* Author: Laura Herrera
* Created on January 8, 2015, 7:16 PM
* Purpose: Homework assignment (Gaddis_7thEd_Chap_Prob17)
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100; //Percent Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float skPrice=2.177e1f;//Stock Price in $'s
    unsigned short nShares=600; //Number of shares of stock
    char comish=2; //2 Percent commission
    
    //Calculate sales price, commission, and total in dollars
    float slPrice=nShares*skPrice;
    float cmPrice=slPrice*comish/CONVPCT;
    float totpaid=slPrice+cmPrice;
    //Calculate
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price =$"<<setw(8)<<slPrice<<endl;
    cout<<"Commission = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid = $"<<setw(8)<<totpaid<<endl;
    //Exit stage right!
    return 0;
}
