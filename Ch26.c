//typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��ϴ� ������ ������ ������ �ڷ��� ������ �����ϰ� ���ش�
//typedef int myint;
//myint �� int�� ������ ���� ������ Ÿ������ �����
//int ��밡���� ��� ���� myint�� ��밡��

#include <stdio.h>
/*typedef int INT; 
typedef int* PINT;
typedef unsigned int UINT;*/ //���� ���� �Է°��� ������ �ι� => 21��*2

////���� ������ ����� �ڷ��� �̸��� ���� ����
//int main()
//{
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ���� ����
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//
//	CHAR ch = 'c';
//	STR str = "Hello";
//
//	printf("%d %d %d\n", num, *ptr, unum);
//
//
//}

//typedef struct {
//	int x;
//	int y;
//}Point;
//
////typedef Ű���带 ����Ͽ� struct {int x; int y;��� ����ü�� Point��� ���ο� ������ Ÿ������ ����. ���� Point�� ����ü�� ������ ��� ����. ��ǥ �� ���� �뵵�� ����.
//int main()
//{
//	Point p{ 3,4 };
//	printf("%d %d", p.x, p.y);
//}
////Point�� ������ ����, �ʱ�ȭ�ϰ� ����ϴ� �ڵ�
////p������ Point ������ Ÿ������ ����Ǿ� ������ �ʱⰪ���� {3,4}�� �Ҵ��Ѵ�
//
//struct person
//{
//	char name[30];
//	int age;
//};
//
//typedef struct person Person; //Person�� person�� ������ ���� 
//int main()
//{
//	Point position = { 30,60 };
//	Person human = { "�ڸ���", 15 };  
//	 
//}


//����
//1. Person ����ü ����� 3���� ��� ���� �����ϴ� �迭 ����� ����ϴ� ���α׷�
//2. Person ����ü ������ �л����� �����ϴ� ����ü�� ����
// => �л��� �й�(id) ���� �߰�
// => 3���� �л� ������ �����ϴ� �迭 ����� ����ϴ� ���α׷� �����
//
//typedef struct {
//	char name;
//	int age;
//	float heigt;
//}Person; 
//
//struct people
//{
//	char name[50];
//	int age;
//	float heigt;
//};
//int main()
//{
//	Person person[3] = {
//		{"�ڸ���", 25, 165.5}
//		{"IT", 30, 180.0}
//		{"�뱸", 20, 170.5}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�: %s\n", person[i].name);
//		printf("�̸�: %s\n", person[i].name);
//		printf("�̸�: %s\n", person[i].name);
//	}
//}