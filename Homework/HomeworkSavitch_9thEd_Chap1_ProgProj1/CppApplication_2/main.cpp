/* 
 * File:   main.cpp
 * Author: Laura Herrera
 *January 8, 2015, 6:30pm
 * Purpose:Homework Assignment 1
 *
 * Created on January 8, 2015, 6:26 PM
 */
//user libraries
//Global Constants
//Function Prototypes

//Execution begins here

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int op1,op2,sum=0,prod=1;
    //Prompt for the two operands
    cout<<"Input 2 integers having a range of [-2^31,]";
    cin>>op1>>op2;
    //Calculate the sum and the product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //output the results
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
    //exit stage right
    return 0;
}

