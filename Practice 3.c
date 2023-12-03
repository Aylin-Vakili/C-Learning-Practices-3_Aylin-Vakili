#include<stdio.h>
#include<math.h>

 int main()
{ float a,b,c,delta,x2,x1 ;
    printf("Enter coefficients: ");
     scanf("%f %f %f", &a , &b , &c );
    if (a<0){ a=-a ; b=-b ; c=-c ; }
 delta = pow( b , 2 ) - 4*a*c ;

    if (delta < 0){printf ("Equation has no real roots\n");}

    else { x1 = ( (-b - sqrt(delta)) / (2*a));
           x2 = ( (-b + sqrt(delta)) / (2*a ));
        printf("Roots are : %.2f , %.2f\n" , x1 , x2 );}

  return 0;
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 3
