#include<stdio.h>

void main(){

    system("cls");
    
    int f,x,f_tmp;

    printf("Enter factorial number here : ");
    scanf("%d",&f);

    f_tmp = f;
    x =1;
    while (f_tmp>0){
        
        x = x * f_tmp;
        f_tmp--;
    }
    printf("Factorial of the num(%d) = %d", f,x);
    
}