#include <stdio.h>
int main(){
    char a;
    printf("Enter a charracter to check whether it is lowercase or not :");
    scanf("%c",&a);
    char A='A';
    if(a != A){
        printf("It's is lowercase");
    }else{
        printf("It's not a lowercase");
    }
    return 0;
}