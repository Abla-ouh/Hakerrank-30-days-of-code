#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* N_endptr;
    char* N_str = readline();
    int N = strtol(N_str, &N_endptr, 10);
    scanf("%d",&N);
if(N%2 != 0){
    printf("Weird");
}
else if(N%2 == 0 && N<=5 && N>=2){
    printf("Not Weird");
}
else if(N%2 == 0 && N<=20 && N>=6){
    printf("Weird");
}
else if(N%2 == 0 && N>=20){
    printf("Not Weird");
}
    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

    return 0;
}
