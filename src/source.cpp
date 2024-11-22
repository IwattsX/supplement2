#include <iostream>
#include <cmath>

double rectangle_area(const double length, const double width){
	return length * width;
}

double triangle_area(const double base, const double height){
	return 0.5 * base * height;
}

double circle_area(const double radius){
	return M_PI * pow(radius, 2);
}
