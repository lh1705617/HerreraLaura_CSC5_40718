/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Purpose: Homework assignment (Gaddis_7thEd_Chapter 2_Problem 15)
 *
 * Created on January 11, 2015, 8:38 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare variables    
    char x; //character for triangle
    
//Prompt user for character
    cout<<"This program will output a triangle shaped pattern"<<endl;
    cout<<"with the character you input."<<endl;
    cout<<"Input a character"<<endl;
    cin>>x;
    cout<<endl<<endl;
    //Output a triangle shape with the "x" character
    cout<<"    "<<x<<"    "<<endl;
    cout<<"   "<<x<<x<<x<<"   "<<endl;
    cout<<"  "<<x<<x<<x<<x<<x<<"  "<<endl;
    cout<<" "<<x<<x<<x<<x<<x<<x<<x<<" "<<endl;
    cout<<""<<x<<x<<x<<x<<x<<x<<x<<x<<x<<""<<endl;
    //Exit stage right!
    
    return 0;
}

