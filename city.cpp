// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program accepts an address and then prints it again but formatted nicely


#include <bits/stdc++.h>
using namespace std;

// This is the conversion of python's city address function in C++.
string city_address(string Addressee, string Apt_Number, string street_number, string street_name, string city, string province, string postal_code = "") {
    
   string city_address = "";
   if(Apt_Number != "") {
       city_address = Addressee + "\n " + Apt_Number + " " + street_number + " " + street_name + "\n" + city + " " + province + " " + postal_code[0];
   }
   city_address = Addressee + "\n " + street_number + " " + street_name+ "\n " + city + " " + province + " " + postal_code;
  
return city_address;

}

int main(void) {
   string Apt_Number = "";
   string Apt = "";
   string city_add = "";
   string Addressee, street_number, street_name, city, province, postal_code;
  
   // Asking for user input.
   // 'cout' prints data onto the console and 'getline()' function reads user input from console.
   cout << "Enter your addressee: ";
   getline(cin, Addressee);
   cout << "Do you have a apartments? (y/n): ";
   getline(cin, Apt);

   // Converting string into upper case letters.
   transform(Apt.begin(), Apt.end(), Apt.begin(), ::toupper);
   if(Apt == "Y" || Apt == "YES") {
       cout << "Enter your apartment: ";
       getline(cin, Apt_Number);
   }
   cout << "Enter your street number: ";
   getline(cin, street_number);
   cout << "Enter your street name: ";
   getline(cin, street_name);
   cout << "Enter your city: ";
   getline(cin, city);
   cout << "Enter your province: ";
   getline(cin, province);
   cout << "Enter your postal code: ";
   getline(cin, postal_code);
  
   // Function call in C++, same as in python.
   city_add = city_address(Addressee, Apt_Number, street_number, street_name, city, province, postal_code);

   cout << city_add << endl;
}