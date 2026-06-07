#include <stdio.h>
#include "matmul.h"

int main() {

    float m1[] = {1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F};
    float m2[] = {7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F};

    float ans[4] = {};

    matmul(m1, m2, ans, 2, 3, 2);

    printf("result:\n");
    printf("%.01f %.01f\n", ans[0], ans[1]);
    printf("%.01f %.01f\n", ans[2], ans[3]);
    
    return 0;
}