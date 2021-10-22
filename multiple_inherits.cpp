#include<iostream>
using namespace std;
  
class A
{
    protected:
  int x;
public:
    A() { std::cout << "DEFAULT A " << x << std::endl ;}
    A(int i) { std::cout << "PARAMETRIsED \n"; x = i; }
//   void Aa(int i) { x = i; }
  void print() { cout << x; }
};
  
class B: virtual public A
{
public:
  B():A(10) { std::cout << "DEFAULT B " << x << std::endl; }
};
  
class C:  virtual public A 
{
public:
  C():A(10) { std::cout << "DEFAULT C " << x << std::endl; }
};
  
class D: public B, public C {
    public:
    D():A(15) {};
};
  
int main()
{
    D d;
    d.print();
    return 0;
}
