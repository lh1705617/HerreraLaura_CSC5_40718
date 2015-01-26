/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on: January 25, 2015 9:20 pm
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem3)
 */
//system Libraries 
#include <iostream>
#include<iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main()
{
   int years=25;       // Number of years
   float total = 0.0;  // Accumulator, initialized with 0
   float level=1.5; //Level of increase per year in millimeters
   // Get the number of days.
   cout <<"Assuming the ocean level increases by 1.5 millimeters per year, the"<<endl;
   cout<< "table below shows the projected ocean levels for the next 25 years."<<endl<<endl;
   
   
   // Get the sales for each day and accumulate a total.
   cout << fixed << showpoint << setprecision(2);
   for (int count = 1; count <= years; count++)
   {
      total += level;   // Accumulate the running total.
      cout<<"In "<<count<<" years, the ocean level will have risen "<<total<<" millimeters"<<endl;
   }
   
   
   return 0;
}