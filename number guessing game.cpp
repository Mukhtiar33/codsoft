#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	int guess=0;
	int choice;
	int minnumber=1;
	int maxnumber=100;
	srand(time(0));
	int randomnumber=rand()%(maxnumber-minnumber+1)+minnumber;
	cout<<"Welcome to the number guessing game"<<endl;
	cout<<"Choose the difficulty level"<<endl;
	cout<<"1.Easy"<<endl;
	cout<<"2.Medium"<<endl;
	cout<<"3.Difficult"<<endl;
	cin>>choice;
	switch(choice){
		case 1:cout<<"You are in the Easy level"<<endl;
				maxnumber=20;
				randomnumber=rand()%(maxnumber-minnumber+1)+minnumber;
				break;
		case 2:cout<<"You are in Medium level"<<endl;
				maxnumber=50;
				randomnumber=rand()%(maxnumber-minnumber+1)+minnumber;
				break;
		case 3:cout<<"You are in difficult level"<<endl;
				maxnumber=100;
				randomnumber=rand()%(maxnumber-minnumber+1)+minnumber;
				break;
		default:
			cout<<"Invalid level";
	}
	cout<<"The computer has selected a random number"<<minnumber<<"-"<<maxnumber<<endl;
	getch();
	cout<<"Guess the line"<<endl;
	getch();
	if(choice==1){
		cout<<"You have only three attempts"<<endl;
		for(int i=0;i<3;i++){
			cin>>guess;
			if(guess>randomnumber)
				cout<<"The number is lower"<<endl;
			if(guess<randomnumber)
				cout<<"The number is higher"<<endl;
			if(guess==randomnumber){
				cout<<"you have guessed a correct number"<<endl;
				break;}}
			cout<<"The number is\t"<<randomnumber;	
					}
	if(choice==2){
		cout<<"You have only five attempts"<<endl;
		for(int i=0;i<5;i++){
			cin>>guess;
			if(guess>randomnumber)
				cout<<"The number is lower"<<endl;
			if(guess<randomnumber)
				cout<<"The number is higher"<<endl;
			if(guess==randomnumber){
				cout<<"you have guessed a correct number"<<endl;
				break;}}
			cout<<"The number is\t"<<randomnumber;	
					}
	if(choice==3){
		cout<<"You have only seven attempts"<<endl;
		for(int i=0;i<7;i++){
			cin>>guess;
			if(guess>randomnumber)
				cout<<"The number is lower"<<endl;
			if(guess<randomnumber)
				cout<<"The number is higher"<<endl;
			if(guess==randomnumber){
				cout<<"you have guessed a correct number"<<endl;
				break;}}
			cout<<"The number is\t"<<randomnumber;	
					}
}
