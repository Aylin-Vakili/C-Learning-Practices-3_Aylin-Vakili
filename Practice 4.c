#include<stdio.h>

int main()
{
    int x, y, z;
     printf("Input the three sides of a triangle : ");
     scanf("%d %d %d", &x, &y, &z);

    // Check if the triangle is a possible triangle
    if ( (x + y > z) && (x + z > y) && (z + y > x) )
       {printf("The triangle is a possible triangle\n");}

    else
       {printf("The triangle is an impossible triangle\n");}

 //Goodbye :D
 return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
