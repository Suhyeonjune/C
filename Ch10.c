#include <stdio.h>

//���� �л� 5���� �ְ� �� ��� ���� ���
//int main()
//{
//	int s[5];
//}

//�迭�̶� array
//������ Ÿ���� �����Ͱ� ������ ����Ǿ� �մ� ������ ���� ���, ����
//�迭 �ȿ� ����ִ� ������ �����͵��� ������ �Ǿ��ִ� ��ȣ�� ���� ����
//�迭 �̿�� ���� ���� �ϳ��� �̸����� ó�� ����

//�ε���: �迭 ������ ��ȣ

//data_type arry_name[array_size]
//ex) int arr[5] :ũ�Ⱑ 5�� int�� �迭 arr ����
//�迭�� �ε����� ����� �� ��ҿ� ���� ����
//�ε����� 0���� �����Ͽ� �迭�� ũ�⺸�� �۾ƾ� ��

//arr[0] = 10 // arr�� ù��° ��ҿ� 10 ����
//arr[1] = 20// arr�� �ι�° ��ҿ� 10 ����
///arr[0]�� �迭�� ù��° ��Ҹ� ��Ÿ���� [1]�� �ι�° ��Ҹ� ��Ÿ��

//int main()
//{
//	int arr[] = { 10, 20, 30, 40, 50 }; //��� 5���� ������ int�� �迭
//
//	{for (int i = 0; i < 5; , i++)
//		printf("%d\n", arr[i]);
//	}
//}

//�迭�� ����
//int grade[10]
// int: �ڷ��� grade(�迭�̸�) [10](�迭 ũ��-�迭�� ���� ������ 10)
//���ε���(�迭 ��ȣ)�� �׻� 0���� ����
//
//int main()
//{
//	int grade[10]; 
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &grade[i]);
//
//	}
//	printf("==============\n");
//	printf("==============\n");
//	printf("==============\n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d        %d\n", i, grade[i]);
//	}
//}

//int main()
//{
//	int grade[5];
//	int sum = 0;
//	int avg;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("������ �Է��ϼ���: ");
//		scanf_s("%d", &grade[i]);
//		sum += grade[i];
//	}
//	avg = sum / 5;
//	printf("���� ���: %d\n", avg);
//}






//int main()
//{
//	int arr[10] = { 0 }; //1. ũ��10�� int�迭 ����, ��� ��� 0���� �ʱ�ȭ
//	
//	double arr[5] = 0; //2. ũ��5�� double�迭 ����, ���Է� �޾� �迭 ��ҿ� ����
//	for (int i = 0; i < 5; i++)
//	{
//		printf("double�� �迭�� ���� �Է��ϼ���: ");
//		scanf_s("%f", &arr[i]);
//	}
//	
//	char arr [7] = "hello";//3. ũ��7�� char�迭 ����, "hello" ���ڿ� ����
//
//	int arr[6] = { 1, 2, 3, 4, 5, 6 }; 
//	//4. ũ��6�� int�迭 ����, ù��° ��Һ��� ������° ��ұ��� 1,2,3,4,5,6 ����
//
//	int arr[8]; //5. ũ��8�� int�迭 ����, �迭�� ��Ҹ� 1���� 8���� ������ �ʱ�ȭ
//	for (int i = 0; i < 8; i++)
//	{
//		arr[i] = i + 1; 
//	}

//�迭 ��ҵ� �߿��� �ּҰ��� ã�� ���α׷� �����

//int main()
//{
//	int arr[5] = { 10, 5, 7, 3, 8 };
//	int min = arr[0]; //�迭�� ù��° ���� �ּҰ����� �ʱ�ȭ
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	
//	printf("�迭���� ���� ���� ��: %d\n", min);
//}


//�迭���� Ư���� �� ã�� �� ��ġ�� ����ϴ� ���α׷� �ۼ�
//
//int main()
//{
//	int arr[5] = { 2,3,5,8,1 };
//	int n;
//	int found = 0;
//
//	printf("ã�� ���� �Է��ϼ���: ");
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i]==n)
//		{
//			printf("%d�� �迭�� %d��° ��ġ�� �ֽ��ϴ�", n, i+1);
//			found = 1;
//		} 
//	}
//		
//	if (!found)
//	{
//		printf("�迭�� �����ϴ�.\n");
//	}
//}