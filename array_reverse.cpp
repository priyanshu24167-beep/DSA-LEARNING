 #include <iostream>
 using namespace std;

 int main () {
     int arr[] = {4 , 5 ,6 ,7,8, 9, 10};
     int start = 0;
     int end = 6;

      while (start < end ) {

        swap (arr[start] , arr[end]);
         start ++;
         end -- ;
       
     } 
     
     for (int i=0;i<7;i++){
     cout << arr[i]<< ' ';
     }
    return 0 ;
 }