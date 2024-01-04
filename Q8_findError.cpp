#include <iostream>
using namespace std;

void avg(int arr[], int size){
    for(int i=0;i<size ;i++){
        if(arr[i]==size){
            break;
        }
    }
}
int main()
{

    int size=5;
    int arr[] = {1, 2, 3, 4, 5};

    avg(arr, size);
}