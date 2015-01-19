/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 17, 2015, 2:49 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num1;  // Hourly pay rate
   int num2;
   string greater,
           less,// Minimum billable hours
                

   // Get numbers from 
   cout << "Please enter a number ";
   cin >> num1;
   cout << "Please enter a second number ";
   cin >> num2;
   // Determine which number is smaller/larger.
   value = num1 < num2  ? less: greater;
   
   
   cout << fixed << showpoint << setprecision(2)
   cout <<"According to the values you entered " <<num1<<"is "<<value<<endl;
   cout<<" than "<<num2<<endl;
        
   return 0;
}

