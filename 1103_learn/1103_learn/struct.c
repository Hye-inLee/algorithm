// 2. ����ü & ����ü ������
//- ����ü : ����� ���� �ڷ��� 
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
    strcpy(st1.name, "ȫ�浿");

    func(&st1); // �� �Լ� ȣ�� ���Ŀ�, st1�� std_id�� 2�� �����ϰ� �ʹ�.

    printf("std_id : %d\n", st1.std_id); // %d(decimel) -> 10�� ����
    printf("age : %d\n", st1.age);
    printf("name : %s\n", st1.name); // s(string) -> �迭���� ���ڿ��� ����ϴ� ���Ĺ���


    return 0;
}


