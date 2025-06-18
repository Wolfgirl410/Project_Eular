#include<stdio.h>
#include <cstdint> 
int main(){
    uint64_t x;
    x=600851475143;
    int y;

    for (; x >= 2; x--) {
        for (y = 2; y < x; y++)
            if (x % y == 0) 
            break;

        if (y == x) {
            printf("%llu\n", x);
        }
    }
    return 0;
}