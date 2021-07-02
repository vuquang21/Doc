#include <iostream>
#define MAX 100
using namespace std;

bool Check(int arr[], int length, int frame, int matrix[][MAX], int index) 
{
    for (int i = 0; i < frame; i++)
    {
    	if (arr[i] == matrix[i][index]) return true;
    }
    return false;
}

void InputSequence(int sequence[], int &length)
{
    for (int i = 0; i < length; i++)
    {
        cin >> sequence[i];
    }
}

void DisplayArray(char array[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}
void CreateMatrix(int matrix[][MAX], int &length, int frame) 
{
    
    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < length; j++)
        {
            matrix[i][j] = '\0';
        }
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

void FIFO(int matrix[][MAX], int length, int frame, int sequence[], char asterisk[])
{
    int i = 0, j = 0, count = 0;
    for (i = 0; i < frame; i++) 
    {
        for (j = i; j < frame; j++) 
        {
            matrix[i][j] = sequence[i]; 
        }
        count++;
        asterisk[i] = '*';
    }
    i = 0, j = frame;
    int current = 0;
	int index = 0;
	while (j < length)
    {
		while (i < frame) 
		{
			index = j;
			if (Check(sequence, length, frame, matrix, --index) == true)
			{
				i++;
			}
		
			matrix[current][j++] = sequence[j];
			current++;
			count++;
			asterisk[j] = '*';
			matrix[i][j] = matrix[i][--j];
			
		}
		j++;
    }
    DisplayMatrix(matrix, length, frame);
    DisplayArray(asterisk, length);
    cout << "\nNumber of Page Fault: " << count;
}

int main() 
{
    int matrix[MAX][MAX], sequence[MAX];
    int length, frame;
	int array[11] = {1, 9, 5, 2, 2, 1, 0, 4, 0, 0, 7};
    
    cout << "-- Page Replacement algorithm --\n";
    cout << "1. Default referenced sequence.\n";
    cout << "2. Manual input sequence.\n";

    int choice;
    cin >> choice;


    switch (choice) 
    {
	 case 1:
	 	break;
	 case 2: 
	 	cout << "-- Page Replacement algorithm --\n";
		cout << "Input sequence: ";
		cin >> length;
		InputSequence(sequence, length);
	 	cout << "Input page frames: ";
	 	cin >> frame;
	 	CreateMatrix(matrix, length, frame);
	 	break;
	 default: 
	 	break;
    }

    cout << "-- Page Replacement algorithm --\n";
    cout << "1. FIFO algorithm.\n";
    cout << "2. OPT algorithm.\n";
    cout << "3. LRU algorithm.\n";
    char asterisk[length];
    for (int i = 0; i < length; i++)
	    asterisk[i] = '\0';

    int choice2;
    cin >> choice2;

    switch (choice2) 
    {
    case 1:
		if (choice == 1) 
    	{
			FIFO(matrix, length, frame, array, asterisk);
		}
		else 
			FIFO(matrix, length, frame, sequence, asterisk);
			
	break;
    default: 
    	break; 
    }
    return 0;
}
