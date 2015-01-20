/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 18, 2015, 10:14 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap_Problem21)
 */

//User Libraries
#include <iostream>
#include <cmath> 
#include <iomanip> //
using namespace std;

//Global Constants
 const float CONVPI = 3.14159;
//Percent Conversion

//Function Prototypes

//Execution begins here
int main()
{
   //Declare Variables
   float radius,
         length, 
         width, 
         area, 
         height, 
         base;

    int choice;  // To hold a menu choice
 
   // Constants for menu choices
   const int CIR_CHOICE = 1,
             REC_CHOICE = 2,
             TRI_CHOICE = 3,
             QUIT_CHOICE = 4;

   // Display the menu and prompt user for selection.
   cout << "                Welcome to the Geometry Calculator!!\n"
        << "       Please select the type conversion you would like to perform \n\n"
        << "1. Find the Area of a Circle\n"
        << "2. Find the Area of a Rectangle\n"
        << "3. FInd the Area of a Triangle\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
   cin >> choice; //Enter choice for for type of conversion 
   
   // Set formatting.
   cout << fixed << showpoint << setprecision(2);
   
   // Output based on users selection.
   switch (choice)
   {
      case CIR_CHOICE: 
         
         cout << "This program calculates the area of a circle."<<endl;
         cout << "What is the radius of the circle? ";
         cin >> radius;
         area = CONVPI * (radius*radius);
         if (radius >0)
            cout << "The area of the circle is " << area << endl;
         else 
            cout<<"Error!! The radius cannot be a negative number. Please ",
            cout<<"re-run the program and enter a positive number. "<<endl;
             
          
         break;
         
      case REC_CHOICE:
         cout << "This program calculates the area of a ";
         cout << "rectangle.\n";
         cout << "Enter the length and width of the rectangle ";
         cout << "separated by a space.\n";
         cin >> length >> width;
         area = length * width;
         if (length >0 && width >0)
            cout << "The area of the rectangle is " << area << endl;
         else 
            cout<<"Error!! The length and width cannot be a negative number. ",
            cout<<"Please re-run the program and enter a positive number. "<<endl;
         break;
         
      case TRI_CHOICE:
         cout << "This program calculates the area of a ";
         cout << "triangle.\n";
         cout << "Enter the base and the of the triangle ";
         cout << "separated by a space.\n";
         cin >> base >> height;
         area = base * height* .5;
         if (base >0 && height >0)
            cout << "The area of the triangle is " << area << endl;
          else 
            cout<<"Error!! The base and height cannot be a negative number. ",
            cout<<"Please re-run the program and enter a positive number. "<<endl;
         break;
        
      case QUIT_CHOICE:
         cout << "Program ending.\n";
         break;
         
      default:
         cout << "The valid choices are 1 through 4. Run the\n"
              << "program again and select one of those.\n";
   }
//Exit
   return 0;
}