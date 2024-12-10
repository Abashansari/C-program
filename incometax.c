#include<stdio.h>
int main (){
float income;
float tax;
printf("Enter your annual income :");
scanf("%f",&income);

char a='%';
//------------calculating income tax--------------------->
if(income>=250000 && income<=500000){
    tax= income * 5 / 100;
}
if(income>500000 && income<1000000){
     tax= income * 20 / 100;
}
if(income>1000000){
     tax= income * 30 / 100;
}
if(income<2.5){
     printf("Congralution there is no tax for you");
}
printf("the total tax of is to be paid is:%f",tax);
    return 0;
}