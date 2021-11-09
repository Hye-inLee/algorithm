// 2. 구조체 & 구조체 포인터
//- 구조체 : 사용자 정의 자료형 
typedef struct
{
    int std_id;
    int age;
    char name[20];
}Student;

void func(Student* p)
{
    p->std_id = 2; //(*p).std_id = 2;
    p->age = 30; //(*p).age = 30;
}

int main(void)
{
    Student st1;

    st1.std_id = 1;
    st1.age = 20;
    strcpy(st1.name, "홍길동");

    func(&st1); // 이 함수 호출 이후에, st1의 std_id를 2로 변경하고 싶다.

    printf("std_id : %d\n", st1.std_id); // %d(decimel) -> 10진 정수
    printf("age : %d\n", st1.age);
    printf("name : %s\n", st1.name); // s(string) -> 배열안의 문자열을 출력하는 서식문자


    return 0;
}


