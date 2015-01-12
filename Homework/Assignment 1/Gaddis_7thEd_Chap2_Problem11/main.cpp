/*
* File: main.cpp
* Author: Laura Herrera
* Created on January 8, 2015, 8:14PM
* Purpose: Homework assignment (Gaddis_7thEd_Chap_Prob11)
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float gasTank=20;//Max gallons in our gas tank
    float inTown=21.5;//In town miles per gallon
    float onHwy=26.8;//Highway miles per gallon
    //calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHwy=gasTank*onHwy;
    //Output the results
    cout<<"Distance in town on a tank of gas      = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on highway with a tank of gas = ";
    cout<<disHwy<<"(miles)"<<endl;
     //Exit stage right!
    return 0;
}