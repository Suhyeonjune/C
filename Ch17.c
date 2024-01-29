//다차원 배열의 이해

//다차원 배열은 2차원 이상의 배열을 의미. 1차원 배열과는 다름
// 실질적으로 사용하는 배열은 2차원, 3차원 배열이다.
// 
// int arr1[10]; //가로 길이가 10인 1차원 배열
// int arr2[5][3]; //세로가 5, 가로가 3인 2차원 배열
// int arr3[2][3][4] //높이가 2, 세로가 3, 가로가 4인 3차원 배열                                                                                                                                                                
#include <stdio.h>
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3}, {4,5,6}
//	};
//	//배열의 모든 요소 출력
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//다차원 배열 인수
////#define: c언어에서 전처리기 지시문. 컴파일 과정 이전에 생성되며 주로 상수, 매크로 함수 등을 정의하는 데 사용.
//#define years 3
//#define products 5
//
//int sum(int grade[][products])
//{
//	int total = 0;
//	for (int i = 0; i < years; i++)
//	{
//		for (int j = 0; j < products; j++)
//		{
//			total += grade[i][j];
//		}
//	}
//	return total;
//}
//
//int main()
//{
//	int sales[years][products] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
//	int total_sale; sum(sales);
//	printf("총 매출은 %d입니다.", total_sale);
//}


//문제) 각 학급은 3반이며 각 학생들은 반마다 5명씩 있습니다. 
// 각 학생들의 성적은 0점에서 14점까지 있습니다. 
// 학급의 평균성적을 뽑고, 전체 학생들의 평균 성적을 뽑아보시오.
//#define c 3
//#define st 5
//
//int main()
//{
//	int school[c][st] = { {0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}};
//	
//	int total_avg;
//	for (int i = 0; i < c; i++)
//	{
//		int c_avg;
//		for (int j = 0; j < st; j++)
//		{
//			c_avg += st[i][j]; 
//		}
//		printf("학급 %d의 평균성적 = %d\n", i + 1, c_avg / st);
//		total_avg += c_avg;
//	}
//	printf("전체 학생들의 평균성적 = %d\n", total_avg / (c * st));
//}


//문제) Max_size가 10인 배열이 있습니다. 이 배열 안에는 1~10번까지의 데이터를 담고 있습니다.
//배열 array에다가 1~10까지의 수를 담고 출력해보세요.
//
//int main()
//#define max_size 10
//{
//	int array[max_size];
//	for (int i = 0; i < 10; i++)
//	{
//		array[i] = i + 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", array[i]);
//	}
//	
//}



//문제 
//1 2 3 4 
//5 6 7 8 
//10 11 12 13 출력

//#define ROWS 3
//#define COLS 4
//
//int main()
//{
//	int matrix[ROWS][COLS];
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//		matrix[i][j] = i * COLS + j + 1;
//		}
//	}
//	
//}
////2차원 배열 통한 출력
//int matrix[ROWS][COLS];
//for (int i = 0; i < ROWS; i++)
//{
//	for (int j = 0; j < COLS; j++)
//	{
//		 printf()
//	}
//}