//������ �迭�� ����

//������ �迭�� 2���� �̻��� �迭�� �ǹ�. 1���� �迭���� �ٸ�
// ���������� ����ϴ� �迭�� 2����, 3���� �迭�̴�.
// 
// int arr1[10]; //���� ���̰� 10�� 1���� �迭
// int arr2[5][3]; //���ΰ� 5, ���ΰ� 3�� 2���� �迭
// int arr3[2][3][4] //���̰� 2, ���ΰ� 3, ���ΰ� 4�� 3���� �迭                                                                                                                                                                
#include <stdio.h>
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3}, {4,5,6}
//	};
//	//�迭�� ��� ��� ���
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//������ �迭 �μ�
////#define: c���� ��ó���� ���ù�. ������ ���� ������ �����Ǹ� �ַ� ���, ��ũ�� �Լ� ���� �����ϴ� �� ���.
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
//	printf("�� ������ %d�Դϴ�.", total_sale);
//}


//����) �� �б��� 3���̸� �� �л����� �ݸ��� 5�� �ֽ��ϴ�. 
// �� �л����� ������ 0������ 14������ �ֽ��ϴ�. 
// �б��� ��ռ����� �̰�, ��ü �л����� ��� ������ �̾ƺ��ÿ�.
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
//		printf("�б� %d�� ��ռ��� = %d\n", i + 1, c_avg / st);
//		total_avg += c_avg;
//	}
//	printf("��ü �л����� ��ռ��� = %d\n", total_avg / (c * st));
//}


//����) Max_size�� 10�� �迭�� �ֽ��ϴ�. �� �迭 �ȿ��� 1~10�������� �����͸� ��� �ֽ��ϴ�.
//�迭 array���ٰ� 1~10������ ���� ��� ����غ�����.
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



//���� 
//1 2 3 4 
//5 6 7 8 
//10 11 12 13 ���

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
////2���� �迭 ���� ���
//int matrix[ROWS][COLS];
//for (int i = 0; i < ROWS; i++)
//{
//	for (int j = 0; j < COLS; j++)
//	{
//		 printf()
//	}
//}