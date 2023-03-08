#include<iostream>
using namespace std;
class student{		
	int semester;
	string name;
	float gpa;
public:
	student(float gpa, int semester)
	{
		this->gpa;
		this->semester=semester;
	}
	student(string name,int semester,float gpa)
	{
			this->semester=semester;
	      	this->name=name;
           this->gpa=gpa;		
		}
		student(student &n)
		{
			name=n.name;
		    gpa=n.gpa;
		    semester=n.semester;
		}
	
		void display()
		{
			cout<<"GPA IS  "<<gpa<<endl;
			cout<<"SEMESTER IS "<<semester<<endl;
		}
		void displays()
		{
			cout<<"THE NAME IS "<<name<<endl;
			cout<<"THE SEMESTER IS "<<semester<<endl;
			cout<<"THE GPA  IS "<<gpa<<endl;
			
		    
		}
		
		~student(){
	    	cout<<"Student Destructor is Running"<<endl;	
		}
};
		
int main()
{
	cout<<"The Detail OF First Student Is: ";
	cout<<"\n";
	student s1(2.5,2);
	s1.display();
	cout<<"\n";
	cout<<"The Detail OF Second Student Is: ";
	cout<<"\n";
    student s2("RAZA",2,3.2);
	s2.displays();
	
}
