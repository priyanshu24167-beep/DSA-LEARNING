#include <iostream>
#include <vector>
using namespace std;

int main() 
{  
//    vector <int> vec = {34,45,566,78,78};
//     cout<< vec[4] << endl;
//  for each loop
//  vector <int> vec(7,3);
vector <int> vec;
 vec.push_back(67);
 vec.push_back(56);
 vec.push_back(78);
 vec.push_back(98);
 vec.pop_back();
 cout << "vector at 1 = " << vec.at(1)<<endl;
 cout<< "Vector ki size = "<<vec.size()<<endl;
 cout << "VectorFront = "<<vec.front()<<endl;
cout << "vector ki back"<< vec.back()<< endl;

  for (int i : vec){
    cout<< i << endl;
  }
    return 0 ;

}