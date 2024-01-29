//01 반복문
// 프로그램에서 반복적으로 실행되는 코드를 작성할 때 사용

//1. while문

// 조건이 참인 동안 반복적으로 코드를 실행. 
// while문의 구조

//while (조건식)
//{
//	//반복적으로 실행될 코드 예) 조건인 참이면 반복적으로 실행할 코드를 실행, 조건이 거짓이면 반복문 종료
//	//후치 연산자 통해 종료 가능
//}

//#include <stdio.h>
//int main()
//{
//	//탈출용 변수
//	//탈출용 조건식
//	//탈출을 위한 연산식
//
//	int i = 1; //탈출용 변수
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; //탈출을 위한 연산식 (후치연산자)
//	}
// 
//}


//02 1부터 10까지 합 구하기
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		printf("i = %d\n", i);
//		sum = sum + i; // sum += i
//		i++;
//	}
//	printf("while 종료 이후 i = %d\n", i);
//	printf("1부터 10까지의 합: %d\n", sum);
//}

//문제: 키보드로부터 숫자 하나 입력 받아 1부터 n까지의 합 구하기
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	printf("숫자를 하나 입력하세요");
//	scanf_s("%d", &n);
//
//	while (i <= n)
//	{
//		sum += i; 
//		i++;
//	}
//printf("n까지의 합 = %d\n", sum);
//
//}
// 
// 
//문제: 구구단 출력: 2단만 출력
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		printf("2*%d\=%d\n", i, 2 * i);
//		i++;
//	}
//}
//문제: 구구단 하나를 입력받아 구구단 출력
//
//#include <stdio.h>
//int main()
//{
//	int dan = 0;
//	printf("구구단 수 입력: ")
//		scanf_s("%d", &dan); 
//		int i = 1;
//	while (i < 10)
//	{
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

// 1부터 10까지 수 중에 짝수끼리 홀수끼리 합 구하기 (%연산자)
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//	
//	while (i <= 10)
//	{
//		if (i%2 == 0)
//		{
//			evensum += i;
//		}
//		else
//		{
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("짝수 합: %d\n홀수 합: %d\n", evensum, oddsum);
//
//}

//전체 구구단 
//2단~9단까지 한 번 출력
//#include <stdio.h>
//int main()
//{
//	int i = 2, j=1;
//	
//	while (i <= 9) //i는 단 수
//	{
//		int j = 1;  
//		while (j <= 9)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("\n");
//		i++; 
//	}
//}


// 구구단 역순 출력 
//#include <stdio.h>
//int main()
//{
//	int dan = 9;
//	int i = 0;
//	while (dan >= 2)
//	{
//		i = 9;
//		while (i >= 1)
//		{
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			i--;
//		}
//		printf("\n");
//		dan--;
//	}
//}


//문제 높이를 입력받아 높이만큼의 삼각형 출력
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("높이를 입력하세요: ");
//	scanf_s("%d", &n);
//
//	int i = 0; // 행
//	int j = 0; // 열
//	while (i < n)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//	printf("\n");
//	i++;
//	}
//}