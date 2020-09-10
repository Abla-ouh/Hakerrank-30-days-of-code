#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
  int a ;
    double b;
    char str[50];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%*[\n] %[^\n]",str);
    printf("%d\n",i+a);
    printf("%.01f\n",d+b);
    printf("%s%s",s,str);

    
    return 0;
