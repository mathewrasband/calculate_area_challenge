//
//  main.cpp
//  calculate_area_challenge
//
//  Created by Mathew Rasband on 4/10/21.
//

#include <iostream>
using namespace std;

double CalculateArea(double length, double width);
double CalculatePrice(double area);

int main() {
    double length = 0.0;
    double width  = 0.0;
    double area   = 0.0;
    double price  = 0.0;
    
    cout << "Length of the room: " << endl;
    cin  >> length;
    cout << "Width of room: " << endl;
    cin  >> width;
    
    area = CalculateArea(length, width);
    price = CalculatePrice(area);
    
    cout << "It will cost $" << price << " to clean your room." << endl;
    
    return 0;
}

double CalculateArea(double length, double width) {
    double area = 0.0;
    
    area = length * width;
    
    return area;
}

double CalculatePrice(double area) {
    double price = 0.0;
    
    if(area <= 120) {
        price = 99;
    }
    else{
        price = 99 + ((area - 120) * .25);
    }
    return price;
}
