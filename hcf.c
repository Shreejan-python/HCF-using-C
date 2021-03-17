#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int m;
    printf("Enter a number : ");
    scanf("%d", &m);

    int mn;
    int hcf;
    if (n<m)
    {
        mn = n;
    }
    else{
        mn = m;

    }

    for (int i = 1; i < (mn + 1); i++)
    {
        if (mn%i == 0)
        {
            hcf = i;
        }
        
    }

    printf("The HCF of %d and %d is %d", n, m, hcf);
    
    

    return 0;
}