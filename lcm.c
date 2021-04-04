#include <stdio.h>

int lcm(int a, int b){
    int mx;
    if (a>b)
    {
        mx = a;
    }
    else
    {
        mx = b;
    }
    while (1)
    {
        if ((mx%a==0) && (mx%b==0))
        {
            return mx;
            break;
        }
        mx ++;
    }
    
    
    
}

int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter another number\n");
    scanf("%d", &b);

    printf("HCF of %d and %d is %d", a, b, lcm(a, b));
    
    return 0;
}