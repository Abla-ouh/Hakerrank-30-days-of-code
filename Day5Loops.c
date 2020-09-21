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
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);
    int i,result;
    scanf("%d",&n);
    for(i=1 ; i<=10 ; i++){
        result = n*i;
        printf("%d x %d = %d\n",n,i,result);
    }
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    return 0;
}
