#include <stdio.h>
#include <math.h>

int main(){
    
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);
    //This code cannot be compiled. There is an issue with the sqrt.
    //Update: the compilation is done. I needed to add -lm to gcc file.c -o file when working on Linux env.    
    return 0;
}