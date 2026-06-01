
#include<iostream>
using namespace std;

class c1{
    public:
    
    void a()
    
    {
        cout<<"c1 class called:"<<endl;
       
    }
};
class c2: public c1{
    public:
    
    void b()
    
    {
        cout<<"c2 class called:"<<endl;
       
    }
};
class c3: public c2{
    public:
    
    void c()
    
    {
        cout<<"c3 class called:"<<endl;
       
    }
};


int main(){
    c3 obj;
    
    obj.a();
    obj.b();
    obj.c();
    
return 0;
} 