#include <stdio.h>
int main(){
    //---------------Declaring variable------------------------------------------------->
    float math,science,english;
    //---------------------taking input from user-------------------------------------->
    printf("Enter your  marks of math subject :");
    scanf("%f",&math);

    printf("Enter your  marks of science subject :");
    scanf("%f",&science);

    printf("Enter your  marks of english subject :");
    scanf("%f",&english);
//----------------Sum of total marks----------------------------------------------------------->
  float marks = math+science+english;
  //-------------------formula to calculate %------------------------------------------------->
    float total_marks= marks/300;
    float total_marks1= total_marks*100;
//----------------------checking marks wither pass or fail----------------------------------->
     printf(" you got %f\n",total_marks1);
    if(total_marks1 <33){
        printf(" you are fail");
    }else if(total_marks1 == 33 || total_marks1>=33 ){
        printf(" Congralution you are pass");
    }else{
         printf(" Congralution you are pass");
    }
    return 0;
}