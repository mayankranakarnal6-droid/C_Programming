   // 5. Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
int main()
{
int i=0;
int sum=0;
while (i<=10){
    sum +=i;
    i++;
}
printf ("the value of first 10 natural numbers is\n\t\t(%d)\n",sum);

    return 0;
}

