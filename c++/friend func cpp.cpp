#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

    friend void swap(complex &o1);
   
public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printData(void)
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

void swap(complex &o1)
{
  o1.a = o1.a + o1.b;
  o1.b = o1.a - o1.b;
  o1.a = o1.a - o1.b;
}


int main()
{
    complex c1, c2, c3;
    c1.setData(3, 4);
    swap(c1);
    c1.printData();

    c2.setData(2, 3);
    swap(c2);
    c2.printData();

    c3.setDataSum(c1, c2);
    c3.printData();

    return 0;
}
    