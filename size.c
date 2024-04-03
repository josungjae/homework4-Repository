#include <stdio.h>  
#include <stdlib.h> 

void main()
{
    int **x; // 이중 포인터 변수 x를 선언
    printf("[-----[josungjae][2023078001]-----]\n");
    // x의 크기를 출력
    printf("sizeof(x) = %lu\n", sizeof(x));
    // x가 가리키는 변수의 크기를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    // x가 가리키는 변수가 가리키는 변수의 크기를 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}