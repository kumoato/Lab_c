#include<stdio.h>
void main(){
    system("cls");

    int b, e;
    printf("Enter base: ");
    scanf("%d",&b);

    printf("Enter expo: ");
    scanf("%d",&e);

    calculate_power(b, e);
}
void calculate_power(int b, int e ){
    int power = 1;
    while (e>0)
    {

        power = power * b;
        e--;

    }
    printf("The power of the number = %d", power);   
}