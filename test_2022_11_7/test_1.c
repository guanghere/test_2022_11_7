//#include <stdio.h>
//#include <stdbool.h>
//
//#define ARR_LEN 255 /* ���鳤������*/
//#define elemType int /* Ԫ������ */
//
///* ð������ */
///* 1.�ӵ�ǰԪ����������αȽ�ÿһ�����ڵ�Ԫ�أ������򽻻�
//   2.������Ԫ���ظ����ϵĲ��裬ֱ�����һ��Ԫ��
///* elemType arr[]: ����Ŀ������; int len: Ԫ�ظ��� */
//void bubbleSort(int arr[], int len)
//{
//
//	int i, j, temp;
//	_Bool exchanged = true;
//
//	for (i = 0; exchanged && i < len - 1; i++) { /* ��ѭ��Ϊ����������len��������len-1��,ֻ�н�����,exchanged��ֵΪtrue���б�Ҫִ��ѭ��,����exchanged��ֵΪfalse��ִ��ѭ�� */
//		exchanged = false;
//		for (j = 0; j < len - 1 - i; j++)
//		{ /* ��ѭ��Ϊÿ�˱ȽϵĴ�������i�˱Ƚ�len-i��*/
//			if (arr[j] > arr[j + 1])
//			{ /* ����Ԫ�رȽϣ��������ͽ���������Ϊ�����С������֮�� */
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				exchanged = true; /*ֻ����ֵ������, exchanged�Ż��false���true,���������Լ��������,exchanged��ֵ��ȻΪfalse,û��Ҫ���� */
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[ARR_LEN] = { 3,5,1,-7,4,9,-6,8,10,4 };
//	int len = 10;
//	int i;
//
//	bubbleSort(arr, len);
//
//	for (i = 0; i < len; i++)
//		printf("%d\t", arr[i]);
//	putchar('\n');
//
//	return 0;
//}