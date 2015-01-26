/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on: January 25, 2015 9:50 pm
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem2)
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main() {
//Declare variables 
    char ascCh; //ASCII code
    
    //Prompt display of what program does
    cout<<"\t\tBelow is a table of the characters for ASCII codes 0-127\n";
    for(int count=0;count<=127;count++){
       ascCh=(char)count;
       cout<<ascCh<<"  ";
 if(count==16||count==32||count==48||count==64||count==80||count==96||count==112)
           cout<<endl;
    }
    //Exit!
    return 0;
}
