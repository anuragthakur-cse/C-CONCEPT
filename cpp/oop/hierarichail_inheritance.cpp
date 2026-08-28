
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
class c3: public c1{
    public:
    
    void c()
    
    {
        cout<<"c3 class called:"<<endl;
       
    }
};


int main(){
   
    
    c2 obj1;

    obj1.b();
    obj1.a();
    c3 obj2;
   
    obj2.c();
    obj2.a();

    
return 0;
} 
