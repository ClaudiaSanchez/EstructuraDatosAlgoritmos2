#include <algorithm>
#include <iostream>
using namespace std;

void print_array(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {4,2,7,9,3,5,1};

    cout<<"arr:"<<arr<<endl;
    cout<<"arr[0]:"<<arr[0]<<" "<<&arr[0]<<endl;
    cout<<"arr+1:"<<arr+1<<endl;
    cout<<"arr[1]:"<<arr[1]<<" "<<&arr[1]<<endl;
    cout<<"arr+2:"<<arr+2<<endl;
    cout<<"arr[2]:"<<arr[2]<<" "<<&arr[2]<<endl;

    print_array(arr,7);

    std::sort(arr, arr+7);

    print_array(arr,7);
}
