//구조체

//구조체 -> 자바나 파이썬의 클래스, c++

//구조체: 하나이상의 변수를 한꺼번에 묶어서 만드는 새로운 유형의 자료형
//구조체를 구성하는 각 변수는 각각의 메모리 공간을 할당받지만, 이것들은 구조체에 속해 있어 모두 하나의 정보를 표현하는 구조체 멤버로서 역할을 수행한다

//구조체의 정의
//struct 구조체이름
//{
//	데이터 타입 멤버1 이름
//	데이터 타입 멤버2 이름;
//};

//구조체 이름은 새로 만ㄷ르어질 구조체의 이름
//멤버 이름은 구조체 내부에 있는 변수들의 이름
// 
//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//구조체 선언 때는 다음과 같이 변수명을 지정하면서 선언
/*struct Person p1; *///Person 구조체 타입의 변수 p1 선언
//struct Person이라는 붕어빵 틀 - p1 맛은 다양 (이름, 나이, 키)

//p1 변수는 Person 구조체의 멤버인 이름 나이 키 각각 가짐
//이 멤버들에 접근할 때는 .연산자를 사용
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
//	struct Person p1; //Person 구조체 타입의 변수 p1 선언
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
//	strcpy(people[0].name, "코리아");
//	people[0].age = 30;
//	people[0].height = 180.0;
//
//	strcpy(people[1].name, "코리아");
//	people[1].age = 30;
//	people[1].height = 180.0;
//
//	strcpy(people[2].name, "코리아");
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
//	//구조체 변수 선언과 동시에 초기화
//	struct person boy = { "김소년", 12 };
//	struct person girl = { "이소녀", 9 };
//
//	printf("소년의 이름은 %s고 나이는 %d", boy.name, boy.age);
//	printf("소녀의 이름은 %s고 나이는 %d", girl.name, girl.age);
//} 



////문제: 구조체 student에는 학생의 이름, 학번, 점수 
//struct student
//{
//	char name[30];
//	int year;
//	float score;
//};
//int main()
//{
//	struct student A = { "학생1", 1, 100.000000 }; //구조체 변수 선언과 동시에 초기화
//
//	printf("입력한 학생 정보\n");
//	printf("이름 : %s\n", A.name); 
//	printf("학번 : %d\n", A.year); 
//	printf("점수 : %f\n", A.score); 
//}
//
//void clearInputBuffer() { //입력 버퍼 지우기
//	while (getchar() != '\n')
//};


