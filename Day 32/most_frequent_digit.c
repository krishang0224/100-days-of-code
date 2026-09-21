// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main(){
    long long number;
    int count[10] = {0};
    scanf("%lld", &number);

    if(number < 0){
        number = -number;
    }

    if(number == 0){
        count[0] = 1;
    }

    while(number > 0){
        int digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    int most_frequent = 0;

    for(int i = 1; i < 10; i++){
        if(count[i] > count[most_frequent]){
            most_frequent = i;
        }
    }

    printf("%d\n", most_frequent);
    return 0;
}
