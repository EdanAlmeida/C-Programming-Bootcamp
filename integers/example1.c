/*First code in C*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    unsigned students = 25U;
    unsigned long long worldPopulation = 7801235945ULL;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | People in the world\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Count of something\n", count);

    count = count + 1;
    printf("%12u | Count of something + 1 (OVERFLOW)\n", count);

    printf("%12u | INT32_MIN\n", INT32_MIN);
    printf("%12u | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);

    printf("\n\n=== MonsterMash ===\n\n");
    return EXIT_SUCCESS;
}

