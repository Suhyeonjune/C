// 01 양수

// 10진수 데이터를 저장요청시 
// 컴퓨터는 2진데이터로 진법 변환되어 저장하게 된다.
// 이때 2진 데이터 하나를 담는 공간 단위를 비트(bit)

//10진수	 2진수	필요 비트 수
// 0 -> 0		1	
// 1 -> 1		1
// 2	10		2
// 3	11		2
// 4	100		3
// 44   101100(32+x+8+4+x+x)	6
// 31	
// 112
// 59
// 58

//참고 (8비트)
//1		1	1	1	1	1	1	1	
//128	64	32	16	8	4	2	1 =255(1바이트 최대값)

//2진수	-> 10진수
// 11000001		128+64+1=193
// 10101001		128+32+8+1=169
// 11100101
// 10001010
// 00111010




// 03 음수의 저장방식
// 보수 개념 사용

// CPU는 가산 회로가 존재하기에 덧셈연산이 가능? yes
// CPU는 감산 회로가 존재하기에 덧셈연산이 가능? no (이진법이라 빼기 불가능)
// 감산회로가 없는 cpu가 뺄셈연산 가능한 이유는 뺄셈처리를 보수개념으로 바꿔 처리하기 때문
// 1) 음수계산 (2의 보수)
// 00000101 = 5
// 11111011 = -5 (2의 보수로 구한다) *맨앞자리 1= 마이너스 개념
// 11111110 = -2
// 10000000 = -128
// 00000000 = 0
// 11111111 = -1
// 00000001 = 1
// 10000001 = -128+1 = -127
// 



// 04 실수의 처리방식

// 소수점 이하(가수부)를 포함하는 수
// 실수의 가수부에 대한 범위는 무한대에 가깝기에 컴퓨터 메모리공간에 소수점이하의 수범위를 다 담아내지 못한다.
// 따라서 소수점이 00자리까지만 유효범위로 정하여 실수값을 저장하기 때문에 실수값은 오차가 발생할 수밖에 없다.
// 실수값의 소수점의 위치를 지정하는 방식은
// 고정소수점 방식과 부동소수점 방식이 있다.

// 고정소수점: 소수점의 위치가 미리 고정
// 부동소수점: 삽입되는 데이터값에 따라 소수점 위치가 변경됨




// 05 자료형&변수
// 자료형: 데이터 저장을 위해 미리 예약된 예약어
// 정수 자료형
// int : 4byte 정수 (32개의 8비트 포함: 21억부터 -21억까지) - 숫자를 받기위한 자료형
// char : 1byte
// short : 2byte
// long long : 8byte
// 실수 자료형
//double : 8byte
//float : 4byte

//#include<stdio.h>
//int main()
//{
//	int n1; // 변수를 선언 4byte 정수공간 형성
//
//	n1 = 10; //  변수공간에 값 대입 = 
//	         // 대입연산자(공간)= 값(먼저처리)
//			// 10이라는 데이더값을 먼저 저장한 뒤, n1공간에 복사(대입)
//	printf("%d\n", n1); // 변수 서식문자에 맞게 출력
//
//	int n2 = 20; //변수 초기화
//
//	printf("%d\n",n1+n2); // n1안의 값+n2안의 값을 \d 정수 서식에 맞게 출력
//}

//
//
//#include<stdio.h>
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//	int n3 = n1 + n2;
//	int n4 = n2 - n1;
//	printf("%d\n%d",n3,n4);
//}



// 05 정수자료형

//#include <stdio.h>
//int main()
//{
//	char n1 = 10;  //자료형 불일치 char: 문자를 받음
//	short n2 = 20; //자료형 불일치
//	int n3 = 30; // 자료형 일치 32byte
//	long long n4 = 50LL; // 리터럴 접미사 LL 
//}


// 06 실수자료형
//int main()
//{
//	float var1 = 0.33333333333F;
//	double var2 = 0.33333333333333333F;
//
//	printf("%.20f\n", var1);  //%f는 실수값 받을 때
//	printf("%.20f\n", var2);
//
//
//}

// 07 단일 문자 자료형

//단일 문자 저장을 위해 약속된 코드표를 참고하여 
// 해당 코드표에 지정된 비트열로 저장시킴
// c언어는 ASCII 코드표를 이용
// 문자든 숫자든 전부 비트열로 저장

//# include <stdio.h>
//int main()
//{
//	char ch1 = 'a';
//	char ch2 = 97;
//	char ch3 = 0b110001; //16진법
//
//	printf("ch1 = %c\n", ch1); //%c: 문자(문자열X) 1byte만을 받을 수 있는 서식
//		printf("ch2 = %c\n", ch2);
//		printf("ch3 = %c\n", ch3);
//}


// 08 문자열 저장(배열)
// 단일문자 : 따옴표 'a'
// 문자열: 쌍따옴표 "hello" -> 6byte 필요
// ★문자열은 마지막에 NULL문자(\0)를 반드시 포함

//배열: 같은 자료형으로 연속적인 공간 형성
//char arr[3] -> char 크기를 요소로 3칸짜리 배열 형성

//#include <stdio.h>
//int main()
//{
//	char str1[10] = "hello";
//	char str2[12] = "hello world"; // 띄어쓰기도 1바아트씩 잡는다
//	char str3[3] = "가"; //한글은 글자당 2바이트씩 잡는다
//
//	printf("%s\n", str1); // %s:문자열을 받는 서식
//
//}
//

//#include <stdio.h>
//int main()
//{
//	char name[10] = "홍길동";
//	int age = 44;
//	char gender = 'M';
//	char addr[100] = "대구광역시 중구";
//
//	printf("1. 이름 : %s\n", name);
//	printf("2. 나이 : %d\n", age);
//	printf("3. 성별 : %c\n", gender);
//	printf("4. 주소 : %s\n", addr);
//	
//}


