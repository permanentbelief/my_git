#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); //16			�����ڵ�Ԫ���ֽں� 
	//printf("%d\n", sizeof(a+0));//4         ����a��������׵�ַ
	//printf("%d\n", sizeof(*a));  //4        ������ ��a[0]��ֵ
	//  printf("%d\n", *a);          //         ������ Ϊ������Ԫ��
	//printf("%d\n", sizeof(a+1)); // 4           �׵�ַ��һ ����ڶ���Ԫ�صĵ�ַ���൱�ڻ���int* ��ָ�뻹��4���ֽ�
	//printf("%d\n", *(a + 1));        //         ����ڶ���Ԫ��2
	//printf("%d\n", sizeof(a[1])); 4 //        int���� 4���ֽ�
	//printf("%d\n", sizeof(&a)); // 4             ȡ������ĵ�ַ���൱������ָ�룬��a[0]�ĵ�ַ��ͬ
	//printf("%d\n", sizeof(*&a)); //16             ����ָ�� ���������������� �������ֽ���֮��
	//printf("%d\n", sizeof(&a+1));// 4             1.��a+1���� �൱��ȡ���ڶ���Ԫ�صĵ�ַ 2. �������Ϊ����ָ��&a ,&a +1��������ָ�룬����4���ֽ�
	//printf("%d\n", sizeof(&a[0]));// 4             ָ������ ȡa[0]�ĵ�ַ��4���ֽڡ��൱��a, &a,
	//
	//printf("%d\n", sizeof(&a[0]+1));// 4          ָ������ �൱��ȡ��һλ
	 
	//printf("%p\n",&a[0]);
	//printf("%p\n", &a);
	//printf("%p\n", a);
	//printf("%p\n", a+1);// ��ַ +4  ָ��������һλ �ߵ�a[2];
	//printf("%p\n", &a+1);// ��ַ+16  ��������ĳ��ȡ�&a��Ϊ����ָ�룬����ָ��+1 Խ����������
	//printf("%p\n", &a[0]+1);// ��ַ+4 �ߵ�a[2];�൱��ȡa[2]�ĵ�ַ
	
	
	
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); // 6 �ַ��ֽں�
	//printf("%d\n", sizeof(arr+0)); //4 ��������arr�ַ������׵�ַ
	//printf("%d\n", sizeof(*arr));// 1 ���׵�ַ�����ã�Ϊ��Ԫ��
	//printf("%d\n", sizeof(arr[1]));// 1 �ڶ���Ԫ�� char��
	//printf("%d\n", sizeof(&arr));//4     ȡ�����������ָ�룬��Ϊ����ָ��
	//printf("%d\n", sizeof(&arr+1));// 4   ����ָ��+1 ��������ָ��
	//printf("%d\n", sizeof(&arr[0]+1));//4  ȡ����Ԫ�صĵ�ַ ���¼���һλ�����ַ�����ĵڶ�λ��ַ��Ҳ��char*����
	//printf("%c\n", *(&arr[0] + 1)); // b ��֤sizeof(&arr[0]+1);

	//printf("%d\n", strlen(arr));  // ע�� ��'\0' ���ֵ
	//printf("%d\n", strlen(arr+0)); //          ���ֵ���������� strlen(arr+0)���arr��ָ���𣬺�sizeof(arr+0)��������� 
	////printf("%d\n", strlen(*arr)); // ���� �Ƿ��ʵ� 'a'����
	////printf("%d\n", strlen(arr[1])); // ���� arr[1] ���� 'b'
	//������������printf("%d\n", strlen(&arr));    // ���ֵ ���ʵ��ַ������׵�ַ
	//������������rintf("%d\n", strlen(&arr+1)); // ���ֵ
	//printf("%d\n", strlen(arr[0]+1));//���ʵ�'b',����b��'\0'�ĳ���

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  ����'\0��
	//printf("%d\n", sizeof(arr+0));// 4  char*����ָ��
	//printf("%d\n", sizeof(*arr)); //1 ��Ԫ�ص�ַ������
	//printf("%d\n", sizeof(arr[1]));//1  �ڶ���Ԫ�� char���� �ֽ�
	//printf("%d\n", sizeof(&arr));//4  ����ָ�� ȡ��������׵�ַ
	//printf("%d\n", sizeof(&arr+1));// 4  ����ָ��+1��������ָ��
	//printf("%d\n", sizeof(&arr[0]+1));//4  ȡ��arr[0]����������׵�ַ +1 ���¶�ȡһλ������char*ָ��
	
	//printf("%d\n", strlen(arr));//6 ����'\0��
	//printf("%d\n", strlen(arr+0));//ɶ��˼����arr��ָ���� Ϊʲô��6�� �ص㣡��������������
	//�����ǲ��� arr��������׵�ַ������ȡֱ��ȡ���ַ�'0������������Ϊ6 ?
	//���죺
	//printf("%d\n", strlen(arr + 1));//5
	//printf("%d\n", strlen(arr + 2));//4
	//printf("%d\n", strlen(arr + 3));//3
	//printf("%d\n", strlen(arr + 4));//2

	//printf("%d\n", strlen(*arr));//���� ȡ���ַ�'a'
	//printf("%d\n", strlen(arr[1]));//���� ȡ���ַ�'b'
	//printf("%d\n", strlen(&arr));//  ȡ������׵�ֱַ��'\0'���������㳤�ȣ�����Ϊ6
	 //printf("%d\n", strlen(&arr+1));// 12 ����ָ��+1  �Ǽ���������ĳ���
	//printf("%d\n", strlen(&arr[0]+1));// ȡarr[0]�ĵ�ַ�����·��ʵ�arr[1];������arr[1]��ʼֱ�����ʵ�'\0�����㳤��

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));  //4  char*ָ������ �ַ����׵�ַ
	//printf("%d\n", sizeof(p+1)); //4  ����char*���� �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(*p)); //1   �ַ�����һ��char���� ���ֽ�
	//printf("%d\n", sizeof(p[0]));//1  �ַ�����һ���ַ����ֽ�
	//?????????????printf("%d\n", sizeof(&p)); // 4  �ַ����׵�ַ char*����
	//?????????????printf("%d\n", sizeof(&p+1)); // 4  char*���� ָ������+1���� ָ��
	//?????????????printf("%d\n", sizeof(p[0]+1));//4  char*����  ָ���ַ����еڶ����ַ��� ָ��
	

	//printf("%d\n", strlen(p));// 6
	//printf("%d\n", strlen(p+1));// 5
	//printf("%d\n", strlen(*p)); // ���� �ַ�����Ԫ��
	//printf("%d\n", strlen(p[0])); // ���� �ַ�����Ԫ��
     //printf("%d\n", strlen(&p)); //  Ϊɶ�����ֵ������
	//printf("%d\n", strlen(&p+1));// Ϊɶ�����ֵ������
	 //printf("%d\n", strlen(&p[0]+1));//5

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//12* 4 = 48;
	printf("%d\n", sizeof(a[0][0]));// 4;
	printf("%d\n", sizeof(a[0]));//4 * 4 =16;
	printf("%d\n", sizeof(a[0]+1));//4
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(*(a+1)));//4�� // 16
	printf("%d\n", sizeof(&a[0]+1));//4
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	printf("%d\n", sizeof(*a));//4 ��//16
	printf("%d\n", sizeof(a[3]));//16

	//int* arr[10];//����ָ�������
	//char *arr2[4];//һ���ַ�ָ�������
	//char **arr3[5];//�����ַ�ָ�������
	/*int arr[10] = { 0 };
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);

	printf("arr+1 =%p\n", arr + 1);
	printf("&arr = %p\n", &arr+1);*/
	//������ arr ��  &arr��Ȼֵ��һ���������岻һ����
	//&arr��ȡ������ĵ�ַ��&arr+1������ĵ�ַ��1����ʵ������������Ĵ�С��
	//��arr��������Ԫ�صĵ�ַ��arr+1��ָ������ָ���ڶ���Ԫ�أ��ǵڶ���Ԫ�صĵ�ַ��
	/*printf("arr+1 = %p\n", arr + 1);
	printf("&arr+1 = %p\n", &arr + 1);

*/
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//int(*p)[10] = &arr;
	////printf("%p\n", &arr	
	////printf("%p\n", arr);
	////printf("%p\n", arr);
	//// Ϊʲô��ӡ���������ֵ
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[1]);
	//printf("%p\n", &arr[2]);


	//void test2(int **arr)//ok?
	//{
	//	;
	//}
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int *arr2[20] = { 0 };
	//	//ָ������ arr2 ��ָ������ ������������
	//	test2(arr2);


	system("pause"); 
}