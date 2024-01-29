// void: 비어있는 또는 아무것도 없다는 의미. 함수나 포인터를 정의할 때 사용한다.
//1. 함수로서의  void
//		함수의 반환형으로 void를 사용하면, 해당 함수는 반환값이 없다는 것을 나타냄
#include <stdio.h>
//void helloWorld()
//{
//	printf("Hello world\n"); //반환값 없음 
//}
//main()
//{
//	helloWorld();
//}


//2. 포인터로서의 void
//포인터를 선언할 때 데이터 타입으로 void를 사용하면 어떤 데이터 타입의 메모리 주소든 포인터 변수에 할당할 수 있음.
//void 포인터는 포인터 연산이 불가능. 그래서 해당 메모리의 내용을 읽거나 쓰기 위해서는 적절한 데이터 타입으로 캐스팅(형변환)해주어야 한다. 

//int main()
//{
//	int num = 10;
//	float fnum = 3.14;
//
//	void* ptr;
//	ptr = &num;
//	printf("num = %d", *(int*)ptr); // 첫번째*: 역참조, 두번째*: 강제형변환 int형으로
//
//	ptr = &fnum;
//	printf("fnum = %f\n", *(float*)ptr);
//}


//static 변수
//static이라는 키워드를 사용하여 static변수를 선언할 수 있다. static은 전역변수와 지역변수에 모두 선언 가능하다. 
   //전역변수: 프로그램 종료전까지 데이터 유지 but 지역변수가 더 우선됨
//지역변수를 일부 보완해주는 역할
//static을 사용할 때: static변수를 제외한 선언된 지역 내에서 생성과 소멸을 반복
//static 사용 안하면 선언된 지역 내에서 생성과 소멸을 반복.
//void test() 
//{
//	static int count = 0; 
//	count++;
//	printf("Count = %d\n", count);
//}
//
//int main()
//{
//	test();
//	test();
//	test();
//}


//배열을 전달받는 함수
//배열은 여러 개의 데이터를 하나의 변수에 저장하기 위해 사용하는 자료형
//함수에서 배열을 전달받을 때는 배열의 이름을 그대로 함수에 인자로 전달한다.
//이 때 배열의 이름은 '첫 번째 요소의 주소'를 나타낸다
//함수에서는 전달받은 배열의 첫 번째 요소를 가르키는 포인터 변수를 선언해 사용.

//void printArray(int* arr, int size) //포인터를 매개변수로
//{
//	int i;
//	for (int i = 0; i < size; i++)
//	{
//		printf("배열의 %d번째 요소: %d\n", i, arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printArray(arr, 5);
//}


//Call-by-value, Call-by-reference

//Call-by-value: 값에 의한 호출
//함수 호출 시 인자로 전달되는 값이 복사되어 함수 내부로 전달된다.
//함수 내부에서 인자값이 변경되어도, 함수를 호출한 곳에서는 영향 X

//void swap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b); //swap 안됨
//}


//Call-by-reference:참조에 의한 호출
//함수 호출시 인자로 전달되는 값의 주소가 함수 내부로 전달된다.
//함수 내부에서 인자 값이 변경되면 함수를 호출한 곳에서도 영향을 받는다. 
//
//void swap(int* a, int* b) //매개변수로 포인터 지정
//{
//	int temp; 
//	temp = *a; //역참조
//	*a = *b;
//	*b = temp;
//
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(&a, &b);  
//	printf("a=%d, b=%d\n", a, b);
//}



//재귀: 원래 자기 자리로 회귀.
//재귀함수: 함수 내에서 다시 자기 자신을 호출
////팩토리얼 함수, 피보나치 함수

//팩토리얼: 자기를 포함해서 하나씩 작은 수를 곱해가면서 1까지 곱해 나가는 것
			// 5 => 5*4*3*2*1
//int factorial(int n) //5가 int n에 복사됨
//{
//	if (n==0) //종료 위한 장치.
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1); //함수 안에서 함수호출
//		// 5 => 5*4*3*2*1*1
//	}
//}
//int main()
//{
//	int n = 5;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//}

//피보나치 함수
//int fibo(int n) {
//	if (n<=2)
//	{
//		return 1;
//	}
//	return fibo(n - 1) + fibo(n - 2); //자료구조의 트리구조
//}
//int main()
//{
//	int n = 10;
//	printf("%d", fibo(n));
//}


//문제: 자연수 n을 입력받아 1부터 n까지의 합 구하는 'sum'을 재귀 호출로 구현
//int sum(int n) {
//	if (n<=1)
//	{
//		return n;
//	}
//	else {
//		return n + sum(n - 1); //sum함수 다시 호출
//	}
//}
//int main()
//{
//	int n = 5;  
//	int result = sum(n);
//	printf("1부터 %d까지의 합= %d\n", n, result);  
//}

//sum(5) = 5 + sum(4)
//		 = 5 + (4 + sum(3))
//		 = 5 + (4 + (3 + sum(2)) ~
