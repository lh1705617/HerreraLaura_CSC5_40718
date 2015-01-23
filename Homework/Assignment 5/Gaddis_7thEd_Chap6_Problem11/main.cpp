/* 
 * File:   main.cpp
 * Author: Laura Herrera        
 *
 * Created on January 22, 2015, 7:28 PM
 */
//System Library
#include <iostream>

using namespace std;
//User libraries
//global contstants
//function prototypes

//Execution begins here
int main(int argc, char** argv) {
    float avg, max, min,input;
    //Read in the first data point
    
    cout<<"What is judge #1's score"<<endl;
    cin>>input;
    avg=max=min=input;
    //for loop to read in the next four values
    for (int readin=2;readin<=5;readin++){
        cout<<"What is judge #"<<readin<<"'s score"<<endl;
        cin>>input;
        if (max<input) max=input;
        if (min>input) min=input;
        avg+=input;
    }
    //calculate the average
    avg=(avg-min-max)/3;
    //what is the average
    cout<<"the average = "<<avg<<endl;
    
    
    return 0;
}

