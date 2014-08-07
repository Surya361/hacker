#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0; 
        int hecanbuy = n/c ;
        int hegets = hecanbuy/m ;
        int unused = hecanbuy%m ;
        int new = (hegets+unused)/m;
        answer = hegets+hecanbuy+new;
        
        printf("%d\n",answer);
    }
    return 0;
}

