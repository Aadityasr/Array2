#include<iostream>
using namespace std;



int main(){

int size=9;
int arr[]={2,3,4,5,6,57,4,3,2};


int i=0;
int j=size-1;

while(i<=j){
    if(arr[i]==arr[j]){
        i++;
        j--;
    }
    else{
        cout<<"Given array is not the palindrome:";
        break;
    }
}










}