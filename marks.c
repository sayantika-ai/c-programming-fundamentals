#include <stdio.h>
#include <math.h>

int main(){

int x;
printf("enter marks");
scanf("%d",&x);

if (x<=30) {
    printf("fail\n");
}
elseif (x>=30 && x<=100) {
    printf("pass");
}
    else {
        printf("wrong marks");

    }

return 0;
}