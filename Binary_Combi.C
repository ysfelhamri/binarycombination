#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3
int main (){
    int i,j,bin,q,r,end,s=pow(2,N)-1;
    char t[N]={'A','B','C'};
    int pt[N];
    printf("Array = { ");
    for(i=0;i<N;i++){
        printf("%c ",t[i]);
    }
    printf("}\n");
    printf("Combinations = \n");
    for(j=1;j<=s;j++){    
    for(i=0;i<N;i++)
        pt[i]=0;
    end=N-1;
    bin=j;
    do{
        q=bin/2;
        r=bin%2;
        bin=q;
        pt[end--]=r;
    }while(q!=0);
    printf("{ ");
    for(i=0;i<N;i++){
        if(pt[i]==1)
        printf("%c ",t[i]);
    }
    printf("}\n");
    }
    return 0;
}
