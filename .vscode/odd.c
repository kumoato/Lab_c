#include<stdio.h>
void main(){

    int i,n;
    printf("Enter number here : ");
    scanf("%d",&n);

    printf("Odd unmber of %d terms are :- \n" ,n);

    for(i=1; i<= 2*n; i++){

        if (i%2 == 0)
          continue;
        else
        {
            printf("%d, ", i);
        }
        
    }
}