#include<iostream>
using namespace std;
class A{
	public:
		int semester;
		void sem(){
			cout<<"Enter your semester:";
			cin>>semester;
		}
	private:
		int sapid;
		void id(){
		cout<<"Enter your Sap ID:";
		cin>>sapid;
		}
	protected:
		float cgpa;
		void g(){
			cout<<"Enter your cgpa:";
			cin>>cgpa;
		}
};
class B:public A{
	private:
		int semester;
		void sem(){
			cout<<"Enter your semester:";
			cin>>semester;
		}
	public:
		int sapid;
		void id(){
		cout<<"Enter your Sap ID:";
		cin>>sapid;
		}
	protected:
		float cgpa;
		void g(){
			cout<<"Enter your cgpa:";
			cin>>cgpa;
		}
};
int main(){
	A a1;
	a1.sem(); 
	B b1;
	b1.id();
}
