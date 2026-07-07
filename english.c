// To check if a character is uppercase or lowercase

#include <stdio.h>
#include <math.h>

int main(){
    char c;
    printf("enter character");
    scanf("%c", &c);
    if (c>='A' && c <='Z'){
         printf("uppercase\n");

    }
   else if (c>='a' && c<='z') {
     printf("lowercase\n");

   }
   else {
       printf("not an english character");
    }
    return 0;
}
