#include <stdio.h>
int main(){
     int available = 30;
     int groups, requested;
     int assigned = 0;
     int rejected = 0;
     

   printf("ENTER THE NUMBER OF THE STUDENT GROUP: ");
   scanf("%d", &groups);

   for (int i = 1; i <= groups; i++){
    printf("Group %d\n", i);
    printf("ENTER THE NUMBER OF THE COMPUTER REQUESTED: ");
    scanf("%d", &requested);
    
    if (requested > 0 && requested <= available){
        available -= requested;
        assigned += requested;

        printf("REQUEST ACCEPTED\n");
    }else{
        rejected++;
        
        printf("REQUEST REJECTED\n");}
    }
    printf("AVAILABLE COMPUTER: %d\n", available);



  printf("=======FINAL SUMMARY=======\n");
  printf("TOTAL COMPUTERS ASSIGNED: %d\n", assigned);
  printf("REMAINING COMPUTERS: %d\n", available);
  printf("NUMBER OF REJECTED REQUESTS: %d\n", rejected);

  return 0;


}  