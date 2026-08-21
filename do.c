#include <stdio.h>

int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    
    
    do {
        printf("%d\n",n);
        n++;
        
    }
       while(n<= 5);
    
       return 0;


}