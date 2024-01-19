#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int menu,cont;
	float operand1,operand2,result;
	char operators;
	cout<<"\n\n\n\t\t\t\t------------------------------------------";
	cout<<"\n\n\n\t\t\t\t\tBASIC CALCULATOR (CODSOFT)"<<endl<<endl;
	cout<<"\t\t\t\t\tDeveloped by Mukhtiar Khan"<<endl;
	cout<<"\n\n\t\t\t\t------------------------------------------"<<endl<<endl;
	cout<<"\t\t\t\tEnter (1) to enter numbers ";
	cin>>menu;
	system("cls");
	if(menu==1){
		cout<<"\n\n\n\t\t\t\tEnter number:";
		cin>>operand1;
		cout<<"\n\t\t\t\tEnter the operator:";
		cin>>operators;
		cout<<"\n\t\t\t\tEnter number:";
		cin>>operand2;
		
		switch(operators){
			case '+': result=operand1+operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
					  	break;
			case '-': result=operand1-operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
						break;
			case '*': result=operand1*operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
						break;
			case '/': if(operand2==0){
						cout<<"\n\t\t\t\tMathematical error"<<endl<<endl;
					}else{
						result=operand1/operand2;
						cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					    cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
		   				cin>>cont;
						if(cont==2){
							goto calculator;}
						else if(cont!=2)
							break;
					}
			default:
					cout<<"\n\t\t\t\t Choose the correct operator";
		}
	calculator:
		cout<<"\n\t\t\t\tEnter the operator:";
		cin>>operators;
		cout<<"\n\t\t\t\tEnter number:";
		cin>>operand2;
		switch(operators){
			case '+': result=result+operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
					  	break;
			case '-': result=result-operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
						break;
			case '*': result=result*operand2;
					  cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					  cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
					  cin>>cont;
					  if(cont==2){
						goto calculator;}
					  else if(cont!=2)
						break;
			case '/': if(operand2==0){
						cout<<"\n\t\t\t\tMathematical error"<<endl<<endl;
					}else{
						result=result/operand2;
						cout<<"\n\t\t\t\tResult = "<<result<<endl<<endl;
					    cout<<"\n\n\t\t\t If you want to do more calculation enter (2)";
		   				cin>>cont;
						if(cont==2){
							goto calculator;}
						else if(cont!=2)
							break;
					}
			default:
					cout<<"\n\t\t\t\t Choose the correct operator";
		}
		
	
	}

	
}
