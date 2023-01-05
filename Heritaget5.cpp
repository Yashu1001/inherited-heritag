#include<iostream>
using namespace std;


class A{
	public:
		char id[20],name[50],role[10],salary[50],experience[100];
		char comp_name[100],address[100],email[20],contact[20];
		
		void setter1() {
			cout<<"Enter your id :";
			cin>>id;
			cout<<"Enter your Name :";
			cin>>name;
			cout<<"Enter your Role num :";
			cin>>role;
			cout<<"Enter your salary :";
			cin>>salary;
			cout<<"Enter your Experience :";
			cin>>experience;
			cout<<"Enter your comp_name :";
	 		cin>>comp_name;
			cout<<"Enter your address : ";
			cin>>address;
			cout<<"Enter  your Email :";
			cin>>email;
			cout<<"Enter your contact:";
			cin>>contact;
		}
};
class B : public A {
	public:
		void getter1() {
			cout<<endl;
			cout<<"id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"role="<<role<<endl;
			cout<<"salary="<<salary<<endl;
		 	cout<<"experience="<<experience<<endl;
	 		cout<<"comp_name="<<comp_name<<endl;
			cout<<"address="<<address<<endl;
			cout<<"Email="<<email<<endl;
			cout<<"contact="<<contact<<endl;
		}
};
main() {
	
	B b;
	b.setter1();
	b.getter1();
}

