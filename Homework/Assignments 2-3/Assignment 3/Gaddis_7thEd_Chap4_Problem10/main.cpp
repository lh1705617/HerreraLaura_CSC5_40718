/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 17, 2015, 5:57 PM
 *Purpose: Homework Assignment (Gaddis_7thEd_Chap4_Problem10)
*/
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main()
{
   // Variablea
   float    DISC_50 = 100,
            DISC_40 = 50,
            DISC_30 = 20,
            DISC_20 = 10,
            PURCH_P= 99.00;
   float gross, grand1, dis1, grand2, dis2, dis3, grand3, dis4, grand4;
   int qty;
   //Prompt user to enter quantity of software packages
   cout << "Enter the quantity of software packages you wish to purchase: "<<endl;
   cin >> qty;
   //calculate gross and discount price
   gross= qty*PURCH_P;
   dis1= (qty * PURCH_P) * .50;
   grand1= gross-dis1;
   dis2= (qty * PURCH_P) * .40;
   grand2= gross-dis2;
   dis3= (qty * PURCH_P) * .30;
   grand3= gross-dis3;
   dis4= (qty * PURCH_P) * .20;
   grand4= gross-dis4;
   cout<<fixed<<setprecision(2)<<showpoint;
   if (qty >=DISC_50)
        cout<<"If you purchase "<<qty<<" software packages your discount\n",
        cout<<"will be $ "<<dis1<<" and your total price is $ "<<grand1<<endl;
   else if  (qty >=DISC_40)
        cout<<"If you purchase "<<qty<<" software packages your discount\n",
        cout<<"will be $ "<<dis2<<" and your total price is $ "<<grand2<<endl;
   else if (qty >=DISC_30)
        cout<<"If you purchase "<<qty<<" software packages your discount\n",
        cout<<"will be $ "<<dis3<<" and your total price is $ "<<grand3<<endl;
   else if (qty >=DISC_20)
        cout<<"If you purchase "<<qty<<" software packages your discount\n",
        cout<<"will be $ "<<dis4<<" and your total price is $ "<<grand4<<endl;
   else if (qty >0 )
       cout<<"You do not qualify for a discount."<<endl;
   else 
       cout<<"you have entered an invalid quantity."<<endl;
   return 0;
}