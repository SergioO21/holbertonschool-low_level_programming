#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct point - Stores the coordinates of the point.
 *
 * @x: Point value.
 * @y: Point value.
 */

typedef struct point
{
	double x;
	double y;
} new_point;

double _sqrt(double xy);
int caldistance(double x1, double y1, double x2, double y2);

/**
 * main - Send the values to be calculated.
 *
 * Return: Always (0);
 */

int main(void)
{
	caldistance(-3, -1, 2, 3);
	caldistance(11, 5, 7, 2);
	caldistance(-25, -13, 10, 5);
	caldistance(-7, -8, -10, 11);
	caldistance(30, 25, 4, 9);
	caldistance(-17, 99, 45, -45);
	caldistance(-6, 10, 47, 2);

	return (0);
}

/**
 * caldistance - Calculates the distance between 2 points.
 *
 * @x1: Value of x at the first point.
 * @y1: Value of y at the first point.
 * @x2: Value of x at the second point.
 * @y2: Value of y at the second point.
 *
 * Return: If fails, returns (1). Else returns (0).
 */

int caldistance(double x1, double y1, double x2, double y2)
{
	double pow_x, pow_y, result;

	new_point *point1;
	new_point *point2;

	point1 = malloc(sizeof(new_point));
	point2 = malloc(sizeof(new_point));

	if (point1 == 0)
		return (1);

	else
	{
		point1->x = x1;
		point1->y = y1;
	}

	if (point2 == 0)
		return (1);

	else
	{
		point2->x = x2;
		point2->y = y2;
	}

	pow_x = (point2->x - point1->x) * (point2->x - point1->x);
	pow_y = (point2->y - point1->y) * (point2->y - point1->y);

	result = _sqrt(pow_x + pow_y);

	printf("\nThe distance between (%.1f, %.1f)", x1, y1);
	printf(" and (%.1f, %.1f)", x2, y2);
	printf(" is => %.1f\n", result);

	free(point1);
	free(point2);

	return (0);
}

/**
 * _sqrt - Calculates the square root of a number.
 *
 * @xy: Number to calculate its square root.
 *
 * Return: Square root of a number.
 *
 */

double _sqrt(double xy)
{
	double i, r;

	i = 0;

	while (xy >= r)
	{
		i += 0.1;
		r = i * i;
	}

	return (i);
}
