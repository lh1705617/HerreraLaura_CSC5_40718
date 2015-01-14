/* 
 * File:   main.cpp
 * Author: rcc
 * Illustrate Branchinh
 * Created on January 13, 2015, 9:15 PM
 */


//System Libraries
#include <cstdlib> //Random rand(),srand()
#include <iostream>//Keyboard/Monitor I/O
#include <fstream> //File I/O
#include <ctime>   //Time functions
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
//Randomly initialize a variable
    srand(static_cast<unsigned int>(time(0)));
    bool torf=rand()%2;
    //output the random boolean
    cout<<"We randomly chose "<<torf<<endl;
    //Illustrate the ternery operator
    cout<<"Using the ternery operator the random boolean is ";\
    cout<<(torf?"odd":"Even")<<endl;
    //illustrate with if statement
    cout<<"Using the ff statement the random boolean is ";\
    if (torf==1)cout<<"odd"<<endl;
    if (torf==0)cout<<"Even"<<endl;
    //illustrate ifelse statement
    cout<<"Using the if-else statement the random boolean is ";\
    if (torf==1)cout<<"odd"<<endl;
    else cout<<"Even"<<endl;
    //illustrate switch statement
    cout<<"Using the switch statement the random boolean is ";\
        switch (torf){
        case 1:cout<<"odd"<<endl;break;
        default: cout<<"even"<<endl;
    }
    //Exit stage right!!:) 
    return 0;
}

