#include <stdio.h>
int main(){

    int number;
    printf("ENTER ANY NUMBER: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d IS EVEN NUMBER!", number);
    }else{
        printf("%d IS ODD NUMBER!", number);
    }

    
    

   return 0;

}