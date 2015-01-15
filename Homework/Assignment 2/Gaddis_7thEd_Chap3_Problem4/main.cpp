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
    string month1, month2, month3;
    float inch1, inch2, inch3;
    float average;              // Average of all 3 test scores
  
    // Get the three test scores.
    cout << "Pleas enter month: ";
    cin >> month1;
    cout << "Pleas enter the number of in Inches of rain that fell in:"<<month1<<endl;
    cin >> inch1;
    cout << "please enter next month:";
    cin>> month2;
    cout << "Pleas enter the number of in Inches of rain that fell in: "<<month2<<endl;
    cin >> inch2;
    cout << "please enter next month:";
    cin>> month3;
    cout << "Pleas enter the number of in Inches of rain that fell in: "<<month3<<endl;
    cin >> inch3;
    // Calculate the average of the scores.
    
    average = (inch1+inch2+inch3)/3.0;
    // Display the average.
    cout<<setprecision(2)<<fixed<<showpoint;
    cout << "The average rainfall is: " << average << endl;
    
    return 0;
}