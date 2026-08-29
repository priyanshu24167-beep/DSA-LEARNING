#include <iostream>
#include <climits>
using namespace std ;

int main(){
 int n = 5;
 int arr[] = { 4, 5,6,7,8};
 int Maxsum = INT_MIN;

 for (int st = 0 ; st < n; st++){
    int CurrSum = 0;

    for (int end = st ; end < n; end++){

        CurrSum += arr[end];
        Maxsum = max(CurrSum,Maxsum);

    //     for ( int i = st ; i<= end ; i++){
    //     cout<< arr[i];

    //     }
    //      cout << " ";
    // } 
    //  cout << endl;
    }
 }  


    cout<< Maxsum;

    return 0;
}