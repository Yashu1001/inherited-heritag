#include<iostream>
using namespace std;

class A{
				
     public:
     	
     		int id,salary,experience;
	    	char name[100],address[100],email[100];
		
     	void read(){
     		
     		cout<<"ENTER YOUR ID= "<<endl;
     		cin>>id;
     		cout<<"ENTER YOUR salary= "<<endl;
     		cin>>salary;
     		cout<<"ENTER YOUR experience= "<<endl;
     		cin>>experience;
     		cout<<"ENTER YOUR name= "<<endl;
     		cin>>name;
     		cout<<"ENTER YOUR address= "<<endl;
     		cin>>address;
     		cout<<"ENTER YOUR email= "<<endl;
     		cin>>email;
     	
		 }	
};
class B{
	public:
		
		
};
class C:public A,public B{
	public:
		void print(){
			cout<<"ID= "<<id<<endl;
			cout<<"salary= "<<salary<<endl;
			cout<<"experience= "<<experience<<endl;
			cout<<"name= "<<name<<endl;
			cout<<"address= "<<address<<endl;
			cout<<"email= "<<email<<endl;
		}	
};
main(){
	
	C obj;
	
	obj.read();
	obj.print();
	
	
	
	
}
