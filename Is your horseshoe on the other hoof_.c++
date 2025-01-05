#include <stdio.h>

int main() {
    long long int a, b, c, d;
    long long int duplicates = 0;
    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    
    if (a == b || a == c || a == d) {
        duplicates++;
    }
    if (b == c || b == d) {
        duplicates++;
    }
    

    if (c == d) {
        duplicates++;
    }
    

    if(duplicates == 0) {
        printf("0\n"); 
    }
    else if(duplicates == 1) {
        printf("1\n");
    }
    else if(duplicates == 2) {
        printf("2\n");
    }
    else if(duplicates == 3) {
        printf("3\n");
    }

    return 0;
}