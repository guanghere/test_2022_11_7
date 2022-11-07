//#include <stdio.h>
//#include <stdbool.h>
//
//#define ARR_LEN 255 /* 数组长度上限*/
//#define elemType int /* 元素类型 */
//
///* 冒泡排序 */
///* 1.从当前元素起，向后依次比较每一对相邻的元素，逆序则交换
//   2.对所有元素重复以上的步骤，直至最后一个元素
///* elemType arr[]: 排序目标数组; int len: 元素个数 */
//void bubbleSort(int arr[], int len)
//{
//
//	int i, j, temp;
//	_Bool exchanged = true;
//
//	for (i = 0; exchanged && i < len - 1; i++) { /* 外循环为排序躺数，len个数进行len-1趟,只有交换过,exchanged的值为true才有必要执行循环,否则exchanged的值为false不执行循环 */
//		exchanged = false;
//		for (j = 0; j < len - 1 - i; j++)
//		{ /* 内循环为每趟比较的次数，第i趟比较len-i次*/
//			if (arr[j] > arr[j + 1])
//			{ /* 相邻元素比较，如果逆序就交换（升序为左大右小，逆序反之） */
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				exchanged = true; /*只有数值互换过, exchanged才会从false变成true,否则数列以及排序完成,exchanged的值任然为false,没必要排序 */
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