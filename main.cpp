#include <iostream>
#define MAX 100
using namespace std;

void CreateSequence(int sequence[], int &length) 
{
	for (int i = 0; i < length; i++) 
	{
		cin >> sequence[i];
	}

}

void CreateMatrix(int matrix[][MAX], int length, int frame)
{
	for (int i = 0; i < frame; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = '\0';
		}
	}
}
void CreateAsterisk(char asterisk[], int &length)
{
	for (int i = 0; i < length; i++)
	{
		asterisk[i] = '\0';
	}
}
bool Check(int matrix[][MAX], int sequence[], int frame, int index)
{
	for (int i = 0; i < frame; i++)
	{
		if (matrix[i][--index] == sequence[index])
			return true;
	}
	return false;
}

void DisplayArray(char asterisk[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << asterisk[i] << " ";
	}
}
void DisplayMatrix(int matrix[][MAX], int length, int frame)
{
	for (int i = 0; i < frame; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void FIFO(int matrix[][MAX], int sequence[], char asterisk[], int length, int frame)
{
	int i = 0, j = 0;
	int count = 0;
	while (i < frame)
	{
		j = i;
		while (j <= frame) 
		{
			matrix[i][j] = sequence[i];
			j++;

		}
		asterisk[i] = '*';
		++count;
		i++;
	}
	i = 0, j = frame;
	int current = 0;
	int index = 0, tmp = 0;
	while (j < length)
	{
		index = j; tmp = j;
		while (i < frame)
		{
			if (Check(matrix, sequence, frame, index) == true)
			{
				--tmp;
				i++;
			}
			else 
			{
				matrix[current][index] = sequence[index];
				++count;
				++current;
				asterisk[index] = '*';				
			}
			//matrix[i][tmp] = matrix[i][index];
			matrix[i][index] = matrix[i][tmp];
			i++;
		
		}
		j++;
	}
	DisplayMatrix(matrix, length, frame);
	DisplayArray(asterisk, length);
	cout << "\nNumber of Page Fault: " << count << endl;
}

int main()
{
	int matrix[MAX][MAX], sequence[MAX];
	int array[] = {1, 9, 5, 2, 2, 1, 0, 4, 0, 0, 7};
	int length, frame;
	char asterisk[MAX];
	CreateAsterisk(asterisk, length);
	cout << "--- Page Replacement algorithm ---\n";
	cout << "1. Default referenced sequence.\n";
	cout << "2. Manual input sequence.\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
		case 1: 
			break;
		case 2:
			cout << "Input sequence: "; cin >> length;
			CreateSequence(sequence, length);
			cout << "Input page frame: "; cin >> frame;
			CreateMatrix(matrix, length, frame);
			break;
		default: 
			break;
	}
	cout << "--- Page Replacement algorithm ---\n";
	cout << "1. FIFO algorith.\n";
	cout << "2. OPT algorithm.\n";
	cout << "3. LRU algorithm.\n";
	int choice2;
	cin >> choice2;
	switch (choice2)
	{
		case 1: 
			if (choice == 1)
			{
				FIFO(matrix, array, asterisk, length, frame);
			}
			else 
				FIFO(matrix, sequence, asterisk, length, frame);
			break;
		default: 
			break;
	}
	return 0;
}
