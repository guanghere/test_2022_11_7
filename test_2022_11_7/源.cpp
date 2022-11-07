//#include<iostream>
//using namespace std;
//
//template<typename T>
//void bubblesort(T arr[], int n)
//{
//	bool done = 0;
//	for (int i = 1; i < n && !done; i++)
//	{
//		done = 1;
//		for (int j = 1; j <= n - 1; j++)
//			if (arr[j - 1] > arr[j])
//		{
//				T temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//				done = 0;
//		}
//	}
//}
//
//int main()
//{
//	int const len = 20;
//	int i = 0, n = 0, a[len];
//	cout << "被排序元素的个数 = ";
//	cin >> n;
//	cout << "输入" << n << "个元素";
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	bubblesort(a, n);
//	for (i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//		cout << " ";
//	}
//
//	return 0;
//}