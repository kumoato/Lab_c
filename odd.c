#include<stdio.h>
void main(){
    system("cls");
    int i, nTerm;
    printf("Enter number of term: ");
    scanf("%d",&nTerm);

    printf("Odd of %d term are: \n",nTerm);
    for(i=1; i<= 2*nTerm ; i++){
        if(i%2 == 0)
            continue;
        else
        {
            printf("%d ",i);
        }


}