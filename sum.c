/*******************************************************************************
 * @file        sum.c
 * @brief       Calculates the summation metrics for basic user input arrays.
 * @author      Sayantika Das (CSE-AI&ML Specialized Track)
 * @institution Chandigarh University (CUIMS: 25CSH-107)
 * @date        July 03, 2026
 * 
 * @details     Developed as part of the Semester 1 GPA Protection Track.
 *              Implements standard input streaming and memory tracking.
 *              Optimized for clean compilation under GCC/MinGW configurations.
 *******************************************************************************/



#include <stdio.h>
int main() {
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int sum = a+b;
    printf("sum is %d",sum);
    return 0;
}