/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 17, 2015, 5:57 PM
 */

//
// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
   // Constants for grade thresholds
   const int A_SCORE = 100,
             B_SCORE = 50,
             C_SCORE = 20,
             D_SCORE = 10
             PurchP= 99;
   float dis1=.50, dis2=.40, dis3=.30, dis4=.20;
   int qty;  // To hold a numeric test score
   float disP1=(qty*purchP)-(.50)
   // Get the numeric test score.
   cout << "Enter your numeric test score and I will\n"
        << "tell you the letter grade you earned: ";
   cin >> qty;
   
   // Determine the letter grade.
   if (qty> A_SCORE)
      cout << "Your discountt is: "<<(qty*PurchP)*dis1);
   count<<" and your total amount is "<<qty
   else if (testScore >= B_SCORE)
      cout << "Your grade is B.\n";
   else if (testScore >= C_SCORE)
      cout << "Your grade is C.\n";
   else if (testScore >= D_SCORE)
      cout << "Your grade is D.\n";
   else
      cout << "Your grade is F.\n";
   
   return 0;
}