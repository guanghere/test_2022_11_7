#include<stdio.h>


void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)/*���������*/
	{
		int flag = 1;/*�����Ѿ�����*/

		/*ÿһ������Ĵ���*/
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;/*�������������flag��Ϊ0*/

				/*����*/
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		/*��ѭ��һ�˹���flag��Ϊ0����˵��û�н�������������ģ�ֱ��break*/
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