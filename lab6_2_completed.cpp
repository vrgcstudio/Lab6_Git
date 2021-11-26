#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    double rad = x*(M_PI/180);
    return rad;
}

double findXComponent(double line1, double line2, double rad1, double rad2)
{  
    double xcomponent = (line1 * cos(rad1)) + (line2 * cos(rad2));
    return xcomponent;
}

double findYComponent(double line1, double line2, double rad1, double rad2)
{  
    double ycomponent = (line1 * sin(rad1)) + (line2 * sin(rad2));
    return ycomponent;
}

double pythagoras(double xcomponent, double ycomponent)
{
    double length = sqrt(pow(xcomponent,2) + pow(ycomponent,2));
    return length;
}

double rad2deg(double atan2_result)
{
    double direction = atan2_result * 57.295779513;
    return direction;
}

void showResult(double l, double d)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << l << endl;
    cout << "Direction of the resultant vector (deg) = " << d << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}

