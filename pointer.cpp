#include <iostream>

using namespace std;


// PASSING BY REFRENCE BY POINTERS
// void changeA(int *p){
//    *p = 20;

// }

// passing by refrence by alias
void changeA (int &b){
    b =40;
}

int main(){
  int a =10 ;

  changeA(a);

  cout << a << endl;
  cout << &a << endl;




    //  int a = 5;
    //  int *p = &a ;
    //  int **q = &p ;


    //  cout<< *p << endl ;
    //  cout<< **q << endl ;

    //  cout<< p << endl ;
    //  cout<< *q << endl ;



    return 0 ;
}