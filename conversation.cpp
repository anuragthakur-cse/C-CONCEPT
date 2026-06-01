#include<iostream>
using namespace std;

class conversation {
    public:
    string a,b,c;
void fit(){

    cout<<"muskan is online send the message"<<endl;
    cin>>a;
    cout<<"your message: "<<a<<endl;
    cout<<"who are you ?"<<endl;
    cin>>b;
    cout<<"your message: "<<b<<endl;
    
    cout<<"yes why not..."<<endl;
    cin>>c;
    cout<<"your message :"<<c<<endl;
    cout<<"sorry i have a boyfriend."<<endl;
    cout<<"you are blocked..."<<endl;

    

}

};








int main()
{

conversation c1;
c1.fit();

return 0;
}