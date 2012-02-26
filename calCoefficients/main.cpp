//
//  main.cpp
//  calCoefficients
//
//  Created by Jason Mansfield on 2/26/12.
//  Copyright 2012 Regis University. All rights reserved.
//


#include <iostream>

double pascTri(double num);

using namespace std;

int main ()
{
    double coeff = 1; 
    while(coeff != 0){
        cout << "PASCALS TRIANGLE" << endl;
        cout << "Please enter row to view: " << endl;
        cin >> coeff;
        if(coeff == 0){
            cout << "Bye!" << endl;
        }
        else{
            pascTri(coeff);
        }
    }
    return 0;
}
double pascTri(double num){
    
    for(int a = 0; a <= num; a++){
        int b = 1;
        for(int c = a; c >= 0; c--){
            cout << b << " ";
            b = b * c/(a - c + 1);
        }
        cout << endl;
    }
    
    
    return num;
}



