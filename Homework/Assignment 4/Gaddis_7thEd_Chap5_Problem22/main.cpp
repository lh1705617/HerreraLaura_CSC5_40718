/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 20, 2015, 6:42 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem22)
 */

//System Libraries
#include <iostream>
#include <cmath> 
#include <iomanip> 
using namespace std;

//User Libraries

//Function Prototypes

//Execution begins here


int main(int argc, char** argv) {
// declare variable
    int widHght;
    //Prompt the user to enter a number
    cout<<"How large do you want the character square (Please enter a number from 1-15)"<<endl;
    cin>>widHght;
    cout<<endl;
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
   
    //Exit Stage Right
    return 0;
}

