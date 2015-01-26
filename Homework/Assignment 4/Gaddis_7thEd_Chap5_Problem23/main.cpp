/* 
 * File:   main.cpp
 * Author: Laura
 * Created on January 23, 2015, 1:16 Pm
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap5_Problem23)
 */

//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Tloop pattern A and B
    cout<<"\t\t This program will create two patterns"<<endl;
    cout<<"Pattern A"<<endl;
    cout<<endl;
    for(int a=1;a<=10;a++){
        for(int a1=1;a1<=a;a1++){
            cout<<"+";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Pattern B"<<endl;
    cout<<endl;
    for(int b=1;b<=10;b++){
        for(int b1=10;b1>=b;b1--){
            cout<<"+";
        }
        cout<<endl;
    }
            
    return 0;
}