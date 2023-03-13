#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int sapid;
	string semester;
	float cgpa;
};
   student S1;

void Adddetails()
{	
    system("cls");
	cout<<"Enter Name: "<<endl;
	cin>>S1.name;
	cout<<"Enter Sap ID: "<<endl;
	cin>>S1.sapid;
	cout<<"Enter Semester: "; 
	cin>>S1.semester;     
	cout<<"Enter cgpa: ";  
	cin>>S1.cgpa; 
	fstream studentdetails;
	studentdetails.open("studentdetails.txt",ios :: app);
	if (!studentdetails) {                            
      cout<<" Error while creating the file ";          
    }
    else
	{  
	         
         	 studentdetails<<S1.name;
         	 studentdetails<<"\t "<<S1.sapid;
         	 studentdetails<<"\t "<<S1.semester;
	         studentdetails<<"\t "<<S1.cgpa;
	         studentdetails<<"\n-------------------\n";
	         studentdetails.close(); 
	}
}
void displayingdata ()
{
	cout<<"Details Of Students Are:"<<endl;
	fstream studentdetails;
	studentdetails.open("studentdetails.txt", ios::in );
    string line;
    stringstream ss(line); 
    
    while (getline(studentdetails, line, ' ')) {
    cout <<line<<endl; 
}
    studentdetails.close(); 
}

int main()
{
	int choice;
		do{
	cout<<"STUDENTS DETAIL : "<<endl;
	
	cout<<"1. ADD Student's Detail :"<<endl; 
	cout<<"2. Show Data Of All Students"<<endl;
	cout<<"3. Exit Program "<<endl;
	cout<<"Select an option: "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			system("CLS");
		    Adddetails();	
			break;
		case 2 : 
		   system("CLS");
		   displayingdata();
			break;
		case 3:
			system("cls");
			cout<<"\nThank You ! \n";
			break;
		default:
			cout<<"Enter a valid option";
		}
	}while(choice < 3);

	return 0;
}

