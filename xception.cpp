#include<iostream>
#include<cstring>
using namespace std;

class negative_number{
public:char start[80];
	int what;
	negative_number(char *s, int e){
		strcpy(start, s);
		what=e;
		}
	};

class divbyzero{
public:char start[80];
	int what;
	divbyzero(char *s,int e){
		strcpy(start,s);
		what=e;
		}
	};

int main(){
	int i,nr,dr;
	double res;
	try{
		cout<<"enter a positive number"<<endl;
		cin>>i;
		if(i<0)
			throw negative_number("non positive entered",i);	
		}
	
	catch(negative_number e){
		cout<<e.start<<": ";
		cout<<e.what<<"\n";
		}
	
	try{
		cout<<"enter numerator:";
		cin>>nr;
		cout<<"enter denominator:";
		cin>>dr;
		if(dr==0)
			throw divbyzero("cannot divide by zero",dr);
		}
	catch(divbyzero e){
		cout<<e.start<<": ";
		cout<<e.what<<"\n";
		}
	if(dr>0){
		res=nr/dr;
		cout<<"result is:"<<res<<endl;
		}
	return 0;
	}







