#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

char east[4] = {}; 
char west[4] = {}; 
char F; 

char boat[1] = {'F'};

bool gameOverGood = false; 
bool gameOverBad = false; 

bool ForbidenStateEast(){ 
	if(east[0] == 'G' && east[2] == 'C'){
		system("cls");
		cout << "************************************************************************************************************************" << endl << endl;
		cout<< "\tThe cabbage was eaten by the goat!" << endl;	
		cout << endl << endl;
		cout << "************************************************************************************************************************ "<< endl;
		return true;
	}
	else if(east[0] == 'G' && east[1] == 'W'){
		system("cls");
		cout << "************************************************************************************************************************" << endl << endl;
		cout<< "\tThe goat was eaten by the wolf!" << endl;
		cout << endl << endl;
		cout << "************************************************************************************************************************ "<< endl;
		return true;
	}
	else if (east[0] == 0 && east[1] == 0 && east[2] == 0 ){
		return false;
	}
	else{
		return false;
	}
}

bool ForbidenStateWest(){ 
	if(west[0] == 'G' && west[2] == 'C'){
		system("cls");
		cout << "************************************************************************************************************************" << endl << endl;
		cout<< "\tThe cabbage was eaten by the goat!" << endl;		
		cout << endl << endl;
		cout << "************************************************************************************************************************ "<< endl;
		return true;
	}
	else if(west[0] == 'G' && west[1] == 'W'){
		system("cls");
		cout << "************************************************************************************************************************" << endl << endl;
		cout<< "\tThe goat was eaten by the wolf!" << endl;
		cout << endl << endl;
		cout << "************************************************************************************************************************ "<< endl;
		return true;
	}
	else{
		return false;
	}
}

void DisplayStateEast(int x,int y){
    system("cls");
	cout << "************************************************************************************************************************" << endl << endl;
	
	if(east[0]!= 0 && east[1]!= 0 && east[2]!= 0 ){
		cout << "\t" << east[0] << " " << east[1] << " " << east[2];
	}
	else if(east[0]!= 0 && east[1]!=0){
		cout << "\t" << east[0] << " " << east[1];
	}
	else if(east[0] != 0 && east[2]!=0){
		cout << "\t" << east[0] << " " << east[2];
	}
	else if (east[0]!= 0){
		cout << "\t" << east[0];
	}
	else if(east[1]!=0 && east[2]!=0){
		cout << "\t" << east[1] << " " << east[2];
	}
	else if(east[1]!=0){
		cout << "\t" << east[1];
	}
	else if(east[2]!=0){
		cout << "\t" << east[2];
	}
	else if(east[0]== 0 && east[1]== 0 && east[2]== 0 ){
		cout << "\t";
	}
		
	cout << "|";
	for	(int i=0; i < x ; i++){
		cout <<  " - ";
	}
	cout << "(";
	cout << boat[0];
	if(boat[1]!=0){
		cout << " " << boat[1];
	}
	
	cout << ")";
	
	for(int i =0; i < y ; i++){
		cout <<  " - ";
	}
	
	cout << "|";
			
	if(west[0]!= 0 && west[1]!= 0 && west[2]!= 0 ){
		cout << west[0] << " " << west[1] << " " << west[2];
	}
	else if(west[0]!= 0 && west[1]!=0){
		cout << west[0] << " " << west[1];
	}
	else if(west[0] != 0 && west[2]!=0){
		cout << west[0] << " " << west[2];
	}
	else if (west[0]!= 0){
		cout << west[0];
	}
	else if(west[1]!=0 && west[2]!=0){
		cout << west[1] << " " << west[2];
	}
	else if(west[1]!=0){
		cout << west[1];
	}
	else if(west[2]!=0){
		cout << west[2]<< endl;
	}
	
	cout << endl << endl<< endl;

	cout << "************************************************************************************************************************ "<< endl;
}

