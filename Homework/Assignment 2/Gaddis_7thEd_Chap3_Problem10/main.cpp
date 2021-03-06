/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 1:22 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Problem10)
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
    
    float fahrenheit, celsius;
    //Prompt user for temperature in Celsius
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    //Calculate Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout<<setprecision(1)<<fixed<<showpoint;
    //Output conversion result
    cout << "If the temperature in Celsius is      : " << celsius <<" degrees "<< endl;
    cout << "Then the temperature in Fahrenheit is : " << fahrenheit <<" degrees"<<endl;
   //Exit stage right!
    return 0;
}
    
    