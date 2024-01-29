//문자열과 포인터
// 
//문자 표현 방법
// 컴퓨터에서는 각각의 문자에 숫자코드를 붙여서 표시한다.
// 아스키코드: 표준적인 8비트 문자코드
// 0~127까지의 숫자를 이용해 문자 표현

//유니코드: 표준적인 16비트 문자코드
//전세계의 모든 문자를 일관되게 표현하고 다룰 수 있도록 설계

//문자 상수
#include <stdio.h>
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c, code1\n", code1, code1);
//	printf("code2 = %c, code2\n", code2, code2);
//}

//int main()
//{
//	unsigned char code; //unsigned 부호없는 정수 표현할 때 사용되는 키워드 
//
//	for (code = 0; code < 128; code++)
//	{
//		printf("아스키코드 %d는 %c입니다\n", code, code);
//	}
//} 

//int main()
//{
//	char good[] = "Good";
//	char* bad[] = "Bad";
//	printf("%s %s\n", good, bad);
//
//	good[0] = 'H';
//	printf("%s", good);
//	//good = "New good"; // 배열기반 문자열은 새로운 주소값 할당이 불가능
//	
//	bad[0] = 'S'; //불가능 (실행은 되나 값의 변화 없고 예외 처리됨)
//				 // 포인터 기반 문자열은 개별 요솟값 할당 불가
//	printf("%s\n", bad);	
//}


//문자 입출력 라이브러리
//int getchar(void) : 하나의 문자를 읽어 반환
//void purchar(int c): 변수 c에 저장된 문자를 출력
//scanf("%c", &c): 하나의 문자를 읽어 변수 c에 저장
//printf("%c", c): 변수 c에 저장된 문자 출력


//int main()
//{
//	int ch;
//
//	while (1) //참. 무한반복
//	{
//		ch = getchar();
//		if (ch == 'q')
//		{
//			break;
//		}
//		putchar(ch);
//	}
//}


// 문자열 단위 입출력 함수
//int main()
//{
//	char str[10];
//	printf("문자열을 입력하세요: ");
//	fgets(str, 10, stdin); 
//	 //fgets() : 문자열을 입력받음
//	 //stdin: 기본적으로 키보드 입력 받아들임
//	 //10: 10자리까지만 입력 허용
//	puts(str);
//}


//문자열 처리 함수
#include <string.h> //c언어 표준 라이브러리의 헤더 파일 중 하나
#pragma warning(disable:4996) // 보안 취약점 경고 무시
//string.h 주요함수
//strlen(str):인자로 전달된 주소의 문자열에서 NULL 문자 제외한 문자열 길이를 반환
			  // 즉 글자 수 확인
//strcpy(str1, str2): 두번째 인자로 전달된 주소의 문자열을 첫번째 인자의 주소에 복사
//strncpy(str1, str2, count): 두번째 인자로 전달된 주소의 문자열을 첫번째 인자 주소에 복사하되, 원하는 개수만큼만 복사!
//strcat(str1, str2): 두번쨰 인자로 전달된 주소의 문자열을 첫번째 인자로 전달된 주소의 문자열에 이어붙이기
// strcmp(str1, str2): 인자로 전달된 두 문자열 비교해 그 내용 같다면 0을 , 다르면 0 아닌 값을 반환


//int main()
//{
//	//strcpy() 함수는 c언어에서 문자열을 복사할 때 사용되는 함수
//	//첫번째 인자로 전달된 문자열의 크기를 검사하지 않으므로, 복사할 문자열의 크기가 두번째 인자로 전달된 문자열보다 크면 버퍼 오버플로우가 발생할 수 있다. -> 보안 취약
//
//	char src[] = "Hello World";
//	char dest[20];
//	strcpy(dest, src); //src내용을 dest로 복사
//	printf("%s\n", dest);
//}


//int main()
//{
//	//strncpy() 함수는 strcpy 함수와 다르게, 복사할 문자열 길이 지정 가능!
//	//단 버퍼오버플로우를 방지할 수 있지만, 복사한 문자열의 널 종단 문자 포함X
//	//따라서 복사할 문자열 끝에 널 종단문자를 추가해 주어야 한다.
//
//	char src[] = "Hello World";
//	char dest[20];
//	strncpy(dest, src, sizeof(dest)); //sizeof(dest) = 20 
//		//sizeof: 변수 또는 자료형의 크기를 반환
//	dest[sizeof(dest) - 1] = '\0'; // 복사한 문자열 끝에 널 종단문자 추가
//	
//}


////문자열 이어붙이기, 문자열 비교
//int main()
//{
//	char str1[50] = "korea";
//	char str2[50] = "korea";
//
//	//str1에 문자열 붙이기
//	strcat(str1, "IT");
//	printf("%s\n", str1);
//	//str2에 문자열 붙이기
//	strcat(str2, "COOK");
//	printf("%s\n", str2);
//
//	//str1 str2 비교
//	//strcmp: 문자열 비교 함수. 내용 같으면 0반환. 거짓에 1반환
//	printf("비교 결과: %d\n", strcmp(str1, str2));
//}


//문제: 사용자로부터 문자열을 입력받아, 두 문자열이 같은지 비교하는 프로그램 작성
//int main()
//{
//	char str1[100];
//	char str2[100];
//	printf("첫 번째 문자열을 입력하세요>>");
//	fgets(str1, sizeof(str1), stdin);
//
//	printf("두 번째 문자열을 입력하세요>>");
//	fgets(str2, sizeof(str2), stdin); 
//
//	
//	if (strcmp(str1, str2) == 0)
//	{
//		printf("두 문자열은 같습니다");
//	}
//	else 
//	{
//		printf("두 문자열은 다릅니다");
//	}
//}



//문제1. 조건문. 정수 입력받아 양수, 음수, 0 중 어느 것인지 확인하는 프로그램
//int main()
//{
//	int n;
//	printf("정수를 입력하세요: ");
//	scanf_s("%d", &n);
//
//	if (n<0)
//	{
//		printf("음수입니다. ");
//	}
//	else if (n>0)
//	{
//		printf("양수입니다. ");
//	}
//	else
//	{
//		printf("0 입니다. ");
//	}
//}


//문제2. 반복문. 1~10까지 합 구하는 프로그램
//int main()
//{
//	int i=0; 
//	int sum=0; 
//	for (int i = 1; i < 11; i++)
//	{
//		sum += i;
//	}
//	printf("1부터 10까지의 합: %d", sum);
//}


//문제3. 1차원 배열. 5개 정수 입력받아 그 합을 구하는 프로그램
//int main()
//{
//	int i;
//	int sum = 0; 
//	int arr[5] = { 0 };
//	printf("정수 5개를 입력하세요.");
//	for (i = 0; i < 5; i++)
//	{
//	scanf_s("%d", &arr[i]); //arr[0]에 첫번째 수 저장....
//	sum += arr[i];
//	}
//	
//	printf("입력한 정수들의 합:%d", sum);
//}


//문제4. 포인터. 두 개의 정수 입력받아 그 합과 차 구하는 프로그램
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int* ptr_a = &a, * ptr_b = &b;
//	int sum, sub;
//
//	printf("두 개의 정수를 입력하세요.");
//	scanf_s("%d%d", ptr_a, ptr_b);
//	printf("합: %d\n", *ptr_a+ *ptr_b); 
//
//	if (b > a) //차가 음수되는 것 방지
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//		printf("차: %d\n", *ptr_a - *ptr_b); 
//	}
//	else
//	{
//		printf("차: %d\n", *ptr_a - *ptr_b); 
//	}
//}
