#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 45, 67, 85, 43, 3};
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            tmax = smax;
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            tmax = smax;
            smax = arr[i];
        }
        else if (arr[i] > tmax && arr[i] != max && arr[i] != smax)
        {
            tmax = arr[i];
        }
    }

    cout << "First largest element is " << max << endl
         << "Second largest is " << smax << endl
         << "Third largest is " << tmax << endl;

    return 0;
}
