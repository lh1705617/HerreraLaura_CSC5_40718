/* 
 * File:   main.cpp
 * Author: Laura
 *
 * Created on January 19, 2015, 10:06 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
 
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    float length1, length2, width1, width2, area1, area2;
    
     cout << "This program calculates the area of a two";
     cout << " rectangles.\n";
     cout << "Enter the length and width of the first rectangle ";
     cout << "separated by a space.\n";
     cin >> length1 >> width1;
     area1 = length1 * width1;
     cout << "Enter the length and width of a second rectangle ";
     cout << "separated by a space.\n";
     cin >> length2 >> width2;
     area2 = length2 * width2;
     if (area1<area2)
        cout << "The area of rectangle 1 is  ("<<area1<<"), which is less than ", 
        cout << "the area of rectangle 2 (" <<area2<<")."<< endl;
     else if (area1>area2)
        cout << "The area of rectangle 1 is ("<<area1<<"), which is greater than ", 
        cout << "the area of rectangle 2 (" <<area2<<")." <<endl;
    else
         cout<<"The area of rectangle 1 ("<<area1<<") is equal to the area of rectangle 2 ("<<area2<<"). "<<endl;
     
    return 0;
}

