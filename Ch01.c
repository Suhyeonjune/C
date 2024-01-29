//:주석

//01 c언어 기본 구조
//     
//////// 주석: 블럭지정-> ctrl+k+c 해제->ctrl+k+u

//#include<stdio.h>//#include: 전처리문 (무엇을 추가하겠다)
////						//<stdio.h>헤더파일(기본 입출력 함수 호출용)
//                        //standard input output
//
//int main(void) // main 함수 헤더
//{
//    printf("Hello World"); //printf: C언어에서 제공하는 기본 라이브러리 함수
//    return 0; //main 함수 종료시 전달되는 값(리턴값)
//    //main 함수 본체 끝
//
//}//
// 
// 
//main 함수: 최초로 실행되는 함수(특별한 함수) ★main함수는 하나만 존재
// 라이브러리 함수: 개발편의를 위해 미리 만들어 제공되는 함수
   // 예: printf() 모니터 출력 함수, scanf() 키보드 입력 함수
// 사용자정의 함수: 프로그래머에 의해 제작된 함수 예) int a= 10;    

// 02 ESCAPE 문자
// 기존 문자 용도인(정보표시)에서 벗어나 특정기능 처리를 위해(제어문자) 사용되는 문자
// 를 앞에 붙어 특정 문자를 사용한다 
// ★\n 개행 (줄바꿈, 줄내림)
// \b 백스페이스 (바로 앞 지움)
// \a 
// \r 캐리지리턴 (행의 처음으로)
// \t 탭키만큼 커서 이동 8칸

//#include <stdio.h>
//int main()
//{
//	printf("Hello World");
//}

// 03 ESCAPE 문자
//#include<stdio.h>
//int main()
//{
//	printf("boy\tgirl");
//	printf("up\rdown");
//}

//1 줄바꿈 문자를 적절히 사용해 3라인으로 끊어 출력
/*2 다음과 같이 출력*/

//문제1
//#include<stdio.h>
//int main()
//{
//	printf("나의 이름은 OOO입니다\n나는 OO살이고\n사는 곳은 OO입니다.\n");
//
//}

//문제2
//#include<stdio.h>
//int main()
//{
//	printf("제품코드 제품명 수량 단가\n");
//	printf("\n1010 \t노트북 \t10 \t100");
//	printf("\n2020 \t휴대폰 \t20 \t110");
//	printf("\n3030 \t태블릿 \t30 \t90");
//}
//#include<stdio.h>
//int main()
//{
//	printf("제품코드 제품명 수량 단가\n");
//	printf("1010    노트북 10   100\n");
//	printf("2020    휴대폰 20   110\n");
//	printf("3030    태블릿 30   90");
//	// return 0;
//}


