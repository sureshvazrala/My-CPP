#include <iostream>

using namespace std;

class Tiger
{
    public: 
    int data1;
    int data2;


    public:
    void setdata()
    { 
        cout<<"enter the Input: "<<endl;
        cin>>data1>>data2;
    }

    Tiger(int x, int y)
    {
        data1 = x;
        data2 = y;
    }

    void getdata()
    {
        cout<<"Output: "<<data1<<" "<<data2<<endl;
    }
};



int class_demo()
{
    Tiger t1(10,20);
    //t1.setdata();
    t1.getdata();
    return 0;
}