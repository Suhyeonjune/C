//����ü

//����ü -> �ڹٳ� ���̽��� Ŭ����, c++

//����ü: �ϳ��̻��� ������ �Ѳ����� ��� ����� ���ο� ������ �ڷ���
//����ü�� �����ϴ� �� ������ ������ �޸� ������ �Ҵ������, �̰͵��� ����ü�� ���� �־� ��� �ϳ��� ������ ǥ���ϴ� ����ü ����μ� ������ �����Ѵ�

//����ü�� ����
//struct ����ü�̸�
//{
//	������ Ÿ�� ���1 �̸�
//	������ Ÿ�� ���2 �̸�;
//};

//����ü �̸��� ���� ���������� ����ü�� �̸�
//��� �̸��� ����ü ���ο� �ִ� �������� �̸�
// 
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//����ü ���� ���� ������ ���� �������� �����ϸ鼭 ����
/*struct Person p1; *///Person ����ü Ÿ���� ���� p1 ����
//struct Person�̶�� �ؾ Ʋ - p1 ���� �پ� (�̸�, ����, Ű)

//p1 ������ Person ����ü�� ����� �̸� ���� Ű ���� ����
//�� ����鿡 ������ ���� .�����ڸ� ���
//strcpy(p1.name, "John");

#include <string.h>
#pragma warning(disable:4996)

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//
//int main()
//{
//	struct Person p1; //Person ����ü Ÿ���� ���� p1 ����
//	strcpy(p1.name, "John");
//	p1.age = 25;
//	p1.height = 175.5;
//
//	printf("name: %s\n", p1.name); 
//	printf("age: %d\n", p1.age);
//	printf("height: %f\n", p1.height);
//
//	struct Person people[3];
//
//	strcpy(people[0].name, "�ڸ���");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "�ڸ���");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "�ڸ���");
//	people[2].age = 30;
//	people[2].height = 180.0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("\nname: %s\n", p1.name);
//		printf("\nage: %d\n", p1.age);
//		printf("\nheight: %f\n", p1.height);
//	}
//}


//struct person
//{
//	char name[30];
//	int age;
//};
//
//int main()
//{
//	//����ü ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�", 12 };
//	struct person girl = { "�̼ҳ�", 9 };
//
//	printf("�ҳ��� �̸��� %s�� ���̴� %d", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s�� ���̴� %d", girl.name, girl.age);
//} 



////����: ����ü student���� �л��� �̸�, �й�, ���� 
//struct student
//{
//	char name[30];
//	int year;
//	float score;
//};
//int main()
//{
//	struct student A = { "�л�1", 1, 100.000000 }; //����ü ���� ����� ���ÿ� �ʱ�ȭ
//
//	printf("�Է��� �л� ����\n");
//	printf("�̸� : %s\n", A.name); 
//	printf("�й� : %d\n", A.year); 
//	printf("���� : %f\n", A.score); 
//}
//
//void clearInputBuffer() { //�Է� ���� �����
//	while (getchar() != '\n')
//};


