#include<stdio.h>
int main (){
    int first,second,third,fourth;
    printf("Enter your first number:");
    scanf("%d",&first);
     printf("Enter your second number:");
    scanf("%d",&second);
     printf("Enter your third number:");
    scanf("%d",&third);
     printf("Enter your fourth number:");
    scanf("%d",&fourth);
     // let first be greatest number------------------------------------------------------>
     int greater = first;
     if(second>greater){
        greater=second;
     }
     if(third>greater){
        greater=third;
     }
     if(fourth>greater){
        greater=fourth;
     }
     printf(" The greater number is :%d",greater);
     return 0;
}
