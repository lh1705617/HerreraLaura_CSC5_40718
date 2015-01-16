/* 
 * File:   main.cpp
 * Author: Laura Herrera*
 * Created on January 13, 2015, 8:00 PM
 * Purpose: In Class Assignment - Truth Table_For Loop
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X!(X||Y)!X&&!Y!(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    for(int X=1;X>=0;X--){
        for(int Y=1;Y>=0;Y--){
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<"  ";
        cout<<(!X?'T':'F')<<"  ";
        cout<<(!Y?'T':'F')<<"   ";
        cout<<(X&&Y?'T':'F')<<"    ";
        cout<<(X||Y?'T':'F')<<"   ";
        cout<<(X^Y?'T':'F')<<"    ";
        cout<<(X^Y^Y?'T':'F')<<"    ";
        cout<<(X^Y^X?'T':'F')<<"      ";
        cout<<(!(X||Y)?'T':'F')<<"      ";
        cout<<(!X&&!Y?'T':'F')<<"       ";
        cout<<(!(X&&Y)?'T':'F')<<"      ";
        cout<<(!X||!Y?'T':'F')<<"       ";
        cout<<endl;
        }
    }    
    //Exit stage right!
    return 0;
}