#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


for(int i=0;i<9;i++){
   
    int k=i+1;

    if(arr[i]<=arr[k]){
        i++;
        k++;
    }
    else{
        cout<<"Array is not sorted!";
        break;
    }
}


}