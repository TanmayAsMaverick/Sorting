#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min= i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min= j;
            }
        }
        int temp= arr[min];
        arr[min]= arr[i];
        arr[i]= temp;
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements be inserted into the array: ";
    cin>> n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cout<<"Enter the number at position "<<i+1<<": ";
        cin>> arr[i];
    }
    selectionSort(arr, n);
    cout<<"The Sorted Array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cout<< arr[i]<<" ";
    }
}