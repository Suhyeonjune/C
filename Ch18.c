//1���� 10���� ���� �� ¦���� ����ϴ� ���α׷�  (for��)
#include <stdio.h>
//int main()
//{
//		for (int i = 1; i < 11; i++)
//		{
//			if (i % 2 == 0)
//			{
//				printf("%d\n", i);
//			}
//		}
//}



// ũ�Ⱑ 3*3�� 2���� �迭 �����ϰ�, ����ڷκ��� 9���� ���� �� �Է¹޾� �迭�� ������ ��,
// �迭�� ����� ������ ����ϴ� ���α׷� �ۼ�
//
//int main()
//{
//	int n = 0;
//	int array[3][3]; //9�� ���� ���� �޾� �迭�� ����
//	
//	for (int i = 0; i < 3 ; i++)
//	{
//		printf("������ 3�� �Է����ּ���>> ");
//		for (int j = 0; j < 3 ; j++)
//		{
//			scanf_s("%d", &array[i][j]);
//		}
//	}
//}

//����) Chat GPT�� �̿��� ���� ���α׷� �����
// +, -, *, /�� �����
// ���� ���α׷� �ȿ� �ִ� �ڵ�鿡�� �ּ�ó�� �ذ��� �����ϱ�

//#include <stdio.h>
//
//// �Լ� ����
//float add(float x, float y) {
//    return x + y;
//}
//
//float subtract(float x, float y) {
//    return x - y;
//}
//
//float multiply(float x, float y) {
//    return x * y;
//}
//
//float divide(float x, float y) {
//    if (y != 0) {
//        return x / y;
//    }
//    else {
//        printf("Error: Division by zero\n");
//        return 0.0;  // ���� �߻� �� 0�� ��ȯ
//    }
//}
//
//int main() {
//    char operator; // 
//    float num1, num2, result;
//
//    // ������ �Է�
//    printf("��Ģ������ �����ϼ��� (+, -, *, /): ");
//    scanf_s("%c", &operator); //���� �Է�
//
//    // ���� �Է�
//    printf("ù ��° ���� �Է�: ");
//    scanf_s("%f", &num1);
//
//    printf("�� ��° ���� �Է�: ");
//    scanf_s("%f", &num2);
//
//    // ���õ� ���� ����
//    switch (operator) 
//    {
//    case '+': //���ڴ� ''
//        result = add(num1, num2);
//        printf("���: %.2f\n", result); 
//        break;
//    case '-':
//        result = subtract(num1, num2);
//        printf("���: %.2f\n", result);
//        break;
//    case '*':
//        result = multiply(num1, num2);
//        printf("���: %.2f\n", result);
//        break;
//    case '/':
//        result = divide(num1, num2);
//        if (result != 0.0) {
//            printf("���: %.2f\n", result);
//        }
//        break;
//    default:
//        printf("�߸��� �������Դϴ�. ���α׷��� �����մϴ�.\n");
//        return 1;  // ���� �ڵ� ��ȯ
//    }
//
//    return 0;
//}
