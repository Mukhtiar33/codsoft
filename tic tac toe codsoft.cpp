#include <iostream>
#include <conio.h>

using namespace std;
char Grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice,row,colum;
char turn='X';
bool draw=false;
bool game=true;

void display_board(){
	cout<<"\tPLAYER-1[X]\tPLAYER-2[O]\n\n";
	cout<<"\t\t     |   |  \n";
	cout<<"\t\t "<<Grid[0][0]<<"   | "<<Grid[0][1]<<" | "<<Grid[0][2]<<" \n";
	cout<<"\t\t_____|___|_____\n";
	cout<<"\t\t     |   |   \n";
	cout<<"\t\t "<<Grid[1][0]<<"   | "<<Grid[1][1]<<" | "<<Grid[1][2]<<" \n";
	cout<<"\t\t_____|___|_____\n";
	cout<<"\t\t     |   |   \n";
	cout<<"\t\t "<<Grid[2][0]<<"   | "<<Grid[2][1]<<" | "<<Grid[2][2]<<" \n";	
}
void player_turn(){
		if(turn=='X'){
		cout<<"\n\tPLAYER-1[X] turn: ";
	}else if(turn=='O'){
		cout<<"\n\tPLAYER-2[O] turn: ";}
	cin>>choice;
	switch(choice){
		case 1:row=0;colum=0;
				break;
		case 2:row=0;colum=1;
				break;
		case 3:row=0;colum=2;
				break;
		case 4:row=1;colum=0;
				break;
		case 5:row=1;colum=1;
				break;
		case 6:row=1;colum=2;
				break;
		case 7:row=2;colum=0;
				break;
		case 8:row=2;colum=1;
				break;
		case 9:row=2;colum=2;
				break;
		default:
			cout<<"INVALID MOVE";
	}
	if(turn=='X'&&Grid[row][colum]!='X'&&Grid[row][colum]!='O'){
		Grid[row][colum]='X';
		turn='O';}
	else if(turn=='O'&&Grid[row][colum]!='X'&&Grid[row][colum]!='O'){
		Grid[row][colum]='O';
		turn='X';
	}
		else{
			cout<<"Cell is already filled: try another!\n\n";
			player_turn();
		}system("cls");
		display_board;
	
}
bool gameover(){
	if(Grid[0][0]==Grid[0][1]&&Grid[0][0]==Grid[0][2])
		return false;
	if(Grid[0][0]==Grid[1][0]&&Grid[0][0]==Grid[2][0])
		return false;
	if(Grid[0][0]==Grid[1][1]&&Grid[0][0]==Grid[2][2])
		return false;
	if(Grid[0][1]==Grid[1][1]&&Grid[0][1]==Grid[2][1])
		return false;
	if(Grid[0][2]==Grid[1][2]&&Grid[0][2]==Grid[2][2])
		return false;
	if(Grid[0][2]==Grid[1][1]&&Grid[0][2]==Grid[2][0])
		return false;
	if(Grid[1][0]==Grid[1][1]&&Grid[1][0]==Grid[1][2])
		return false;
	if(Grid[2][0]==Grid[2][1]&&Grid[2][0]==Grid[2][2])
		return false;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(Grid[i][j]!='X'&&Grid[i][j]!='O')
			return true;}}
	draw=true;
	return false;
}
int main(){
	int menu;
	cout<<"\n\n\n\t\t\t\t------------------------------------------";
	cout<<"\n\n\n\t\t\t\t\tTIC TAC TOE GAME (CODSOFT)"<<endl<<endl;
	cout<<"\t\t\t\t\tDeveloped by Mukhtiar Khan"<<endl;
	cout<<"\n\n\t\t\t\t------------------------------------------"<<endl<<endl;
	cout<<"\t\t\t Enter (1) to start the game: ";
	cin>>menu;
	system("cls");
	if(menu==1){
		while(gameover()){
		display_board();
		player_turn();
		gameover();
	}display_board();
	if(turn=='X'&& draw==false){
		cout<<"player 2 has won";
	}
	else if(turn=='O'&& draw==false){
		cout<<"player 1 has won";
	}else
		cout<<"Game draw";
}else
	cout<<"sorry";}

