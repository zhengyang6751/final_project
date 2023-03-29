#include <iostream>
using namespace std;
int BinarySearch(int arr[], int num, int beg, int end);

int main() {

    int arr[100], num, i, n, beg, end;

    cout <<"Enter the size of an array (Max 100) \n";
    cin >> n;

    cout <<"Enter the sorted values \n";

    for(i=0; i<n; i++) {

        cin >> arr[i];
    }

    cout <<"Enter a value to be search \n";
    cin >> num;

    beg = 0;
    end = n-1;

    BinarySearch (arr, num, beg, end);

    return 0;
}
int BinarySearch(int arr[], int num, int left, int right)
    {
    int mid;
    
    if (left > right){
    
        cout << "Number is not found";
        return 0;
    
    } 
    else {
    
    mid = (left + right) / 2;
    
    if(arr[mid] == num){
    
        cout << "Number is found at " << mid << " index \n";
        return 0;
    
    } else if (num > arr[mid]) {
    
        BinarySearch (arr, num, mid+1, right);
    
    } else if (num < arr[mid]) {
    
        BinarySearch (arr, num, left , mid-1);
    }
    }
    
    }