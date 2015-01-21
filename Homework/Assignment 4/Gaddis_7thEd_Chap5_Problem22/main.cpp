/* 
 * File:   main.cpp
 * Author: Laura Herrera
 *Created on January 20, 2015, 6:42 PM
 * Purpose: Homework Assignment 
 */

//User Libraries
#include <iostream>
#include <cmath> 
#include <iomanip> //
using namespace std;


//Percent Conversion

//Function Prototypes

//Execution begins here

   //Declare Variables
int main(int argc, char** argv) {
// declare variable
    int widHght;
    //Prompt user for the input
    cout<<"How large do you want the character square"<<endl;
    cin>>widHght;
    //Utilize
    cout<<endl;
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //exit
    return 0;
}

