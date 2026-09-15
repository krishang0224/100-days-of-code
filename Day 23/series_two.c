// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
