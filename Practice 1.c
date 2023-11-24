#include <stdio.h>

int main ()
{
    int num;
    printf("\n Enter any integer to test whether it is odd or even : ");
    scanf("%d",&num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf(" %d is even\n ", num);
    else
        printf(" %d is odd\n ", num);

    return(0);
}
//Made by Aylin Vakili - Student number : 14025141115 - Practice 1
