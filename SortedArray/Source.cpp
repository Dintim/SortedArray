#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int num;
	cout << "введите номер задания: ";
	cin >> num;

	switch (num)
	{
	case 1:
	{
		//1.	Необходимо отсортировать первые две трети массива в порядке возрастания
		//если среднее арифметическое всех элементов больше нуля; иначе - лишь первую треть.
		//остальную часть массива не сортировать а расположить в обратном порядке.

		const int n = 12;
		int a[n] = { -6,2,1,-4,0,5,3,4,9,-21,11,7 };

		double sum = 0;
		int meanCount = 0;

		for (int i = 0; i<n; i++)
		{
			sum += a[i];
			meanCount++;
		}

		int s = 0;
		if ((double)sum / meanCount>0)
		{
			for (int i = 0; i<2 * n / 3 - 1; i++)
			{
				for (int j = 0; j<2 * n / 3 - 1; j++)
				{
					if (a[j]>a[j + 1])
						swap(a[j], a[j + 1]);
				}
			}

			for (int j = 2 * n / 3; j <= (n - 1 + 2 * n / 3) / 2; j++)
			{
				swap(a[j], a[n - 1 - s]);
				s++;
			}
		}
		else
		{
			for (int i = 0; i<n / 3 - 1; i++)
			{
				for (int j = 0; j<n / 3 - 1; j++)
				{
					if (a[j]>a[j + 1])
						swap(a[j], a[j + 1]);
				}
			}

			for (int j = n / 3; j <= (n - 1 + n / 3) / 2; j++)
			{
				swap(a[j], a[n - 1 - s]);
				s++;
			}
		}


		for (int i = 0; i<n;i++)
			cout << a[i] << " ";
		cout << endl;


	}
	break;

	case 2:
	{
		//2.	Реализовать Сортировку выбором
		const int n = 12;
		int a[n] = { 9,2,3,5,18,4,6,7,8,1,20,11 };

		int m, k;
		for (int i = 0; i<n - 1; i++)
		{
			m = INT_MAX;
			for (int j = i + 1; j<n; j++)
			{
				if (a[j]<m)
				{
					m = a[j];
					k = j;
				}
			}

			if (a[i]>a[k])
			{
				swap(a[i], a[k]);
			}

		}

		for (int i = 0; i<n;i++)
			cout << a[i] << " ";
		cout << endl;
	}
	break;





	}



	return 0;
}
