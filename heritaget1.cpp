#include<iostream>

using namespace std;

class mother{
	public:
	    void fun1(){
	   	
	   	cout<<"come daughter ";	
	   	
	   }	
};

class daughter: public mother{
	 public:	
	    void fun2(){
	   	
	   	cout<<"yes mumma ";	
	   	
	   }		
};

main(){
	
	daughter obj;
	
	obj.fun2();
		
}




