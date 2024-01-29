//포인터의 포인터 (이중포인터)

//포인터의 포인터란, 포인터 변수를 가리키는 또 다른 변수를 의미하며 더블 포인터, 이중 포인터 라고도 한다. 

//포인터 변수: 메모리의 주소값을 저장하는 변수, 포인터 변수 또한 하나의 변수이므로 필요한 메모리 공간을 할당받아 사용하고 있다. 따라서 포인터 변수가 차지하고 있는 메모리 공간에 대한 주소값을 저장하는 것이 가능하다. 
//이를 저장하는 변수를 두고 포인터의 포인터를 저장한다고 하여 더블 포인터라고 한다.

//싱글포인터: 기본적인 포인터의 개념
//int x = 10;
//int* p = &x; p는 x의 주소값을 가리키는 포인터이다. 

//더블포인터: 포인터를 저장하는 변수. 해당 포인터가 가리키는 메모리 주소를 참조하여 값을 읽거나 쓰기 가능.
// 다차원 배열의 처리에 사용
// 동적 메모리 할당 위해 사용
//
//int x = 10;
//int* p = &x; //p는 x의 주소값을 가리키는 포인터이다.
//int** q = &p; // q는 p의 주소값을 가리키는 포인터
//
//**q = 20; //역참조 두 번 해 x값을 20으로 변경 가능 


////더블 포인터 이용하여 배열에서 최솟값을 찾는 함수 구현
//#include <stdio.h>
//void findmin(int** arr, int* result) //int** arr: 배열은 이미 포인터인데 여기의 주소를 보냈기 때문에
//{
//	*result = **arr; //최솟값을 저장할 변수를 첫번째 요소로 초기화 = arr의 0번째 주소
//	for (int i = 0; i < 5; i++)
//	{
//		if (*(*arr+i)< *result)
//		{
//			*result = *(*arr + i);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,2,8,3,7 };
//	int* ptr = arr;
//	int** doubleptr = &ptr;
//	int size = sizeof(arr) / sizeof(arr[0]); //배열의 크기를 계산 //sizeof(arr[0])은 4 (int형이라)
//	int min; 
//	findmin(arr, size, &min);
//	printf("배열에서 최솟값은 %d입니다.\n", min);
//}
//

//int main()
//{
//	int num = 3;
//	int* ptr1 = &num;
//	int** dptr = &ptr1;
//	int* ptr2;
//
//	printf("%p %p\n", ptr1, dptr); 
//	printf("%d %d", num, **dptr);
//
//	ptr2 = *dptr; //ptr1이 가리키는 ptr1의 값을 ptr2에 대입해 ptr2는 num의 주소값 가짐
//
//	*ptr2 = 9; //ptr2가 가리키는 변수에 9를 저장. 변수는 num의 값이 바뀐다.
//	printf("%d %d %d\n", num, *dptr, *ptr2);
//
//
//}





//void swap(int** a, int** b) {
//	int temp = **a;
//	**a = **b;
//	**b = temp;
//}
//
//int main()
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	printf("바뀌기 전: \n");
//	printf("num1=%d, num2=%d\n", num1, num2);
//
//	swap(&ptr1, &ptr2);
// 
//	printf("바뀐 후: \n");
//	printf("num1=%d, num2=%d\n", num1, num2); 
//} 



//문제: 더블 포인터 사용하여 문자열을 역순으로 출력 //strlen, for문
//#include <stdio.h>
//#include <string.h>
//
//void printReverse(char** str) {
//	int len = strlen(*str);  // 문자열 길이(NULL문자 제외) 반환 -> 12byte
//							 // *str = 포인터 str을 역참조 = hello world
//						    //  cf) **str = 문자열(배열) 주소값의 첫번째 = h
//	 for ( int i = len; i >= 0; i--) 
//	 {
//		 printf("%c", *(*str +i));
//	 }
//}
//int main()
//{
//	char* str = "hello world!"; //13byte
//	printReverse(&str); //str의 주소값 전달
//	return 0;
//}



//더블 포인터와 Call-by-reference
//두 방법 모두 함수 호출 시, 인수로 전달된 변수의 값을 변경할 수 있다.
//그러나 더블 포인터는 포인터 변수를 가리키는 포인터를 다루는 것에 비해
//Call-by-reference는 변수의 주소를 전달하는 것이다. 그래서 더 간단하고 직관적인 방법
//더블 포인터는 필요한 경우에만 사용하는 것이 좋다 ex)2차원 배열



//함수 포인터
//함수 포인터: 함수의 주소를 저장하기 위한 포인터
//함수를 가리키는 포인터를 선언하고 이를 이용하여 함수를 호출할 수 있다. 

//int (*fp)(int);
//리턴타입 (*포인터이름=함수이름)(매개변수)
//#include <stdio.h>
//int square(int num) {
//	return num * num; 
//}
//
//int main()
//{
//	int (*fp)(int); //fp라는 함수 포인터를 선언
//	fp = square; //square라는 함수의 주소를 fp에 저장한다
//
//	printf("square(5) = %d\n", square(5));
//	printf("(*fp)(5) = %d\n", (*fp)(5));
//}



//