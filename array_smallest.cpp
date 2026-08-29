#include <iostream>
#include <climits>
using namespace std;

int main()
{    int arr[7] = {89,85,98,34,57,10,-45};
     int arr_size =  7;
     int smallest = INT_MAX;
     int largest = INT_MIN;
     int smallidx = -1;
      int largeidx = -1;
     
     for ( int i=0; i<arr_size; i++){
         if (arr[i]<smallest)
         {
            smallest = arr[i];
            smallidx  = i;
        } if (arr[i]> largest){ 
            largest = arr[i];
             largeidx = i;
        } 
            
         

     }
     cout << "smallest is "<<smallest << endl;
     cout << " index ="<< smallidx << endl;
     cout << "largest is "<<largest << endl;
     cout << " index ="<< largeidx << endl;
    return 0;
}