#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int esum = 0;
    int osum = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            esum += arr[i];
        }
        else
        {
            osum += arr[i];
        }
    }
    cout << "The difference between even and odd position number is " << esum - osum;
}