void DisplayStateWest(int x,int y){
	system("cls");
	cout << "************************************************************************************************************************" << endl  << endl;
	
	if(east[0]!= 0 && east[1]!= 0 && east[2]!= 0 ){
		cout << "\t" << east[0] << " " << east[1] << " " << east[2];
	}
	else if(east[0]!= 0 && east[1]!=0){
		cout << "\t" << east[0] << " " << east[1];
	}
	else if(east[0] != 0 && east[2]!=0){
		cout << "\t" << east[0] << " " << east[2];
	}
	else if (east[0]!= 0){
		cout << "\t" << east[0];
	}
	else if(east[1]!=0 && east[2]!=0){
		cout << "\t" << east[1] << " " << east[2];
	}
	else if(east[1]!=0){
		cout << "\t" << east[1];
	}
	else if(east[2]!=0){
		cout << "\t" << east[2];
	}
	else if(east[0]== 0 && east[1]== 0 && east[2]== 0 ){
		cout << "\t";
	}
		
	cout << "|";
	for(int i=0; i < x; i++){
		cout<<" - ";
	}
	cout<< "(";
	cout << boat[0];
	if(boat[1]!=0){
		cout << " " << boat[1];
	}
	
	cout << ")";
			
	for(int i=0; i < y; i++){
		cout<<" - ";
	}
	cout<<"|";

	if(west[0]!= 0 && west[1]!= 0 && west[2]!= 0 ){
		cout << west[0] << " " << west[1] << " " << west[2];
	}
	else if(west[0]!= 0 && west[1]!=0){
		cout << west[0] << " " << west[1];
	}
	else if(west[0] != 0 && west[2]!=0){
		cout << west[0] << " " << west[2];
	}
	else if (west[0]!= 0){
		cout << west[0];
	}
	else if(west[1]!=0 && west[2]!=0){
		cout << west[1] << " " << west[2];
	}
	else if(west[1]!=0){
		cout << west[1];
	}
	else if(west[2]!=0){
		cout << west[2]<< endl;
	}
	
	cout << endl << endl<< endl;

	cout << "************************************************************************************************************************"<< endl;	
}

void DisplayMovementEastWest(){	
	int n = 0;
	int m = 27;
	while(m>-1){
		DisplayStateWest(n,m);
		n++;
		m--;
		clock_t end_time;
   		end_time = clock() + 2 * CLOCKS_PER_SEC/1000;
   		while (clock() < end_time) {
		}
	}
}

void DisplayMovementWestEast(){
	int n = 27;
	int m = 0;
	while(n>-1){
		DisplayStateEast(n,m);
		n--;
		m++;
		clock_t end_time;
   		end_time = clock() + 2 * CLOCKS_PER_SEC/1000;
   		while (clock() < end_time) {
		}
	}
}

void InitalState(){ 
	east[0] = {'G'};
	east[1] = {'W'};
	east[2] = {'C'};
	west[0] = 0;
	west[1] = 0;
	west[2] = 0;
	F = 'E';  
	boat[1] = 0;
	DisplayStateEast(0,27);	
}

void eastShiping(char passenger){
	if(east[0] == passenger || east[1] == passenger || east[2]==passenger) {
		boat[1] = passenger;
		if(passenger == 'G' ){
			east[0] = 0;
		}
		if(passenger == 'W'){
			east[1] = 0;
		}
		if(passenger == 'C'){
			east[2] = 0;
		}	
		F = 'E';
		DisplayStateEast(0,27);	
	}
}

void eastUnshiping(char passenger){
	if(boat[1] == passenger){
		boat[1] = 0 ;
		if(passenger == 'G' ){
			east[0] = passenger;
		}
		if(passenger == 'W' ){
			east[1] = passenger;
		}
		if(passenger == 'C'){
			east[2] = passenger;
		}
		boat[1] = 0 ;
		F = 'E';
		DisplayStateEast(0,27);				
	}
}

void westShiping(char passenger){
	if(west[0] == passenger || west[1] == passenger || west[2]==passenger) {
		boat[1] = passenger;
		if(passenger == 'G'){
			west[0] = 0;
		}
		if(passenger == 'W') {
			west[1] = 0;
		}
		if(passenger == 'C'){
			west[2] = 0;
		}
		F='W';
		DisplayStateWest(27,0);
	}
}

