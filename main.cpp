#include "point.hpp"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

int main() {

    Point p1(3.2, 9.8);
    Point p2(5.5, -1.2);
    double distance1 = p1 - p2;
    string midpoint1 = p1 / p2;
    cout << "Distance (p1 - p2): " << distance1 << endl;
    cout << "Midpoint (p1 / p2): " << midpoint1 << endl;
    assert((distance1 >= 11.2378 && distance1 <= 11.2380)); 
    assert((p1 == p2) == false);
    assert((p1 != p2) == true);
    assert(midpoint1 == "(4.35, 4.3)");

  
    Point p3(8.8, 9.9);
    Point p4(8.8, 9.9);
    double distance2 = p3 - p4;
    string midpoint2 = p3 / p4;
    cout << "Distance (p3 - p4): " << distance2 << endl;
    cout << "Midpoint (p3 / p4): " << midpoint2 << endl;
    assert(distance2 == 0.0);
    assert((p3 == p4) == true);
    assert((p3 != p4) == false);
    assert(midpoint2 == "(8.8, 9.9)");


    Point p5(-8.0, 4.0);
    Point p6(7.0, -8.0);
    double distance3 = p5 - p6;
    string midpoint3 = p5 / p6;
    cout << "Distance (p5 - p6): " << distance3 << endl;
    cout << "Midpoint (p5 / p6): " << midpoint3 << endl;
    assert((distance3 >= 19.2093 && distance3 <= 19.2095)); 
    assert((p5 == p6) == false);
    assert((p5 != p6) == true);
    assert(midpoint3 == "(-0.5, -2)");


    Point p7(-6.2, -5.7);
    Point p8(-3.3, -7.4);
    double distance4 = p7 - p8;
    string midpoint4 = p7 / p8;
    cout << "Distance (p7 - p8): " << distance4 << endl;
    cout << "Midpoint (p7 / p8): " << midpoint4 << endl;
    assert((distance4 >= 3.36154 && distance4 <= 3.36156)); 
    assert((p7 == p8) == false);
    assert((p7 != p8) == true);
    assert(midpoint4 == "(-4.75, -6.55)");

    Point p9(0.0, 0.0);
    Point p10(0.0, 0.0);
    double distance5 = p9 - p10;
    string midpoint5 = p9 / p10;
    cout << "Distance (p9 - p10): " << distance5 << endl;
    cout << "Midpoint (p9 / p10): " << midpoint5 << endl;
    assert(distance5 == 0.0);
    assert((p9 == p10) == true);
    assert((p9 != p10) == false);
    assert(midpoint5 == "(0, 0)");

    Point p11(10000.0, 10000.0);
    Point p12(20000.0, 20000.0);
    double distance6 = p11 - p12;
    string midpoint6 = p11 / p12;
    cout << "Distance (p11 - p12): " << distance6 << endl;
    cout << "Midpoint (p11 / p12): " << midpoint6 << endl;
    assert((distance6 >= 14142.134 && distance6 <= 14142.136)); 
    assert((p11 == p12) == false);
    assert((p11 != p12) == true);
    assert(midpoint6 == "(15000, 15000)");

    cout << "All tests passed successfully!" << endl;
    return 0;
}
