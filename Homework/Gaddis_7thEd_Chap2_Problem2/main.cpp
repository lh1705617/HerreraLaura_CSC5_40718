/* 
 * File:   main.cpp
 * Author: Laura Herrera    
 * Purpose: Gaddis 7thEd Chapter2 Problem2
 *
 * Created on January 11, 2015, 5:34 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Global constants
//Function prototypes

//Execution begins here
int main(int argc, char** argv) {

//Declare variables
    float sales = 4.6e6; //Amount of sales this year
    float percentSales = .62; //Percent of sales generated]
    int salesGen = sales * percentSales;
    
    //Calculate percent of sales generated this year
    cout<<"The East Coast sales division will generate $"<<salesGen<<endl;
    cout<<"if the company has $ 4.6 millions in sales this year."<<endl;
    return 0;
}

