#include <stdio.h>

//만약 학생 5명이 있고 그 평균 성적 계산
//int main()
//{
//	int s[5];
//}

//배열이란 array
//동일한 타입의 데이터가 여러개 저장되어 잇는 데이터 저장 장소, 구조
//배열 안에 들어있는 각각의 데이터들은 정수로 되어있는 번호에 의해 접근
//배열 이용시 여러 값을 하나의 이름으로 처리 가능

//인덱스: 배열 원소의 번호

//data_type arry_name[array_size]
//ex) int arr[5] :크기가 5인 int형 배열 arr 정의
//배열은 인덱스를 사용해 각 요소에 접근 가능
//인덱스는 0부터 시작하여 배열의 크기보다 작아야 함

//arr[0] = 10 // arr의 첫번째 요소에 10 저장
//arr[1] = 20// arr의 두번째 요소에 10 저장
///arr[0]은 배열의 첫번째 요소를 나타내며 [1]은 두번째 요소를 나타냄

//int main()
//{
//	int arr[] = { 10, 20, 30, 40, 50 }; //요소 5개를 가지는 int형 배열
//
//	{for (int i = 0; i < 5; , i++)
//		printf("%d\n", arr[i]);
//	}
//}

//배열의 선언
//int grade[10]
// int: 자료형 grade(배열이름) [10](배열 크기-배열의 원소 개수가 10)
//★인덱스(배열 번호)는 항상 0부터 시작
//
//int main()
//{
//	int grade[10]; 
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &grade[i]);
//
//	}
//	printf("==============\n");
//	printf("==============\n");
//	printf("==============\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d        %d\n", i, grade[i]);
//	}
//}

//int main()
//{
//	int grade[5];
//	int sum = 0;
//	int avg;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("성적을 입력하세요: ");
//		scanf_s("%d", &grade[i]);
//		sum += grade[i];
//	}
//	avg = sum / 5;
//	printf("성적 평균: %d\n", avg);
//}






//int main()
//{
//	int arr[10] = { 0 }; //1. 크기10인 int배열 선언, 모든 요소 0으로 초기화
//	
//	double arr[5] = 0; //2. 크기5인 double배열 선언, 값입력 받아 배열 요소에 저장
//	for (int i = 0; i < 5; i++)
//	{
//		printf("double형 배열에 값을 입력하세요: ");
//		scanf_s("%f", &arr[i]);
//	}
//	
//	char arr [7] = "hello";//3. 크기7인 char배열 선언, "hello" 문자열 저장
//
//	int arr[6] = { 1, 2, 3, 4, 5, 6 }; 
//	//4. 크기6인 int배열 선언, 첫번째 요소부터 여섯번째 요소까지 1,2,3,4,5,6 저장
//
//	int arr[8]; //5. 크기8인 int배열 선언, 배열의 요소를 1부터 8까지 값으로 초기화
//	for (int i = 0; i < 8; i++)
//	{
//		arr[i] = i + 1; 
//	}

//배열 요소들 중에서 최소값을 찾는 프로그램 만들기

//int main()
//{
//	int arr[5] = { 10, 5, 7, 3, 8 };
//	int min = arr[0]; //배열의 첫번째 값을 최소값으로 초기화
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	printf("배열에서 가장 작은 값: %d\n", min);
//}


//배열에서 특정한 값 찾아 그 위치를 출력하는 프로그램 작성
//
//int main()
//{
//	int arr[5] = { 2,3,5,8,1 };
//	int n;
//	int found = 0;
//
//	printf("찾을 값을 입력하세요: ");
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i]==n)
//		{
//			printf("%d는 배열의 %d번째 위치에 있습니다", n, i+1);
//			found = 1;
//		} 
//	}
//		
//	if (!found)
//	{
//		printf("배열에 없습니다.\n");
//	}
//}
