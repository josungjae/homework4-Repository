#include <stdio.h>  
#include <string.h> 

// 구조체 정의: student1
struct student1 {
    char lastName[20];  // lastName을 저장하는 문자열 배열
    int  studentId;     // 학생 아이디를 저장하는 정수형 변수
    char grade;         // 성적을 저장하는 문자형 변수
};
// 구조체 정의: student2
typedef struct {
    char lastName[20];  // lastName을 저장하는 문자열 배열
    int  studentId;     // 학생 아이디를 저장하는 정수형 변수
    char grade;         // 성적을 저장하는 문자형 변수
} student2;

int main() {
    printf("[-----[josungjae][2023078001]-----]\n");
    // student1 구조체 변수 st1 초기화 및 출력
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %s\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    // student2 구조체 변수 st2 초기화 및 출력
    student2 st2 = {"B", 200, 'B'};
    printf("\nst2.lastName = %s\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    // student2 구조체 변수 st3에 st2 값을 할당하고 출력
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %s\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* equality test: st3와 st2를 비교하여 동일한지 확인 */
    if (strcmp(st3.lastName, st2.lastName) == 0 && st3.studentId == st2.studentId && st3.grade == st2.grade)
        printf("equal\n");
    else
        printf("not equal\n");
    return 0; 
}
