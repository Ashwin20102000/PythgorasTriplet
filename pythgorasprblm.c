// Pythagorean Triplet in an array
// Last Updated: 03-02-2020
// Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
// Example:

// Input: arr[] = {3, 1, 4, 6, 5}
// Output: True
// There is a Pythagorean triplet (3, 4, 5).

// Input: arr[] = {10, 4, 6, 12, 5}
// Output: False
// There is no Pythagorean triplet.

#include <stdio.h>
void pythArray(int Arr[],int N){
  int check;
  int K,itr=N;
  for(int i=0;i<N;i++){
    K=Arr[itr-1];
    for(int j=0;j<N-i-1;j++){
      if(Arr[j]+Arr[j+1]==K){
        check = 1;
      }
    }
    itr--;
  }
  printf("%s",(check==1)?"TRUE":"FALSE");
  printf("\n");
}
void swap(int* p1,int* p2){
  int temp = *p1;
  *p1 =*p2;
  *p2=temp;
}
void sorter(int arr1[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr1[j]*arr1[j]>arr1[j+1]*arr1[j+1]){
        swap(&arr1[j],&arr1[j+1]);
      }
    }
  }
}
void printingArray(int Arr1[],int N){
  for(int i=0;i<N;i++){
    printf("%d ",Arr1[i]);
  }
   printf("\n");
  sorter(Arr1,N);
  
}
int main() {
  int arr[]={10, 4, 6, 12, 5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int arr1[n];
  for(int i=0;i<n;i++){
    arr1[i]=arr[i];
  }
  printingArray(arr1,n);
  printf("SORT\n");
  printingArray(arr1,n);
  pythArray(arr1,n);
  
  return 0;
}
