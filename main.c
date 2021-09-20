/*
Author: Pietro Piva Vieira
Author Nickname: Marechal Dev
Purpose: This program purpose it's to print the area/perimeter of a rectangle
Date: 20/09/2021 (day/month/year)

*/

#include <stdio.h>

int main()
{
  // Declaring the variable we'll be using
  double rectangleWidth, rectangleHeight, rectanglePerimeter, rectangleArea;

  // Get the rectangle width from the user
  printf("Enter the rectangle width: ");
  scanf("%lf", &rectangleWidth);
  printf("\n");

  // Get the rectangle height from the user
  printf("Enter the rectangle height: ");
  scanf("%lf", &rectangleHeight);
  printf("\n");

  // Calculate the perimeter and the area of the rectangle
  rectanglePerimeter = (rectangleHeight + rectangleWidth) * 2;
  rectangleArea = rectangleHeight * rectangleWidth;

  // Print out the results formated with precision 2
  printf("The rectangle perimeter is %.2lf and the area is %.2lf\n", rectanglePerimeter, rectangleArea);

  return 0;
}