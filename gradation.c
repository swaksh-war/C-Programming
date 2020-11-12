#include <stdio.h>
int main()
{
    int a;
    printf("\n Enter Your Percentge Here:");
    scanf("%d",&a);
    switch(a/10)
    {
        case 10:
        printf("grade o ");
        break;
        case 9:
        printf("grade a ");
        break;
        case 8:
        printf("grade b ");
        break;
        case 7:
        printf("grade c ");
        break;
        case 6:
        printf("grade d ");
        break;
        default:
        printf("\n fail");
    }
    return 0;
}
