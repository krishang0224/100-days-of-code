#include <stdio.h>

int main() {
    int s;
    scanf("%d",&s);
    int h = s/3600; 
    int m = (s%3600)/60;
    int seconds = s%60;
    
    printf("%d:%d:%d\n",h, m,seconds);
    
    return 0;
}
