//typedef 선언은 기존에 존재하는 자료형에 새 이름을 부여하는 것으로 복잡한 유형의 자료형 선언을 간결하게 해준다
//typedef int myint;
//myint 는 int와 완전히 같은 데이터 타입으로 취급함
//int 사용가능한 모든 곳에 myint도 사용가능

#include <stdio.h>
/*typedef int INT; 
typedef int* PINT;
typedef unsigned int UINT;*/ //양의 값만 입력가능 범위는 두배 => 21억*2

////지역 내에서 사용할 자료형 이름에 대한 선언
//int main()
//{
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef 선언 이후 자료형은 기존 자료형과 동일한 역할 수행
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
////typedef 키워드를 사용하여 struct {int x; int y;라는 구조체를 Point라는 새로운 데이터 타입으로 정의. 이제 Point는 구조체와 동일한 기능 수행. 좌표 값 저장 용도로 사용됨.
//int main()
//{
//	Point p{ 3,4 };
//	printf("%d %d", p.x, p.y);
//}
////Point를 변수로 선언, 초기화하고 출력하는 코드
////p변수는 Point 데이터 타입으로 선언되어 있으며 초기값으로 {3,4}를 할당한다
//
//struct person
//{
//	char name[30];
//	int age;
//};
//
//typedef struct person Person; //Person이 person과 동일한 역할 
//int main()
//{
//	Point position = { 30,60 };
//	Person human = { "코리아", 15 };  
//	 
//}


//문제
//1. Person 구조체 사용해 3명의 사람 정보 저장하는 배열 만들고 출력하는 프로그램
//2. Person 구조체 수정해 학생정보 저장하는 구조체로 변경
// => 학생의 학번(id) 정보 추가
// => 3명의 학생 정보를 저장하는 배열 만들고 출력하는 프로그램 만들기
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
//		{"코리아", 25, 165.5}
//		{"IT", 30, 180.0}
//		{"대구", 20, 170.5}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름: %s\n", person[i].name);
//		printf("이름: %s\n", person[i].name);
//		printf("이름: %s\n", person[i].name);
//	}
//}