//1부터 10까지 정수 중 짝수만 출력하는 프로그램  (for문)
#include <stdio.h>
//int main()
//{
//		for (int i = 1; i < 11; i++)
//		{
//			if (i % 2 == 0)
//			{
//				printf("%d\n", i);
//			}
//		}
//}



// 크기가 3*3인 2차원 배열 선언하고, 사용자로부터 9개의 정수 값 입력받아 배열에 저장한 뒤,
// 배열에 저장된 값들을 출력하는 프로그램 작성
//
//int main()
//{
//	int n = 0;
//	int array[3][3]; //9개 정수 값을 받아 배열에 저장
//	
//	for (int i = 0; i < 3 ; i++)
//	{
//		printf("정수를 3개 입력해주세요>> ");
//		for (int j = 0; j < 3 ; j++)
//		{
//			scanf_s("%d", &array[i][j]);
//		}
//	}
//}

//문제) Chat GPT를 이용해 계산기 프로그램 만들기
// +, -, *, /만 만들기
// 계산기 프로그램 안에 있는 코드들에게 주석처리 해가며 설명하기

//#include <stdio.h>
//
//// 함수 선언
//float add(float x, float y) {
//    return x + y;
//}
//
//float subtract(float x, float y) {
//    return x - y;
//}
//
//float multiply(float x, float y) {
//    return x * y;
//}
//
//float divide(float x, float y) {
//    if (y != 0) {
//        return x / y;
//    }
//    else {
//        printf("Error: Division by zero\n");
//        return 0.0;  // 에러 발생 시 0을 반환
//    }
//}
//
//int main() {
//    char operator; // 
//    float num1, num2, result;
//
//    // 연산자 입력
//    printf("사칙연산을 선택하세요 (+, -, *, /): ");
//    scanf_s("%c", &operator); //문자 입력
//
//    // 숫자 입력
//    printf("첫 번째 숫자 입력: ");
//    scanf_s("%f", &num1);
//
//    printf("두 번째 숫자 입력: ");
//    scanf_s("%f", &num2);
//
//    // 선택된 연산 수행
//    switch (operator) 
//    {
//    case '+': //문자는 ''
//        result = add(num1, num2);
//        printf("결과: %.2f\n", result); 
//        break;
//    case '-':
//        result = subtract(num1, num2);
//        printf("결과: %.2f\n", result);
//        break;
//    case '*':
//        result = multiply(num1, num2);
//        printf("결과: %.2f\n", result);
//        break;
//    case '/':
//        result = divide(num1, num2);
//        if (result != 0.0) {
//            printf("결과: %.2f\n", result);
//        }
//        break;
//    default:
//        printf("잘못된 연산자입니다. 프로그램을 종료합니다.\n");
//        return 1;  // 오류 코드 반환
//    }
//
//    return 0;
//}
