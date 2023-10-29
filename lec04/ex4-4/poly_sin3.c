/*
calculation of polynomials poly.c
*/

#include <stdio.h>
#include <math.h>

#define N  4

int main()
{
    /**** (1) variable declaration ****/
    /* set coefficients */
    double	c[N] = {0, 1, 0, -1/6};
    
    double	x, y;
    int	i ;
    
    /**** (2) processing contents ****/
    for(x = -M_PI; x <= M_PI + 0.005; x += M_PI/12){ // add 0.005 so the program can reach 3.141593
        for(y = c[N-1], i = N-2; i >= 0; --i) {
            y = y * x + c[i];
        }
        printf("%f %f\n", x, y);
    }
    return 0;
}
