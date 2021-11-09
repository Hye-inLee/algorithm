/*  3. 동적할당

int main(void)
{
    // 1. 동적할당
    int* p = (int*)malloc(sizeof(int)); // 4byte 메모리 공간 할당하고, 그 시작 주소를 반환.

    *p = 20;

    printf("*p : %d\n", *p);

    // 2. 동적해제
    free(p);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> // malloc(), free()

#pragma warning(disable:4996) // secure warning disabled


int main(void)
{
    // 1. 동적할당
    int* p = (int*)malloc(sizeof(int)); // 4byte 메모리 공간 할당하고, 그 시작 주소를 반환.

    *p = 20;

    printf("*p : %d\n", *p);

    // 2. 동적해제
    free(p);

    return 0;
}

*/