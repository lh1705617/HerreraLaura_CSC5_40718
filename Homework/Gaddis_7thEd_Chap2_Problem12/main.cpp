/*
* File: main.cpp
* Author: Laura Herrera
* Created on January 8, 2015, 7:52 PM
* Purpose: Homework assignment (Gaddis_7thEd_Chap_Prob12)
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CVFTACS=43560; //Percent Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float inSqFt,outAcrs;
    //prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"To convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
    //Output the results
    cout<<inSqFt<<"(sq feet)=";
    cout<<outAcrs<<"(acres)"<<endl;
     //Exit stage right!
    return 0;
}