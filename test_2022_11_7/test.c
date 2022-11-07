#include<stdio.h>


void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)/*排序的躺数*/
	{
		int flag = 1;/*假设已经有序*/

		/*每一趟排序的次数*/
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;/*不是有序数组的flag就为0*/

				/*交换*/
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		/*内循环一趟过后，flag不为0，就说明没有交换，就是有序的，直接break*/
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,4,5,3,6,2,8,7,1,10 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", i);
	}

	return 0;
}