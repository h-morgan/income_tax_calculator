/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: haley
 *
 * Created on March 4, 2018, 10:24 AM
 */

/******************************************************************************

Haley Morgan
CSC-108 Exam 3
Part2

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main () {
    
    cout << "Please enter your income: ";
    double income;
    cin >> income;
    
    cout << "Please enter S for single or M for married: ";
    string maritalStatus;
    cin >> maritalStatus;
    
    // calculate your tax
    double tax;
    
    // calculate tax for people filing as single
    if (maritalStatus == "S") {
        if ((income >= 0) && (income <= 21450)) {
            tax = 0.15 * income;
        }
        else if ((income > 21450) && (income <= 51900)) {
            tax = 3215.50 + (0.28 * (income - 21450));
        }
        else if (income > 51900) {
            tax = 11743.50 + (0.31 * (income - 51900));
        }
    }
    
    // calculate tax for people filing as married
    else if (maritalStatus == "M") {
        if ((income >= 0) && (income <= 35800)) {
            tax = 0.15 * income;
        }
        else if ((income > 35800) && (income < 86500)) {
            tax = 5370.00 + (0.28 * (income - 35800));
        }
        else if (income > 86500) {
            tax = 19566.00 + (0.31 * (income - 86500));
        }
    }
    
    
    cout << "The tax is $" << tax;



  return 0;
}


