#include<iostream>
#include<vector>
// #include <algorithm>
using namespace std;

int main (){
     vector<int>prices = {7,4,5,3,6,4,1,2};
    int maxProfit = 0;
    int bestBuy = prices[0];
    int n = prices.size();
    for (int i=0; i < n; i++){
        if (prices[i]>bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
          bestBuy = min (bestBuy,prices[i]);
    }
   cout << maxProfit << endl;

    return 0;
}