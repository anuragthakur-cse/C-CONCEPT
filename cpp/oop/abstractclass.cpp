#include<iostream>
using namespace std;

class one{
    public:
    int a=2;
    int b=7;
    virtual void show()=0;
};

class two:public one{
public:
void show(){
    cout<<"sum:"<<a+b;
}

};
int main(){
    two obj;
    obj.show();
    return 0;
}
