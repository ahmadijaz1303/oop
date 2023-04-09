#include<iostream>
using namespace std;
class Elevator{
	private:
		string company;
		int maxload;
		string color;
		string location;
		int model;
		int Id;
		public:
		Elevator(){
			this->company = " ";
			this->maxload = 0;
			this->color =" "; 
			this->location = " ";
			this->model=0;
			this->Id=0;
			cout<<"null constructor is called:"<<endl;
		}	
    Elevator(string company,int maxload,string color,string location,int model,
		int Id){
			this->company = company;
			this->maxload = maxload;
			this->color = color;
			this->location = location;
			this->model = model;
			this->Id = Id;
			cout<<"parametric constructor is called:"<<endl;
		}	
		~Elevator(){
			cout<<"destructor is called:"<<endl;
		}
		void getcompany(string company){
			this->company = company;
		}			
		string setcompany(){
			return company;
		}
		void getmaxload(int maxload){
			this->maxload = maxload;
		}			
		int setmaxload(){
			return maxload;
		}
			void getcolor(string color){
			this->color = color;
		}			
		string setcolor(){
			return color;
		}
			void getlocation(string location){
			this->location = location;
		}			
		string setlocation(){
			return location;
		}
		
			void getmodel(int model){
			this->model = model;
		}			
		int setmodel(){
			return model;
		}	
		void getId(int Id){
			this->Id = Id;
		}			
		int setId(){
			return Id;
		}
		void display(){
			cout<<"company:"<<company<<endl;
			cout<<"maxload:"<<maxload<<endl;
			cout<<"color:"<<color<<endl;
			cout<<" location:"<<location<<endl;
			cout<<"model:"<<model<<endl;
			cout<<"Id:"<<Id<<endl;
		}
	};
		int main(){
	string company;
		int maxload;
		string color;
		string location;
		int model;
		int Id;
		cout<<"company:"<<endl;
		cin>>company;
		cout<<"maxload:"<<endl;
		cin>>maxload;
		cout<<"color:"<<endl;
		cin>>color;
	    cout<<"location:"<<endl;
		cin>>location;
		cout<<"model:"<<endl;
		cin>>model;
		cout<<"Id:"<<endl;
		cin>>Id;
		
		Elevator s1;
		s1.getcompany(company);
		s1.getmaxload(maxload);
		s1.getcolor(color);
		s1.getlocation(location);
		s1.getmodel(model);
		s1.getId(Id);
		return 0;
}
