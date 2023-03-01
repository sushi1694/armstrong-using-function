#include<stdio.h>
int armstrong(int orgnum)
{
    int r = 0;
    int sum = 0;
    int power = 0;
    
    int num = orgnum;
    while (num != 0)
    {
    r=num % 10;
    power=r*r*r;
    sum+=power;
    num=num/10;
    }
    if (sum==orgnum)
    return 0;
    else
    return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (armstrong(num)==0)
    {
        printf("%d is an Armstrong Number.",num);
    }
    else
    {
        printf("%d is not an Armstrong Number.",num);
    }
    return 0;
}
