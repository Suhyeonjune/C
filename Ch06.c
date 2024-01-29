// if문
// 조건문을 작성할 때 사용하는 구문. 특정 조건이 참인 경우에만 코드 블럭을 실행하고
// 조건이 거짓인 경우 해당 코드 블럭을 건너뛰게 된다. 

//if (조건식)
//{
//	//조건이 참인 경우 실행되는 코드 블럭
//}
//// 여기서 조건식은 참 또는 거짓을 판단할 수 있는 식이다. 조건식이 참이면 if문의 코드 블럭 실행,
//// 조건식이 거짓이면 if문의 코드 블럭을 건너뛰게 된다.
//
////if문은 또한 else문을 사용하여, 조건이 거짓인 경우 실행할 코드 블럭도 지정가능
//
//if(조건식)
//{
//	//조건이 참인 경우 실행되는 코드 블럭
//}
//else
//{
//	//조건이 거짓인 경우 실행되는 코드 블럭
//}

//if문은 중첩 사용이 가능. 이 경우 조건식에 따라 다양한 코드 블럭이 실행됨.
//if(조건식)
//{
//	//조건이 참인 경우 실행되는 코드 블럭
//	if (조건식2)
//	{
//		//조건식 1과 2가 모두 참인 경우 실행되는 코드블럭
//	}
//}
//else
//{
//	//조건이 거짓인 경우 실행되는 코드 블럭
//}


// if문 기본
//#include <stdio.h>
//int main() 
//{
//	int num = 0;
//	printf("정수를 입력하세요>>>");
//	scanf_s("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d는 홀수입니다", num);
//	}
//	/*if (num % 2 == 0)
//	{
//		printf("%d는 짝수입니다", num);
//	}*/
//	else
//	{
//		printf("%d는 짝수입니다", num); 
//	}
//}


//문제2
//두 정수를 입력받아 두 수의 합이 짝수면 "두 수의 합은 짝수입니다" 홀수면 "두 수의 합은 홀수입니다"

//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf_s("%d%d", &n1, &n2);
//	if (n1 + n2 % 2 == 0)
//	{
//		printf("%d는 짝수입니다", n1 + n2);
//	}
//	else
//	{
//		printf("%d는 홀수입니다", n1 + n2);
//	}
//
//}


//문제3
// 정수값 하나 입력받아 그 수가 num>=1 && num<= 10이면 "정상범위의 값 입력!" 출력
// 아니면 "잘못된 값을 입력하셨습니다" 출력

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	if (num >= 1 && num <= 10)
//	{
//		printf("정상범위의 값 입력!", num);
//	}
//	else
//	{
//		printf("잘못된 값을 입력하셨습니다");
//	}
//}

//문제4
//짝수면서 3의배수이면 출력
//홀수면서 5의배수이면 출력

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	if (num % 2 == 0 && num % 3 == 0)
//	{
//		printf("%d", num);
//	}
//	if (num % 2 == 1 && num % 5 == 0)
//	{
//		printf("%d", num);
//	}
//}



//04  else-if  다중분기

//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	printf("나이 입력 : ");
//	scanf_S("%d", &age);
//	if (age>=20)
//	{
//		printf("성인\n");
//	}
//	else if (age >= 8)
//	{
//		printf("미취학아동입니다\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int grade = 0;
//	printf("성적 입력 : ");
//	scanf_s("%d", &grade);
//	if (grade >= 90)
//	{
//		printf("A학점");
//	}
//	else if (grade < 90 && grade >= 80)
//	{
//		printf("B학점");
//	}
//	else if (grade < 80 && grade >= 70)
//	{
//		printf("C학점");
//	}
//	else if (grade < 70 && grade >= 60)
//	{
//		printf("D학점");
//	}
//	else
//	{
//		printf("불합격");
//	}
//}

//문제2
//#include <stdio.h>
//int main()
//{
//	int kor = 0;
//	int eng = 0;
//	int mat = 0;
//	int avg;
//	printf("국, 영, 수 입력 >>> ")
//	scanf_s("%d%d%d", &kor, &eng, &mat);
//	avg = (kor + eng + mat) / 3;
//	if (kor >= 40 && eng >= 40 && mat >= 40)
//	{
//		printf("합격");
//	
//		if (avg >= 60)
//			printf("합격"); 
//	}
//	else
//	{
//		printf("불합격");
//	}
//}
//else
//{
//	printf("불합격"); 
//	}
//


//3의 배수면서 4의 배수라면 "num은 3의 배수면서 4의 배수"출력
//3의 배수 아니면서 5의 배수도 아니라면 "3의 배수 아니면서 5의 배수도 아님"출력
//
//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("n의 값을 입력하세요>>> ");
//	scanf_s("%d", &n);
//
//if (n%3 == 0 && n%4 ==0)
//{
//	printf("num은 3의 배수면서 4의 배수");
//}
//else
//{
//	if (n%3 != 0 && n%5 != 0)
//	{
//		printf("3의 배수 아니면서 5의 배수도 아님");
//	}
//}
//}

