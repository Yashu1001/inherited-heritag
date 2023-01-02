#include<iostream>

using namespace std;

class animal{
	
	
		
	public:
		
		
		
			char name[100];
			int age;
	
		
		void setter(){
			cout<<"ENTER ANIMAL NAME= "<<endl;
			cin>>name;
			cout<<"ENTER ANIMAL AGE= "<<endl;
			cin>>age;	
			
		}	
};
class Zebra:public animal{
	public:
		void fun1(){
			
			cout<<"NAME= "<<name<<endl;
			cout<<"AGE= "<<age<<endl;
			
		}	
};
class Dolphin:public animal{
	public:
		void fun2(){
		
			cout<<"NAME= "<<name<<endl;
			cout<<"AGE= "<<age<<endl;
			
		}	
};

main(){
	
  Zebra obj1;
  Dolphin obj2;
   
  obj1.setter();
  obj1.fun1();
 
  cout<<endl;
  
  obj2.setter();
  obj2.fun2();
  
 
}









