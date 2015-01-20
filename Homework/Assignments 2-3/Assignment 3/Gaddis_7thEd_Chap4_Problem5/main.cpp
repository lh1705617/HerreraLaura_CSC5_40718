/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 18, 2015, 8:00PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap4_Problem5)
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
//Declare variables
    float bmi, weight, height;
    
    // Display program function and prompt user for input.
    cout<<"This program will calculate your body mass index (BMI)"<<endl<<endl;
    cout<<"Please enter your weight in pounds: "<<endl;
    cin>>weight; //input weight
    cout<<"Please input your height in inches:"<<endl;
    cin>>height;
    bmi = weight * (703/(height*height)); // BMI= weight *703/height^2
    cout<<fixed<<setprecision(2)<<showpoint; 
    if (bmi >= 18.5 && bmi <= 25)
        cout<<"Your BMI is "<<bmi<<". According to your BMI, you weight is considered to be optimal."<<endl;
    else if (bmi <18.5)
        cout<<"Your BMI is "<<bmi<<". According to your BMI, you are considered to be underweight."<<endl;
    else if (bmi > 25)
        cout<<"Your BMI is "<<bmi<<". According to your BMI, you are considered to be overweight."<<endl;
    //Exit program
    return 0;
}