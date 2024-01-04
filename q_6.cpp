#include <iostream>
using namespace std;

int main()
{

    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth element of the array:", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size , i!=j; j++)
        {
            // if (i == j)
            //     continue;
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i] << "It is a uniqe element:";
        }
    }
}