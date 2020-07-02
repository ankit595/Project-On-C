#include<stdio.h> 

float y(float x) 
{ 
	// Declaring the function f(x) = 1/(1+x*x) 
	return 1/(1+x*x); 
} 

// Function to evalute the value of integral 
float trapezoidal(float a, float b, float n) 
{ 
	// Grid spacing 
	float h = (b-a)/n; 

	// Computing sum of first and last terms
	float s = y(a)+y(b); 

	// Adding middle terms in above formula 
	for (int i = 1; i < n; i++) 
		s += 2*y(a+i*h); 

	// h/2 indicates (b-a)/2n. Multiplying h/2 
	// with s. 
	return (h/2)*s; 
} 
// A sample differential equation "dy/dx = (x - y)/2" 
float dydx(float x, float y) 
{ 
	return((x - y)/2); 
} 

// Finds value of y for a given x using step size h 
// and initial value y0 at x0. 
float rungeKutta(float x0, float y0, float x, float h) 
{ 
	// Count number of iterations using step size or 
	// step height h 
	int n = (int)((x - x0) / h); 

	float k1, k2, k3, k4, k5; 

	// Iterate for number of iterations 
	float y = y0; 
	for (int i=1; i<=n; i++) 
	{ 
		// Apply Runge Kutta Formulas to find 
		// next value of y 
		k1 = h*dydx(x0, y); 
		k2 = h*dydx(x0 + 0.5*h, y + 0.5*k1); 
		k3 = h*dydx(x0 + 0.5*h, y + 0.5*k2); 
		k4 = h*dydx(x0 + h, y + k3); 

		// Update next value of y 
		y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);; 

		// Update next value of x 
		x0 = x0 + h; 
	} 

	return y; 
} 


// Driver program to test above function 
int main() 
{ 
	int temp;
	printf("Press 1 for Trapezoidal rule \nPress 2 for Runge Kutta method ");
	scanf("%d",&temp);
	switch(temp)
	{
		case 1:
			// C++ program to implement Trapezoidal rule 
			// Range of definite integral 
			float x0 = 0; 
			float xn = 1; 

			// Number of grids. Higher value means 
			// more accuracy 
			int n = 6; 

			printf("Value of integral is %6.4f\n", 
				trapezoidal(x0, xn, n)); 
			break;		
		case a2:			
			float x0 = 0, y = 1, x = 2, h = 0.2; 
			printf("\nThe value of y at x is : %f", 
				rungeKutta(x0, y, x, h));
			break;
		default:
			break;
	}
	return 0; 
} 
