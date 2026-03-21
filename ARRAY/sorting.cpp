///SELECTION SORT

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     int arr[6]= {4,7,8,9 ,2,40};
//     for(int i=0 ;i<5;i++)
//     {
//         int index = i;
//         for(int j=i+1;j<6;j++)
//         {
//          if(arr[j]<arr[index])
//          index = j;
//         }
//         swap(arr[i],arr[index]);

//     }
//     for(int i=0;i<6;i++)
//     {
        
//         cout<<arr[i]<< " ";
//     }
// }

//BUBBLE SORT


#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the element in array: ";
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    
    }
for(int i=n-2;i>=0;i--)

{
    bool swapped = 0;
    for(int j=0;j<=i;j++)
    {
        if(arr[j]>arr[j+1]){

            swapped = 1;
            swap(arr[j],arr[j+1]);
        }
    }
       
    if(swapped==0)
    break;
    }


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

