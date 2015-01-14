/* 
 * File:   main.cpp
 * Author: Laura Herrera
 * Created on January 14, 2015, 10:51 AM
 * Purpose: Homework assignment (Gaddis_7thEd_Chap3_Prob22)
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string age;
        string city;
        string college;
        string job;
        string anim;
        string petnm;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	getline(cin, age);
        cout << "Please enter the name of a city: ";
	getline(cin, city);
	cout << "Enter the name of a college: ";
	getline(cin, college);
        cout << "Enter a profession: ";
	getline(cin, job);
        cout << "Enter a type of animal: ";
	getline(cin, anim);
        cout << "Enter a pets name: ";
	getline(cin, petnm);
        
	cout << "There once was a person named " << name;
	cout << " who lived in " << city << ". At the age of "<<age<<"," <<endl;
        cout <<name<<" went to college at "<<college<<". "<<name<<" graduated"<<endl;
        cout <<"and went to work as a "<<job<<" ."<<" Then, "<<name<<endl;
        cout << "adopted a (n) "<<anim<<" named "<<petnm<<"."<< " They both lived ";
        cout << "happily ever after."<<endl;
	return 0;
}
