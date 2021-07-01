#include <iostream>
using namespace std;

bool Check(int *arr, int length, int number) 
{
    for (int i = 0; i < length; i++) 
    {
        if (arr[i] == number) return true;
    }
    return false;
}

void Input(int **a, int &length, int frame, int array[]) 
{
    a = new int *[frame];
    for (int i = 0; i < frame; i++) 
    {
        a[i] = new int[length];
    }

    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < length; j++)
        {
            a[i][j] = array[i];
        }
    }
} 

void FIFO(int **a, int length, int frame, int *arr)
{
    int count = 0;
    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < frame; j++) 
        {
            a[i][j] = arr[i]; 
        }
        count++;
        cout << "*" << " ";
    }
    int i = 0, j = 0;
    int current = 0;
    while (j < length)
    {
		while (i < frame) 
		{
			if (Check(arr, length, a[i][j]) == true)
			{
				i++;
			}
			a[current][i] = arr[j];
			current++;
			count++;
			cout << "*" << " ";
		}
		j++;
    }
}

int main() 
{
    int **a, *arr;
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
	 	cout << "Input page frames: ";
	 	cin >> frame;
	 	Input(a, length, frame, array);
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
    switch (choice2) 
    {
    case 1:
    	FIFO(a, length, frame, arr);
    	break;
    default: 
    	break; 
    }
    return 0;
}
