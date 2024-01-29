//정적할당: 컴파일 타임에 메모리를 할당하며 프로그램 실행 도중에는 메모리의 크기나 위치를 변경할 수 없음. 
//c언어에서 변수를 선언할 때 기본적으로 정적할당을 사용. 즉 변수의 크기와 위치가 컴파일 타임에 결정되며, 프로그램 실행중에는 변경 불가

//동적할당: 프로그램 실행 중 메모리를 동적으로 그때그때 할당할 수 있어 메모리 사용을 효율적으로 관리가능. ex)새폴더
//정적할당으로는 처리할 수 없는 큰 데이터나 자료구조를 받을 수 있다는 장점
//동적할당은 메모리 사용을 효율적으로 관리하고 메모리 누수를 방지

#include <stdio.h>
#include <stdlib.h> //c언어 표준 라이브러리에 포함된 헤더 파일 중 하나

//malloc(): 메모리를 동적으로 할당하는 함수
//free(): 동적으로 할당한 메모리를 해제하는 함수

//realloc(): 동적으로 할당한 메모리 크기를 변경하는 함수
//atoi()
//rand()


//malloc함수는 인자로 전달된 바이트 크기에 맞는 메모리 블럭을 할당하고, 그 메모리 블럭의 시작 주소를 반환.
//sizeof와 함께 사용
//예) void* malloc(size_t size)

//정수 배열을 동적으로 할당하고 배열의 원소를 채운 다음 출력한 후 메모리를 해제

//int main()
//{
//	int n, i;
//	int* arr;
//
//	printf("배열의 길이를 저장하세요");
//	scanf_s("%d", &n);
//
//	//동적 메모리 할당
//	arr = (int*)malloc(n * sizeof(int)); //(int*): 동일 자료형 포인터 지정(=형변환)
										 //sizeof(int) = 4
										 //int형 4개만큼의 16바이트 할당	
	//메모리 할당 확인
	//메모리 할당 함수는 원하는 크기의 공간을 할당하지 못하면 0번지인 널 포인터를 반환
	//널 포인터는 보통 NULL로 표기되는데 전처리 단계에서 0으로 바뀌므로 정수 0과 같다고 생각

//	if (arr == NULL)
//	{
//		printf("메모리가 부족합니다");
//		return 1;
//	}
//	for (int i = 0; i < n; i++) //n은 배열길이
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//  printf("\n");
//
//	//동적으로 할당한 메모리 해제  =>	free(arr)
//	//호출하지 않아도 프로그램 종료시 메모리를 자동적으로 해제된다
//	//실제 프로그램에서 메모리의 생성과 소멸이 빈번하게 발생해서 사용자가 직접 메모리 공간을 해제할 수 있는 free 함수를 해야한다.

//}

	//char* getString(void)
	//{
	//	char* str = (char*)malloc(sizeof(char) * 100); // 1바이트 * 100 = 100바이트
	//												  //메인함수 종료 때까지 남아있음
	//	printf("좋아하는 과일은?");
	//	fgets(str, 100, stdin);
	//	return str;
	//}
	//int main()
	//{
	//	char* result = getString();
	//	printf("좋아하는 과일은: %s\n", result);
	//	free(result); 
	//}
