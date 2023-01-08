#include <iostream>

// Time Complexity :  O(n)
int linearSearch(int arr[], int n,int x){
       for(int i=0;i<n;i++){
           if(arr[i]==x){
               return i;
           }
       }
       return -1;
}


// Time Complexity : O(n)
int insertElement(int arr[], int n ,int x , int pos, int cap){
    if(n==cap){
        return -1;
    }
    int idx =pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;

    //Print Array 
    for(int j=0;j<n;j++){
        std::cout << arr[j];
    }
    return 1;
} 


// Time Complexity : O(n)
int deleteElement(int arr[], int n , int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return -1;
    }
    
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    
    arr[n-1]=0;
    
    // print arr
    for(int k=0;k<n;k++){
        std::cout << arr[k];
    }
    
    return 0;
    
}

int main() {
 int arr[] = {1,2,3,4,5,6,7,8,9};
//  std::cout << linearSearch(arr,9,5);
//  insertElement(arr,9,22,2,12);
//  deleteElement(arr,9,2);
}