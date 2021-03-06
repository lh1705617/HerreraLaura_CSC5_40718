/* 
 * File:   main.cpp
 * Author: Laura Herrera    
 * Purpose: Homework assignment (Gaddis_7thEd_Chapter2_Problem4)
 *
 * Created on January 11, 2015, 5:34 PM
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

//Declare variables
    float meal = 44.50; //Amount of meal before tax
    float salesTax = .0675; //Sales tax percentage
    float tip = .15; //Tip percentage
    //Calculate amount of meal with tax, and tip
    float taxAmount = meal * salesTax; //Sales tax for meal
    float mealTotal = meal + taxAmount;//Amount of meal with tax
    float mealTip = mealTotal * tip; //Meal tip total
    float mealGrandTotal = mealTotal + mealTip; //Grand total with tax and tip
    
    //Calculate totals of meal with tax and tip and grand total
    cout<<"Amount of meal = $ "<<std::setprecision(4)<<meal<<endl;
    cout<<"Sales Tax = "<<std::setprecision(4)<<salesTax<<endl;
    cout<<"Amount of sales tax = $ "<<std::setprecision(2)<<taxAmount<<endl;
    cout<<"Amount of meal w/tax included = $ "<<std::setprecision(4)<<mealTotal<<endl;
    cout<<"Tip amount (15%) meal total = $ "<<std::setprecision(3)<<mealTip<<endl;
    cout<<"Total cost of meal (including tax and tip) = $ "<<std::setprecision(4)<<mealGrandTotal<<endl;
    return 0;
}