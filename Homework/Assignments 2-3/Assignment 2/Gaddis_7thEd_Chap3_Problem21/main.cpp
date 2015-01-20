/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 11:00AM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Prob21)
 */

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
#include <iostream>
using namespace std;

int main()
{
   float shares= 1000;        // Number of shares 
   float purprc= 32.87;       // Purchase amount per share
   float commish = .02;     //Commission paid to broker
   float salprc= 33.92;      //Selling price per shares
   float profit,prc1,prc2,compr1,compr2,tot1,tot2; //variable for calculation
  
   //Calculate purch and sale price and determine if there was profit/loss
   prc1= shares*purprc; 
   compr1 = prc1*commish;
   tot1= prc1+compr1;
   prc2= shares*salprc;
   compr2= prc2*commish;
   tot2= prc2+compr2;
   profit= tot2-tot1;
   cout << "If Joe buys 1000 shares of stock at $32.87/share and sells"<<endl;
   cout << "the same amount of shares 2 weeks later at $33.92/share "<<endl;
   cout<<"Joe stands to earn $ "<<profit<<" from the sale after a 2% commission"<<endl;
   cout<<"fee is deducted from both transactions."<<endl;
   //Exit stage right!
   return 0;
} 