// to check if x is a two digit number
#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("enter number");
    scanf("%d",&x);
    printf("%d",x>9 && x <100 );
    return 0;

}