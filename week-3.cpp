#include<iostream>
using namespace std;

 class Pair {
 public:
   int *pa,*pb;
   Pair(int a, int b){
   pa = new int(a);
   pb = new int(b);
   }

  Pair(const Pair &other){
   pa = new int;
   pb = new int;
  *pa = *(other.pa);
  *pb = *(other.pb);
  }

  ~Pair(){
    delete pa;
    delete pb;
  }
  };

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
cout<<endl;
 cout<<endl;
cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << endl;
  return 0;
}
