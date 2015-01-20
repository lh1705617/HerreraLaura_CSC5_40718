/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 13, 2015, 11:20 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Prob1)
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
   int tank;    // Number gallons tank holds
   int midriv;  // Number of miles you can drive on one tank
   float mpg;  // Average number of miles per gallon
   //Prompt user to enter information
   cout << "How many gallons does your tank hold? ";
   cin >> tank;
   cout << "How many miles can you drive on one tank? ";
   cin >> midriv;
   mpg = static_cast<float>(midriv) / tank;
   cout<<fixed<<setprecision(2)<<showpoint;
   //Output MPG information
   cout << "You can drive " << mpg << " miles on one gallon of gas.\n";
   return 0;
} 