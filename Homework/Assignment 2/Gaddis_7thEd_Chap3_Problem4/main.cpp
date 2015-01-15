/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 3:24 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap3_Problem4)
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    string month1, month2, month3; //Months user enters
    float inch1, inch2, inch3; //Inches of rainfall for three months
    float average;          //Average amount of rainfall for 3 months
  
    // Prompt user to enter month and inches of rain.
    cout << "Please enter month: ";
    cin >> month1;
    cout << "Please enter the number of in inches of rain that fell in: "<<month1<<endl;
    cin >> inch1;
    cout << "please enter next month: ";
    cin>> month2;
    cout << "Please enter the number of in inches of rain that fell in: "<<month2<<endl;
    cin >> inch2;
    cout << "please enter next month: ";
    cin>> month3;
    cout << "Please enter the number of in inches of rain that fell in: "<<month3<<endl;
    cin >> inch3;
    // Calculate the average rainfall for 3 months.
    
    average = (inch1+inch2+inch3)/3.0;
    // Display the average.
    cout<<setprecision(2)<<fixed<<showpoint;
    cout << "The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is " << average <<" inches."<<endl;
    //Exit 
    return 0;
}