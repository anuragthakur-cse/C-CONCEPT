#include<iostream>
using namespace std;

class demo{
    public:
    ~demo(){
        cout<<"object created"<<endl;
    }

    demo(){
        cout<<"object destroyed"<<endl;
    }
};

int main()

{
    demo d1;
    return 0;
}
