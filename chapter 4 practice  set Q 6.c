// 6. Write a program to implement program 5 using �for� and �do-while��loop.
#include<stdio.h>
int main()
{
    int i=0;
    int sum = 0;
    do{
            sum +=i;
            i++;

    }while(i<=10);
    printf("the sum of first 10 natural numbers is %d\n",sum);

    return 0;
}
