#include<iostream>
using namespace std;

void NhapMatran(int **ptr, int &n)
{
    for (int i = 0; i < n; i++) 
    {
        ptr = new int*[n];
        for (int j = 0; j < n; j++)
        {
            ptr[i] = new int[n];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> ptr[i][j];
        }
    }
}

bool MatranTamGiacTren(int **ptr, int n)
{
    for (int i = 1; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (ptr[i][j] != 0) return false;
        }
    }
    return true;
}

bool MatranTamGiacDuoi(int **ptr, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 1; j < j; j++) 
        {
            if (ptr[i][j] != 0) return false;
        }
    }
    return true;
}

bool MaTranDuongCheo(int **ptr, int n) 
{
    for (int j = 0; j < n; j++) 
    {
        for (int i = 1; i < j; i++) 
        {
            if (ptr[i][j] != 0) return false;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 1; j < j; j++) 
        {
            if (ptr[i][j] != 0) return false;
        }
    }
    return true;
}
int main() 
{
    int n;
    cin >> n;
    int **ptr;
    NhapMatran(ptr, n);
    if (MatranTamGiacTren(ptr, n) == true) cout << "Ma tran tam giac tren.";
    
}