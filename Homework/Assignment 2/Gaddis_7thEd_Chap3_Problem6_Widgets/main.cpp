/* 
 * File:   main.cpp
 * Author: Laura
 * Created on January 15, 2015, 12:23 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap3_Problem6)
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtWidg = 9.2;
    float nWidg;
    float wtPal;
    float totWeig;
    float weigNWid;
    //Prompt user for pallet weights and total weight
    cout<<"Input weight of pallet: "<<endl;
    cin>>wtPal;
    cout<<"What is the total weight of the pallet with widgets? "<<endl;
    cin>>totWeig;
    //Calculate the results
    weigNWid = (totWeig -wtPal)/wtWidg;
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Based on the weights you entered, you should have "<<weigNWid<<" widgets on this pallet."<<endl;
    return 0;
}
