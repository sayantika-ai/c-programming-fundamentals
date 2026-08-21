// to print the sum of first 10 natural numbers and print the no.s in reverse.
#include <stdio.h>
int main() {
    int n;
    printf("enter number");
    scanf("%d", &n);
    int sum =0;
    for (int i =1,j=n; i<=n && j>=1; i++,j--) {
        sum = sum + i;
        printf("%d\n",j);
    }
        printf("%d\n",sum);
        return 0;

        
    }

