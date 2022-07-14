#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    
    int variable = 0;

    printf("%llu\n", sizeof(variable)); //4
    printf("%llu\n", sizeof(int)); //4
    printf("%llu\n", sizeof(long int)); //8
    printf("%llu\n", sizeof(long long int)); //8
    printf("%llu\n", sizeof(char)); //1
    printf("%llu\n", sizeof(int16_t)); //2
    printf("%llu\n", sizeof(int32_t)); //4
    printf("%llu\n", sizeof(int64_t)); //8
    printf("%llu\n", sizeof(123 && 456)); //4
    printf("%llu\n", sizeof(123LL && 456LL)); //4

    printf("\n\n=== Monster Mash ===\n\n");
    return EXIT_SUCCESS;
}



