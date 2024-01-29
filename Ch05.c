//01 산술연산자 (+ - * / %)

//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	printf("a + b= %d\n", a + b);
//	printf("a - b= %d\n", a - b);
//	printf("a * b= %d\n", a * b); 
//	printf("a / b= %d\n", a / b); 
//	printf("a %% b= %d\n", a % b); // 나머지를 구하는 연산자
//}

//02 복합대입연산자(+=, -=, *=, /=)
//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	a += b; // a= a+b;
//	printf("a=%d\n", a);
//	a -= b; // a= a-b;
//	printf("a=%d\n", a); //10인 이유: a가 이미 30
//	a *= b; // a= a*b;
//	printf("a=%d\n", a);
//	a /= b; // a= a/b;
//	printf("a=%d\n", a);
//}


//03 비교연산자

//참: 0이 아닌 모든 값 (대표값 1, -1)
//거짓: 0 (전류가 흐르지 않음)

//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 20, c = 0;
//	printf("a == b ? %d\n", a == b); // a는 b랑 같은가? x->정답은 0
//	printf("a > b ? %d\n", a > b);
//	printf("a >= b ? %d\n", a >= b);
//	printf("a < b ? %d\n", a < b);
//	printf("a <= b ? %d\n", a <= b);
//	printf("a ! b ? %d\n", a != b); //!: not 연산자. 반대의 개념. 예)참->거짓으로 바꿈
//	                                //!=: 같은가?
//}


//04 논리연산자
 //예) 로그인
//
//#include <stdio.h>
//int main()
//{
//	//AND연산자(&&)
//	//1. 왼쪽의 조건식이 거짓이면 오른쪽 조건식을 평가하지 않는다.
//	//2. "&&" 연산자는 일반적으로 "||"연산자보다 우선순위가 높다.
//	//3. "&&" 연산자의 결과는 논리값(참 또는 거짓)만 있다.
//	
//	int a = 10, b = 20;
//	printf("a > 10 && a > 20 ? %d\n", a > 10 && a > 20);
//	printf("a == 10 && a < 20 ? %d\n", a == 10 && a < 20);
//}

//
//     //OR연산자(||)
//     //1. 둘 중 하나만 맞아도 참 반환
//#include <stdio.h>
//int main()
//{
//int a = 5, b = 9;
//        printf("a == b || a < b? %d\n", a == b || a < b);
//
//
//     //NOT연산자(!)
//        printf("!참 ? %d\n", !10);
//        printf("!거짓 ? %d\n", !0);
//}

//
//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    printf("세 개의 정수 입력: ");
//    scanf_s("%d%d%d", &a, &b, &c);
//                                                           
//    printf("a == b && a>10 && b>10 ? %d\n", a == b && a > 10 && b > 10);
//    printf("a>b && a !=0? %d\n", a > b && a != 0);
//    printf("a>5 || b<10 ? %d\n", a > 5 || b < 10);
//    printf("a>b && a>c && a!=0? %d\n", a > b && a > c && a != 0);
//}
//
//      
      

//05 증감연산자(++,--)
//전치연산자(++a, --a): 변수값을 1증가 혹은 1감소 이후에 다른 연산처리
//후지연산자(a++, a--): 다른연산 처리 후 1증가 혹은 1감소

//#include <stdio.h>
//int main()
//{
//    int a = 10, b = 20, c = 0, d = 0, e = 0;
//    c = ++a + ++b; // a=11, b=21 -> 32
//    d = a++ + b++; // -> 32 이후에 (모든연산 끝난 후 1씩 증가) a 12, b 22
//                   // c=32 d=32
//    e = ++a + b-- + ++c + d--;
//     // a=13 + b=22 + c=33 + d=32   e=100
//     // a=13 b=21 c=33 d=31 e=100
//    printf("%d\n", d);
//}


////06 응용 증감 연산자 + 논리연산자
//#include <stdio.h>
//int main()
//{
//    int a = 1, b = 1, c = 0, d = 5;
//
//    c = --a && b++; // a=0, b=1, c=0 // 연산 후: b=2
//    printf("a = %d, b = %d, c = %d", a, b, c);
//    d = ++a && b++; // a=1 b=2 d=1
//    printf("d = %d", d);
//}

//
////07삼항연산자
//// (조건식) 참인 경우 실행코드: 거짓인 경우 실행코드
//
//#include <stdio.h>
//int main()
//{
//    int a = 10, b = 20;
//    (a > b) ? printf("큰수: %d\n", a) : printf("큰수 : %d\n", b);
//    //삼항연산자는 IF문으로 대체
////}


// 1. 짝수와 홀수 구분
// 먼저 키보드로 값을 입력받아 삼항연산자를 통해 짝수와 홀수인지 출력

//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//
//    (n % 2 == 0) ? printf("짝수") : printf("홀수"); 
//}        
// 
// 
// 
// 
// 2.먼저 키보드로 값을 입력받아 3의 배수가 맞는지 아닌지  확인
//#include <stdio.h>
//    int main()
//    {
//        int n;
//        scanf_s("%d", &n);
//
//        (n % 3 == 0) ? printf("참") : printf("거짓");
//    }

//#include <stdio.h>
//int main()
//{
//    int n = 54321;
//    printf("오른쪽 끝한자리=%d\n", n % 10);
//    printf("오른쪽 끝두자리=%d\n", n % 100);
//    printf("오른쪽 끝세자리=%d\n", n % 1000);
//    printf("오른쪽 끝네자리=%d\n", n % 10000);
//    printf("=============================\n"); 
//    printf("왼쪽 끝한자리=%d\n", n / 10000);
//    printf("왼쪽 끝두자리=%d\n", n / 1000);
//    printf("왼쪽 끝세자리=%d\n", n / 100);
//    printf("왼쪽 끝네자리=%d\n", n / 10);
//
//}