/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 13, 2015, 11:20 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Prob1)
 */

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
#include <iostream>
using namespace std;

int main()
{
   int tank;        // Number gallons tank holds
   int midriv;       // Number of miles you can drive on one tank
   float mpg;  // Average number of miles per gallon

   cout << "How many gallons does your tank hold? ";
   cin >> tank;
   cout << "How many miles can you drive on one tank? ";
   cin >> midriv;
   mpg = static_cast<float>(midriv) / tank;
   cout << "You can drive " << mpg << " miles on one gallon of gas.\n";
   return 0;
} 