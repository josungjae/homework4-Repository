#include <stdio.h> 
// 학생 정보 저장 구조체 정의
struct student {
    char lastName[13]; // 학생의 lastNam을 저장하는 문자열 배열
    int studentId;     // 학생의 학번을 저장하는 정수형 변수
    short grade;       // 학생의 성적을 저장하는 짧은 정수형 변수
};

int main() {
    printf("[-----[josungjae][2023078001]-----]\n");
    struct student pst; // student 구조체 타입의 변수 pst 선언
    // sizeof 연산자를 사용하여 구조체와 내부 요소들의 크기를 출력
    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 크기 출력
    printf("size of int     = %ld\n", sizeof(int));             // int 형의 크기 출력
    printf("size of short   = %ld\n", sizeof(short));           // short 형의 크기 출력
    return 0; 
}
