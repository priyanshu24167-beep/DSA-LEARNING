#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){      

    //  Brute force approach
    vector<int>heights = { 1,8,6,2,5,4,8 ,3,7};
    int n = heights.size();
   
    int maxWater = 0;

    for(int i = 0 ; i < n ; i++) 
    {
           for(int j = i+1; j < n ; j++)
           {
             
           int w = j-i;
           int  ht = min (heights[i],heights[j]);
            int area = w * ht ;
            maxWater = max(maxWater , area);

           }

    }

     cout << "Container_with_ maxWater : "<< (maxWater)<< endl;

    return 0;
}