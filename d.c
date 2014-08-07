#include<stdio.h>
#include<stdlib.h>

int digits(int a)
    {
    int div = a/10;
    int mod = a%10;
    int counter = 0;
    while(mod != 0 || div != 0)
        {
    
        if( (mod != 0 && (a%mod) == 0))
            counter++;
        int temp = div;
        div = div/10;
        mod = temp%10;
    }
    return counter;
}
int main(){
    int t;
    scanf("%d",&t);
    int temp = t;
    while(t--)
        {
        int n;
        scanf("%d",&n);
        if(n == 0)
            printf("%d",0);
        else
        printf("%d",digits(n));
    }
}

