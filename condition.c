#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("enter age");
    scanf("%d", &x);
    if (x>=18) {
        printf("adult \n");
        printf("can vote \n");
        printf("can drive\n");
    
    }
    else if (x>13 && x<18) {

        printf("teenager");

    }
    
    
     else {
        
        printf("minor");

 }

 return 0;
}