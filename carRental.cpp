#include <iostream>
using namespace std;
int reg[5]={123,234,345,456,567};
string comp[5]={"Suzuki","Honda","Toyota","MG","BMW"};
int rent[5]={2000,2500,3000,3500,5000};
char avail[5]={'y','y','y','y','y'};
int size= sizeof(reg)/sizeof(reg[0]);

void showFun(){
	for(int i=0;i<size; i++){
		if(avail[i]=='y'){
			cout<<"Car "<<comp[i]<<" with Reg "<<reg[i]<<
			" and with Rent "<<rent[i]<<endl;
		}
	}
}

void reserveFun(){
	int regNo,days;
	cout<<"Enter Registration No: ";
	cin>>regNo;
	cout<<"Enter Total Days: ";
	cin>>days;
	 bool found=false;
	for(int i=0;i<size; i++){
		if(regNo==reg[i] && avail[i]=='y'){
			found=true;
			avail[i]='n';
			int bill = rent[i] * days;
			cout<<"Your Rent For "<<comp[i]<<" with Reg"<<
			reg[i]<<" is: "<<bill<<endl;
			
		}
	}
	if(!found){
		cout<<"This car is unavailable"<<endl;
	}
}

void returnFun(){
	cout<<"Enter Registration No: ";
	int regNo;
	cin>>regNo;
	
	bool found=false;
	for(int i=0;i<size;i++ ){
		if(regNo==reg[i]){
			found=true;
			avail[i]='y';
			cout<<"Car is Returned"<<endl;
		}
	}
	if(!found){
		cout<<"Incorrect Registration No!"<<endl;
	}
}

int main(){
	while(true){
		cout<<"Car Rental Management System"<<endl;
		cout<<"----------------------------"<<endl;
		cout<<"1.Show Available Cars"<<endl;
		cout<<"2.Reserve a Car."<<endl;
		cout<<"3.Return A Car."<<endl;
		cout<<"4.Exit."<<endl;
		int choice;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		
		if(choice==1){
			//available cars
			system("cls");
			showFun();
			cout<<" "<<endl;
		}
		else if(choice==2){
			//reserve a car
			system("cls");
			reserveFun();
			cout<<" "<<endl;
		}
		else if(choice==3){
			//return a car
			system("cls");
			returnFun();
			cout<<" "<<endl;
		}
		else if(choice==4){
			system("cls");
			cout<<"Best of Luck!"<<endl;
			cout<<" "<<endl;
			break;
		}
		else {
			system("cls");
			cout<<" Invalid input!"<<endl;
		}
	}
	
}
