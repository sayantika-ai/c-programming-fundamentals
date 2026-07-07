#include <stdio.h>
#include <math.h>

int main() {
    char day;// s=sunday,m=monday,t=tuesday,w=wednesday,T=thursday,f=friday,S=saturday
    printf("enter day");
    scanf("%s",&day);

    switch (day) {

        case 'S' : printf("sunday\n");
                   break;
        case 'm' : printf("monday\n");
                   break;
        case 't' : printf("tuesday\n");
                   break;
        case 'w' : printf("wednesday\n");
                   break;
        case 'T' : printf("thursday\n");
                   break;
        case 'f' : printf("friday\n");
                   break;
        case 's' : printf("saturday\n");
                   break;
    
        default : printf("not a valid day!\n");


    }
     

}