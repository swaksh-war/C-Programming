#include <stdio.h>
int main()
{
    int password, att=1;
    
    while(att!=0)
    {
    printf("\n enter the pincode here: ");
    scanf("%d",&password);
    
        if (password==6945)
        {
            printf("\n the pincode is right");
            att=0;
        }
          else
          {
              printf("\n the pincode is incorrect");
              att++;
          }
          
    }
    return 0;
}