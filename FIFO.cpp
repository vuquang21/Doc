#include <iostream>
#define MAX 100
using namespace std;

bool Check(int arr[], int length, int number) 
{
    for (int i = 0; i < length; i++) 
    {
        if (arr[i] == number) return true;
    }
    return false;
}

void InputSequence(int sequence[], int &length)
{
    for (int i = 0; i < length; i++)
    {
        cin >>> sequence[i];
    }
}

void CreateMatrix(int matrix[][MAX], int &length, int frame) 
{
    
    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < length; j++)
        {
            matrix[i][j] = NULL;
        }
    }
} 

void FIFO(int matrix, int length, int frame, int sequence[], char asterick[])
{
    int count = 0;
    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < frame; j++) 
        {
            matrix[i][j] = sequence[i]; 
        }
        count++;
        asterick[i] = '*';
    }
    int i = 0, j = 0;
    int current = 0;
    while (j < length)
    {
		while (i < frame) 
		{
			if (Check(sequence, length, matrix[i][j]) == true)
			{
				i++;
			}
			matrix[current][i] = sequence[j];
			current++;
			count++;
			asterick[j] = '*';
		}
		j++;
    }
}

int main() 
{
    int matrix[MAX][MAX], sequence[MAX];
    int length;
    int frame;
    cout << "-- Page Replacement algorithm --";
    cout << "1. Default referenced sequence.";
    cout << "2. Manual input sequence.";
    int choice;
    cin >> choice;
    int array[11] = {1, 9, 5, 2, 2, 1, 0, 4, 0, 0, 7};
    switch (choice) 
    {
	 case 1:
	 	break;
	 case 2: 
	 	cout << "-- Page Replacement algorithm --";
        cout << "Input sequence: ";
        cin >> length;
	 	cout << "Input page frames: ";
	 	cin >> frame;
	 	
	 	break;
	 default: 
	 	break;
    }
    cout << "-- Page Replacement algorithm --";
    cout << "1. FIFO algorithm.";
    cout << "2. OPT algorithm.";
    cout << "3. LRU algorithm.";
    int choice2;
    cin >> choice2;
    char asterisk[length];
    switch (choice2) 
    {
    case 1:
    	FIFO(matrix, length, frame, sequence, asterisk);
    	break;
    default: 
    	break; 
    }
    return 0;
}
