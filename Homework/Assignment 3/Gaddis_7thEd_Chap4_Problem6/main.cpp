/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 18, 2015, 11:50 PM
 * Purpose: Homework Assignmnt (Gaddis_7thEd_Chap4_Problem6)
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
    float mass, weigNew;
    
    
    // Display program function and prompt user for input.
    cout<< "This program will calculate an objects weight in newtons \n"
           "as long as you know the mass of an object."<<endl;
    cout<<"Please enter the mass of an object: "<<endl;
    cin>>mass; //input mass of an object
    weigNew= mass * 9.8; //weight = mass * 9.8
    cout<<fixed<<setprecision(2)<<showpoint; 
    if (weigNew >=10 && weigNew <= 1000)
        cout<<"The the wieght of the object in newtons = "<<weigNew<<endl;
    else if (weigNew <10)
        cout<<"The weight of the object in newtons is " <<weigNew<<". The object is too light."<<endl;
    else if (weigNew > 1000)
        cout<<"The weight of the object in newtons is " <<weigNew<<". The object is too heavy."<<endl;
            
    return 0;
}

