#include <stdio.h>
int main()
{
    float a,b,result;
    char c;
    printf("\n Enter Your num-(+,-,*,/)-num:");
    scanf("%f %c %f",&a,&c,&b);
    switch(c)
    {
        case'+':
        result=a+b;
        break;
        case'-':
        result=a-b;
        break;
        case'*':
        result=a*b;
        break;
        case'/':
        result=a/b;
        break;
    }
    printf("\n result:%f",result);
}
