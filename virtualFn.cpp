#include<iostream>
using namespace std;
float DOLtoRUP=79.42,EURtoRUP=80.54,PNDtoRUP=95.12;

class rs{
public:float rupees;
	virtual void conv()=0;
	void disp(){
		cout<<"equivalent to: "<<rupees<<" inr\n";
		}
	};
	
class dollar:public rs{			//base class rs
	float dollar;
public:void conv(){
		cout<<"\nenter currency in dollar:";
		cin>>dollar;
		rupees=DOLtoRUP*dollar;
		cout<<""<<dollar<<" in dollar ";
		disp();
		}
	};
	
class euro:public rs{			//base class rs
	float euro;
public:void conv(){
		cout<<"\nenter currency in euro:";
		cin>>euro;
		rupees=EURtoRUP*euro;
		cout<<""<<euro<<" in euro ";
		disp();
		}
	};
	
class pound:public rs{			//base class rs
	float pound;
public:void conv(){
		cout<<"\nenter currency in pound:";
		cin>>pound;
		rupees=PNDtoRUP*pound;
		cout<<""<<pound<<" in pound ";
		disp();
		}
	};
	

int main(){
	int c;
	dollar d;
	euro e;
	pound p;
	cout<<"\t\t\t currency conversion \n";
	while(1){
		cout<<"1.dollar to rupee \t2.euro to rupee \t3.pound to rupee \t4.exit:";
		cin>>c;
		switch(c){
			case 1:d.conv();
				break;
			case 2:e.conv();
 				break;
 			case 3:p.conv();
 				break;
 				
 			default:return 0;
 			}
 		}
 		return 0;
 	}


