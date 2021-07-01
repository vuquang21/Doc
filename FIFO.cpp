#include<iostream>
using namespace std;

bool Check(int *arr, int length, int number) 
{
    for (int i = 0; i < length; i++) 
    {
        if (arr[i] == number) return true;
    }
    return false;
}

void Input(int **a, int &length, int frame) 
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
            a[i][j] = NULL;
        }
    }
} 

void FIFO(int **a, int length, int frame, int *arr)
{
    int count = 0;
    for (int i = 0; i < frame; i++) 
    {
        for (int j = 0; j < count; j++) 
        {
            a[i][j] = arr[i];
            count++; 
        }
    }
    int i = 0, j = 0;
    while (j < n)
    {

    }
}

int main() 
{
    int *a, **arr;
    return 0;
}