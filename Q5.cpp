#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}