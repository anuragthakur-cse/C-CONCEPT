
#include<iostream>
using namespace std;

class base{
    public:
    
    void sum()
    
    {
        cout<<"base class called:"<<endl;
       
    }
};
class child:public base{
    public:
    
    void add()
    
    {
        cout<<"child class called:"<<endl;
       
    }
};


int main(){
    child obj;
    
obj.add();
    obj.sum();
    
return 0;
}