void westUnshiping(char passenger){
	if(boat[1] == passenger){
		boat[1] = 0;
		if(passenger == 'G' ){
			west[0] = passenger;
		}
		if(passenger == 'W'){
			west[1] = passenger;
		}
		if(passenger == 'C'){
			west[2] = passenger;
		}
		F='W';
		DisplayStateWest(27,0);
	}
}

void GoWest(){
	if ( ForbidenStateWest()){
		int qs = 0;
		cout << "Enter: \t 1 - quit \t 2 - start over" << endl << endl;
		while(qs!= 1 && qs!=2){
			cout << ">>";
			cin>> qs;
			if(qs==1){
				gameOverBad=true;
			}
			if(qs==2){
				InitalState();
			}
		}
	}else{
		F='E';
		DisplayMovementWestEast();
	}
}

void GoEast(){
	if (ForbidenStateEast()){
		int qs = 0;
		cout << "Enter: \t 1 - quit \t 2 - start over" << endl << endl;
		while(qs!= 1 && qs!=2){
			cout << ">>";
			cin>> qs;
			if(qs==1){
				gameOverBad=true;
			}
			if(qs==2){
				InitalState();
			}
		}
	}else{
		F='W';
		DisplayMovementEastWest();	
	}
}

int main() {
	char menu[4];
	cout << "************************************************************************************************************************" << endl;
	cout << "On the east side of the river are goat, wolf, cabbage and the boat with the farmer in it." << endl;
	cout << "The goal of the farmer is to ship all passengers on the west side with the boat, but there are some conditions: " << endl << endl;
	cout << "-> only one 'passenger' can go with the farmer!" << endl;
	cout << "-> if the goat and the wolf are left standing alone on an any-side without the farmer on that side, the wolf will eat the goat!" << endl;
	cout << "-> if the cabbage and the goat are left standing on an any-side without the farmer on that side, the goat will eat the cabbage!" << endl;
	cout << endl;
	cout << "************************************************************************************************************************" << 	endl << endl;
	system("pause");
	InitalState();
	menu[0]={0};
	menu[1]={'A'};
	do{
		cout << endl << endl;
		cout << "Select the action: " << endl;
		cout << "1x - load from the boat \t 2x - unload from the boat \t 3 - the boat travels to the other side " << endl << endl;
		cout << "x e {G, W, C}" << endl << endl;
		cout << ">>";
		cin >> menu;
		if(menu[0] == '1' && (menu[1]=='G' || menu[1]=='W' || menu[1]=='C')){
			char a=menu[1];
			if(boat[1] == 0 && F=='E'){
				eastShiping(a);
			}
			else if(boat[1] == 0 && F == 'W'){
				westShiping(a);
			}
		}
		else if (menu[0] == '2' && (menu[1]=='G' || menu[1]=='W' || menu[1]=='C')){
			char b=menu[1];
			if(boat[1] != 0 && F == 'E' && menu[2]==0){
			 	eastUnshiping(b);
			}
			else if(boat[1] != 0 && F=='W' && menu[2]==0){
				westUnshiping(b);
			}
		}
		else if (menu[0] == '3'){
			if (F=='E'){
				GoEast();
			}
			else if(F=='W'){
				GoWest();
			}
		}
		if (west[0] == 'G' && west[1] == 'W' && west[2] == 'C'){ 
		gameOverGood = true;
		}
		
	}while(gameOverGood==false && gameOverBad==false);
	if(F=='W'){
		DisplayStateWest(27,0);
	}
	else if(F=='E'){
		DisplayStateEast(0,27);
	}
	system("pause");
	system("cls");
	cout << "************************************************************************************************************************" << endl  << endl;
	if (gameOverGood == true){
		cout << "\tThe farmer has shiped all passengeres successfully to the west side!" << endl;
	}
	else if (gameOverBad == true){
		cout << "\tUnfortunately, the farmer has not shiped all passengers to the west side!" << endl;
	}
	cout << "\t\tG A M E   O V E R " << endl;
	cout << endl << endl;
	cout << "************************************************************************************************************************" << endl;
	return 0;
}
