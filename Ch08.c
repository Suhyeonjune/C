//01 �ݺ���
// ���α׷����� �ݺ������� ����Ǵ� �ڵ带 �ۼ��� �� ���

//1. while��

// ������ ���� ���� �ݺ������� �ڵ带 ����. 
// while���� ����

//while (���ǽ�)
//{
//	//�ݺ������� ����� �ڵ� ��) ������ ���̸� �ݺ������� ������ �ڵ带 ����, ������ �����̸� �ݺ��� ����
//	//��ġ ������ ���� ���� ����
//}

//#include <stdio.h>
//int main()
//{
//	//Ż��� ����
//	//Ż��� ���ǽ�
//	//Ż���� ���� �����
//
//	int i = 1; //Ż��� ����
//	while (i <= 10)
//	{
//		printf("Hello\n");
//		i++; //Ż���� ���� ����� (��ġ������)
//	}
// 
//}


//02 1���� 10���� �� ���ϱ�
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	while (i <= 10)
//	{
//		printf("i = %d\n", i);
//		sum = sum + i; // sum += i
//		i++;
//	}
//	printf("while ���� ���� i = %d\n", i);
//	printf("1���� 10������ ��: %d\n", sum);
//}

//����: Ű����κ��� ���� �ϳ� �Է� �޾� 1���� n������ �� ���ϱ�
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//	printf("���ڸ� �ϳ� �Է��ϼ���");
//	scanf_s("%d", &n);
//
//	while (i <= n)
//	{
//		sum += i; 
//		i++;
//	}
//printf("n������ �� = %d\n", sum);
//
//}
// 
// 
//����: ������ ���: 2�ܸ� ���
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		printf("2*%d\=%d\n", i, 2 * i);
//		i++;
//	}
//}
//����: ������ �ϳ��� �Է¹޾� ������ ���
//
//#include <stdio.h>
//int main()
//{
//	int dan = 0;
//	printf("������ �� �Է�: ")
//		scanf_s("%d", &dan); 
//		int i = 1;
//	while (i < 10)
//	{
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

// 1���� 10���� �� �߿� ¦������ Ȧ������ �� ���ϱ� (%������)
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//	
//	while (i <= 10)
//	{
//		if (i%2 == 0)
//		{
//			evensum += i;
//		}
//		else
//		{
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("¦�� ��: %d\nȦ�� ��: %d\n", evensum, oddsum);
//
//}

//��ü ������ 
//2��~9�ܱ��� �� �� ���
//#include <stdio.h>
//int main()
//{
//	int i = 2, j=1;
//	
//	while (i <= 9) //i�� �� ��
//	{
//		int j = 1;  
//		while (j <= 9)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("\n");
//		i++; 
//	}
//}


// ������ ���� ��� 
//#include <stdio.h>
//int main()
//{
//	int dan = 9;
//	int i = 0;
//	while (dan >= 2)
//	{
//		i = 9;
//		while (i >= 1)
//		{
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			i--;
//		}
//		printf("\n");
//		dan--;
//	}
//}


//���� ���̸� �Է¹޾� ���̸�ŭ�� �ﰢ�� ���
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("���̸� �Է��ϼ���: ");
//	scanf_s("%d", &n);
//
//	int i = 0; // ��
//	int j = 0; // ��
//	while (i < n)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//	printf("\n");
//	i++;
//	}
//}