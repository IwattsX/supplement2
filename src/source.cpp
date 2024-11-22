#include <iostream>
#include <cmath>

/**
 * @brief Calculates the rectangle's area
 * 
 * @param length rectangle length
 * @param width rectangle width
 * @return double area of the rectangle (l * w)
 */
double rectangle_area(const double length, const double width){
	return length * width;
}

/**
 * @brief Calculates the triangle's area
 * 
 * @param base triangle base
 * @param height triangle height
 * @return double area of a triangle (1/2 * b * h)
 */
double triangle_area(const double base, const double height){
	return 0.5 * base * height;
}

/**
 * @brief Calculates the circle's area
 * 
 * @param radius circle radius
 * @return double area of a circle (PI * r^2)
 */
double circle_area(const double radius){
	return M_PI * pow(radius, 2);
}
