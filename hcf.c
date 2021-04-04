#include <stdio.h>

int hcf(int a, int b){
    if (a==0)
    {
        return b;
    }
    else if (b==0)
    {
        return a;
    }
    else
    {
        return hcf(b, a % b);
    }
    
    
    
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int m;
    printf("Enter a number : ");
    scanf("%d", &m);
    

    printf("The HCF of %d and %d is %d", n, m, hcf(n, m));
    
    

    return 0;
}