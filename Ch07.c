//01 Switch문 (다중분기)
//프로그래밍에서 조건문 중 하나, 조건에 따라 다른 코드 실행할 때 사용됨
// 하나의 변수에 대해 여러 조건 나열해 각 조건마다 실행할 코드 지정
//
//구조
//switch (변수)
//{
//case 값1:
//	실행할 코드1;
//	break;
//
//case 값1:
//	실행할 코드1;
//	break;
//
//default: (esle와 동일. 그외 나머지 처리)
//	break;
//}
//
//case : if문이면서 esle if문이기도 하다
//break: 해당 코드 실행 후 멈추게 만든다
//default: else문. (case 실행값 아무것도 해당 안 할 경우)
//
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1 입력시 실행되는 코드 블럭\n");
//		break;
//	case 2:
//		printf("2 입력시 실행되는 코드 블럭\n");
//		break;
//	case 3:
//		printf("3 입력시 실행되는 코드 블럭\n");
//		break;
//	case 4:
//		printf("4입력시 실행되는 코드 블럭\n");
//		break;
//	default:
//		printf("그 외 나머지 입력시 실행되는 코드 블럭\n");
//		break;
//}


//#include <stdio.h>
//int main()
//{
// int num = 0;
//	 printf("달 입력 : ");
//	 scanf_s("%d", &num);
//
//	 switch (num)
//	 {
//	 case 1:
//		 printf("31\n");
//		 break;
//	 case 2:
//		 printf("28\n");
//		 break;
//	 case 3:
//		 printf("31\n");
//		 break;
//	 case 4:
//		 printf("30\n");
//		 break;
//	 case 5:
//		 printf("31\n");
//		 break;
//	 case 6:
//		 printf("30\n");
//		 break;
//	 case 7:
//		 printf("31\n");
//		 break;
//	 case 8:
//		 printf("31\n");
//		 break;
//	 case 9:
//		 printf("30\n");
//		 break;
//	 case 10:
//		 printf("31\n");
//		 break;
//	 case 11:
//		 printf("30\n");
//		 break;
//	 case 12:
//		 printf("31\n");
//		 break;
//	 default:
//		 printf("잘못된 입력입니다.\n");
//		 break;
//	 }
//}
//	

//문제1
//두 개의 숫자 입력받아 첫 번째 숫자가 두 번째 숫자보다 큰지, 작은지, 같은지 판단하기
//
//#include <stdio.h>
//int main()
//{
//	int n1 = 0, n2 = 0;
//	printf("두 개의 숫자를 입력하세요. ");
//	scanf_s("%d%d", &n1, &n2);
//	if (n1 > n2)
//	{
//		printf("첫 번째 수가 두 번째 수보다 큽니다.");
//	}
//	else if (n1 < n2)
//	{
//		printf("첫 번째 수가 두 번째 수보다 작습니다.");
//	}
//	else (n1 == n2)
//	{
//		printf("두 수는 서로 같습니다.");
//	}
//}

////문제2 
////3개의 숫자를 입력받아 가장 큰 숫자를 찾아 출력
////숙제: 코드 1줄씩 주석을 달아 설명 첨부
//
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//
//	printf("세 개의 숫자를 입력하세요. ");
//	scanf_s("%d%d%d", &n1, &n2, &n3);
//	if (n1 > n2 && n1 > n3)
//	{
//		printf("%d가 가장 큰 수 입니다", n1);
//	}
//	else if (n2 > n1 && n2 > n3)
//	{
//		printf("%d가 가장 큰 수 입니다", n2);
//
//	}
//	else if (n3 > n1 && n3 > n2)
//	{
//		printf("%d가 가장 큰 수 입니다", n3);
//
//	}
//	else
//	{
//		printf("서로 다른 정수를 입력해주세요");
//	}
//
//}
//


