/* 
 * //This program calculates the users pay
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 7, 2015, 5:21 PM
 */

#include <iostream>

using namespace std;

int main()
{

    int hours, rate, pay;
    
    //get the number of hours worked.
    cout<< "How many hours did you work? ";
    cin>> hours;
    
    //get the hourly pay rate.
    cout<< "How much do you get paid per hour? ";
    cin>> rate;
    
    //Display pay rate.
    pay = hours * rate;
    
    //display pay.
    cout<< "You have earned $"<<pay<<endl;
    return 0;
}

