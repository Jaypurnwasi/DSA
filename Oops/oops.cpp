
#include <iostream>
using namespace std;

class iphone{
    int name;
    int price;
    string version;
    
    public:
    static  void fun(){
        cout<<" static fn called margin = "<<margin<<endl;
    }
    static int margin;
    iphone(int name,int price,string version){
        
        this->name = name;
        this->price = price;
        this->version = version;
    }
    
    iphone( iphone &obj){
        
        cout<<"cpy constructor called "<<endl;
        this->name = obj.name;
        this->price = obj.price;
        this->version = obj.version;
    }
    
    
    
    int get_name(){
        
        return name;
    }
    
    int get_price(){
        
        return price;
    }
    
    string get_version(){
        
        return version;
    }
    void print(){
        cout<<" price "<<price<<endl;
        
        cout<<" version "<<version<<endl;
        cout<<" name "<<name<<endl<<endl;;
    }
    
    void set_version(string version){
        this->version = version;
    }
};

int iphone:: margin = 17;
int main()
{
    iphone *p1 = new iphone(12,50000,"ios 14");
    
    
    
    iphone p2(13,80000,"ios 17");
    
    

    cout<<" sizeof(p1) "<<sizeof(p1)<<" sizeof(*p1) " <<sizeof(*p1)<<" sizeof(p12) "<<sizeof(p2)<<endl;
    
    iphone p3(p2);
    p2.set_version(" ios 20");
    p1->print();
    p2.print();
    p3.print();
    
    cout<<"margin = "<<iphone::margin<<endl;
    cout<<"margin p1 = "<<p1->margin<<endl;
    cout<<"margin p2  = "<<p2.margin<<endl;
    
    iphone::fun();
    p2.fun();

    
    
    
    
    
    

    return 0;
}