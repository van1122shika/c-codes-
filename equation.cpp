#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    cout<<arr[0];
    for(int i =1;i<n;i++){
        cout<<"+"<<arr[i]<<"x^"<<i;
        cout<<endl;
    }
};
int main(){
    int n1,n2,temp;
    cout<<"enter size of first equation";
    cin>>n1;
    cout<<"enter size of second equation";
    cin>>n2;
    int arr[(n1>n2)?n1:n2]={0};
    int temp_arr1[n1], temp_arr2[n2];
    cout<<"Enter coefficients of terms of first equation in increasing order of exponents:";
    for(int i=0;i<n1;i++){
        cin>>temp;
        arr[i]+=temp;
        temp_arr1[i]=temp;
    }
    cout<<"Enter coefficients of terms of second equation in increasing order of exponents:";
    for(int i=0;i<n2;i++){
        cin>>temp;
        arr[i]+=temp;
        temp_arr2[i]=temp;
    }
    cout<<"Display first equation:";
    printArray(temp_arr1,n1);
    cout<<"Display second eqyuation:";
    printArray(temp_arr2,n2);
    cout<<"Resultant expression is"<<endl;
    printArray(arr,(n1>n2?n1:n2));

    

}
