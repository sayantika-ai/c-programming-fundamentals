// take input from user till they enter an odd no.
#include <stdio.h>
int main() {
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=n ; i<=5; i++) {
        if (i==3) {
        break;
        }
    printf("%d\n",i);
    }
    printf("end");
    return 0;
    
}

    