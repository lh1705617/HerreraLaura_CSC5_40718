/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 19, 2015, 7:41 PM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap4_Problem9)
 */

//System Libraries
#include <iostream> 
#include <ctime> 
#include <cstdlib> 
#include <cmath> 
#include <iomanip>

using namespace std; 
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main() 
{ 
srand((unsigned)time(0)); 
//Declare variables
int sum, ans; 
int a = rand() % 300+ 1; 
int b = rand() % 300 + 1; 
//calculate sum of two random numbers
sum = a + b ; 

// Display two random numbers and prompt user to add and solve.
   cout<<"Please enter the sum of the two numbers shown below:"<<endl;
   cout <<"  "<<right<<setw(3)<<a<<endl;
   cout <<" +"<<right<<setw(3)<<b<<endl;
   cout <<" ----- "<<endl;
   cin>>ans;
   if (ans == sum)
       cout<<"That is correct!!"<<endl; //output if the user answers problem correctly.
   else
       cout<<"That is incorrect. Please try again. The correct answer is "<<sum<<endl;//output for wrong answer
                
   return 0;
}



   