/*  3. �����Ҵ�

int main(void)
{
    // 1. �����Ҵ�
    int* p = (int*)malloc(sizeof(int)); // 4byte �޸� ���� �Ҵ��ϰ�, �� ���� �ּҸ� ��ȯ.

    *p = 20;

    printf("*p : %d\n", *p);

    // 2. ��������
    free(p);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> // malloc(), free()

#pragma warning(disable:4996) // secure warning disabled


int main(void)
{
    // 1. �����Ҵ�
    int* p = (int*)malloc(sizeof(int)); // 4byte �޸� ���� �Ҵ��ϰ�, �� ���� �ּҸ� ��ȯ.

    *p = 20;

    printf("*p : %d\n", *p);

    // 2. ��������
    free(p);

    return 0;
}

*/