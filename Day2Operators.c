#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    scanf("%.01lf",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    double tip = (tip_percent*meal_cost/100);
    double tax = (meal_cost*tax_percent/100);
    int totalCost = (int)round(meal_cost + tip + tax);
    printf("%d",totalCost);
}
