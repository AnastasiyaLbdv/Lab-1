#include <iostream>
#define N_Max 1000

void BUBBLESORT(int mas[N_Max], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (mas[i] >= mas[i - 1])
			continue;
		int j = i - 1;
		while (j >= 0 && mas[j] > mas[j + 1])
		{
			std::swap(mas[j], mas[j + 1]);
			j--;
		}
	}
}

int main()
{
	srand(time(0));
	int mas[N_Max];
	for (int i = 0; i < N_Max; i++)
		mas[i] = rand();

	int sum = 0; 
	for (int i = 0; i < N_Max; i++)
		sum += mas[i];
	if (sum > 1000)
		BUBBLESORT(mas, N_Max);
	else
		std::cout << "does not satisfy the condition";

	for (int i = 0; i < N_Max; i++)
		std::cout << mas[i] << std::endl;

	return 0;
}