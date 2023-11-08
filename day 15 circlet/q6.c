#include <stdio.h>
int main()
{
    for (int  i = 5; i >=1; i--)
    {
        for (int  s = 1; s < i; s++)
        {
            printf(" ");
        }
        for (int k = i; k <= 4; k++)
        {
            printf("%d",k);
        }
        
        
        for (int  j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    return 0;
}