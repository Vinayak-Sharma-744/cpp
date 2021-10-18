#include <iostream>
#include <cstdlib>

using namespace std;

// Swapping two values.
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Partitioning the array on the basis of values at high as pivot value.
int Partition(int a[], int low, int high)
{
	int pivot, i, j;
	j = high;
	pivot = a[low];
	i = low;

	while (i < j)
	{
		while (a[i] <= pivot)
		{
			i++;
		}
		while (a[j] > pivot)
		{
			j--;
		}

		if (i < j)
		{
			swap(&a[i], &a[high]);
		}
	}
	// Swapping value at high and at the index obtained.
	swap(&a[low], &a[j]);

	return j;
}

int QuickSort(int a[], int low, int high)
{
	if (low < high)
	{
		int pivot = Partition(a, low, high);
		QuickSort(a, low, pivot - 1);
		QuickSort(a, pivot + 1, high);
	}
	return 0;
}

int main()
{
	int n, i;
	cout << "\nEnter the number of data elements to be sorted: ";
	cin >> n;

	int arr[n];
	for (i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}

	QuickSort(arr, 0, n - 1);

	// Printing the sorted data.
	cout << "\nSorted Data ";
	for (i = 0; i < n; i++)
	{
		cout << "->" << arr[i];
	}

	return 0;
}