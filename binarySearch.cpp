#include <iostream>
#include <vector>

using namespace std;

int binarySer(vector<int>arr , int tar ){
 int st = 0 ;
 int end = arr.size() - 1;
 while (st <= end)
 {
    int mid = st + (end - st)/2;
    if(tar > arr[mid]){
        st = mid+1;
    }
    else if(tar < arr[mid]){
        end = mid - 1 ;
    }
    else {
         return mid ;
    }
   
 } return -1 ;
 

}


int main (){
  vector<int> arr1 = {23,45,46,55,67,88,98};
   int tar1 = 67 ;
  vector<int> arr2 = {23,45,46,55,67,88,98,99};
   int tar2 = 45 ;
  vector<int> arr3 = {23,45,46,55,67,88,98,99};
   int tar3 = 450 ;


   cout << "The Target 1 value found at Index : " << binarySer(arr1 , tar1 ) << endl;
   cout << "The Target 2 value found at Index : " << binarySer(arr2 , tar2 ) << endl;
   cout << "The Target 3 value found at Index : " << binarySer(arr3, tar3 ) << " Which Means Tar Not Found "<< endl;

    return 0;
}