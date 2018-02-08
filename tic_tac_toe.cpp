#include <iostream>
#include <stdio.h>  
#include <windows.h>
using namespace std;
int turnos(int t){//cambia de turno
	if(t==1){return 0;}
	else if (t==0){return 1;}
}  
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 void banner(){
 	cout<<" _   _        _                _             "<<endl ;
	cout<<"| | (_)      | |              | |            "<<endl;
	cout<<"| |_ _  ___  | |_  __ _  ___  | |_ _____   ____ "<<endl;
   	cout<<"| __| |/ __| | __|/ _` |/ __| | __|  _  | | _  | "<<endl;
    cout<<"| |_| | (__  | |_| (_| | (__  | | | (_) | | ___/"<<endl;
    cout<<"|___|_|\____| |___||__,_||___| |___|_____| |____|"<<endl; 
 }
 int menu(){
	int choice;
	banner();                                                                                        
	cout<<endl<<" Welcome to the best tic tac toe game in euwest.  What do you want to do?\n   1)Want to play \n   2)How does it work?\n   3)credits\n   4)Exit\n";
	cin>>choice;
	while (choice>4||choice<1){
		system("cls");
		banner();
		cout<<"\n Welcome to the best tic tac toe game in euwest. What do you want to do?\n   1)Want to play \n   2)How does it work?\n   3)credits\n   4)Exit\n";
		cout<< "please choose the corect option"<<endl<<"\n 1 2 3 4 not to difficult..."<<endl;
		cin>>choice;
	}
	return choice;
}
 void tablero(){
 	//barras horizontales
    for(int i=2;i<=24;i++){
	 gotoxy(50,i);
	 cout<<"|";	
	 }
	for(int i=2;i<=24;i++){
	 gotoxy(70,i);
	 cout<<"|";	
	 }
	//barras verticales
	for(int i=25;i<=90;i++){
		gotoxy(i,8);
		 cout<<"-";	
	}
	for(int i=25;i<=90;i++){
		gotoxy(i,16);
		 cout<<"-";	
	}
	 //poner el cursor abajo
	 gotoxy(0,26);
	 
	 
 }
 void pintar(int a,int t){
 	int prov=a;
	 switch (prov){
 		//3 primeras casillas
		 case 7:{
		 		gotoxy(40,4);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
	
		 case 8:{gotoxy(60,4);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 case 9:{gotoxy(80,4);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 //3 casillas de en medio
		 case 4:{gotoxy(40,12);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 case 5:{gotoxy(60,12);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 case 6:{gotoxy(80,12);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 //3 casillas de abajo
		 case 1:{gotoxy(40,20);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 case 2:{gotoxy(60,20);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }
		 case 3:{gotoxy(80,20);
 				if (t==1){cout<<"x";}
 				else if (t==0){cout<<"o";}
 				gotoxy(0,26);
			break;
		 }}
 
 }
float w(int pos,int t,int reset){
 	static int	tablero[3][3],r=0;
 	if (reset==1)r=0;
 	if(r==0){
	 for (int i=0;i<=2;i++){
 		for (int j=0;j<=2;j++){
 			
			 tablero[i][j]=2;
		 }
	 }
	 r=1;
 	}
 	switch (pos){
 		case 7:{
 				if (t==1){tablero[0][0]=1;}
 				else if (t==0){tablero[0][0]=0;}
			break;
		 }
		 case 8:{
 				if (t==1){tablero[0][1]=1;}
 				else if (t==0){tablero[0][1]=0;}
			break;
		 }
		 case 9:{gotoxy(80,4);
 				if (t==1){tablero[0][2]=1;}
 				else if (t==0){tablero[0][2]=0;}
			break;
		 }
		 //3 casillas de en medio
		 case 4:{
 				if (t==1){tablero[1][0]=1;}
 				else if (t==0){tablero[1][0]=0;}
			break;
		 }
		 case 5:{
 				if (t==1){tablero[1][1]=1;}
 				else if (t==0){tablero[1][1]=0;}
			break;
		 }
		 case 6:{
 				if (t==1){tablero[1][2]=1;}
 				else if (t==0){tablero[1][2]=0;}
			break;
		 }
		 //3 casillas de abajo
		 case 1:{
 				if (t==1){tablero[2][0]=1;}
 				else if (t==0){tablero[2][0]=0;}
			break;
		 }
		 case 2:{
 				if (t==1){tablero[2][1]=1;}
 				else if (t==0){tablero[2][1]=0;}
			break;
		 }
		 case 3:{
 				if (t==1){tablero[2][2]=1;}
 				else if (t==0){tablero[2][2]=0;}
			break;
		 }
	}gotoxy(0,26);
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<tablero[i][j];
		}
		cout<<endl;
	}
	
		 //comprobamos 3 en raya en columna
		 if(tablero[0][0]==tablero[0][1]&&tablero[0][1]==tablero[0][2]&&tablero[0][0]!=2&&tablero[0][1]!=2&&tablero[0][2]!=2||
		    tablero[1][0]==tablero[1][1]&&tablero[1][1]==tablero[1][2]&&tablero[1][0]!=2&&tablero[1][1]!=2&&tablero[1][2]!=2||
		    tablero[2][0]==tablero[2][1]&&tablero[2][1]==tablero[2][2]&&tablero[2][0]!=2&&tablero[2][1]!=2&&tablero[2][2]!=2){
		 	return 1;
		 }
		//comprobamos 3 en raya en fila
		else if(tablero[0][0]==tablero[1][0]&&tablero[1][0]==tablero[2][0]&&tablero[0][0]!=2&&tablero[1][0]!=2&&tablero[2][0]!=2||
		    tablero[0][1]==tablero[1][1]&&tablero[1][1]==tablero[2][1]&&tablero[0][1]!=2&&tablero[1][1]!=2&&tablero[2][1]!=2||
		    tablero[0][2]==tablero[1][2]&&tablero[1][2]==tablero[2][2]&&tablero[0][2]!=2&&tablero[1][2]!=2&&tablero[2][2]!=2){
		 	return 1;
		 }
		//comprobamos diagonales
 		else if(tablero[0][0]==tablero[1][1]&&tablero[1][1]==tablero[2][2]&&tablero[0][0]!=2&&tablero[1][1]!=2&&tablero[2][2]!=2||
		 		tablero[0][2]==tablero[1][1]&&tablero[1][1]==tablero[2][0]&&tablero[0][2]!=2&&tablero[1][1]!=2&&tablero[2][0]!=2){
		 	return 1;
		 }
		
 }
 void play(){
 		int win=0,turno=0,t=1,pos,reset=0;
 	tablero();
 	
	 do{
 		if(turno==0)reset=1;
 		else if (turno==1)reset=0;
		 cin>>pos;
		pintar(pos,t);
		win=w(pos,t,reset);
		turno++;
		if (win==0)t=turnos(t);
		
		
					
	}while(turno<9&&win==0);
//	gotoxy(0,26);
	if (win==0)cout<<endl<<"empate"<<endl;
	if (win==1&&t==1)cout<<endl<<"x ganan"<<endl;
	else if(win==1&&t==0)cout<<endl<<"o ganan"<<endl;
	turno=0;
	system("pause");
 }
 int main(){
 	int choice=0;
 	do{
 		system("cls");
		 choice=menu();
 		switch (choice){
 			case 1 :{
 				system("cls");
				 play();
				break;
			 }
			 case 2 :{
			 	system("cls");
			 	tablero();
			 	gotoxy(40,4);
			 	cout<<"7";
			 	gotoxy(60,4);
			 	cout<<"8";
			 	gotoxy(80,4);
			 	cout<<"9";
			 	gotoxy(40,12);
			 	cout<<"4";
			 	gotoxy(60,12);
			 	cout<<"5";
			 	gotoxy(80,12);
			 	cout<<"6";
			 	gotoxy(40,20);
			 	cout<<"1";
			 	gotoxy(60,20);
			 	cout<<"2";
			 	gotoxy(80,20);
			 	cout<<"3";
			 	gotoxy(0,26);
			 	cout<<"--> A cada posicion de casilla le corresponde un numero de tu teclado numerico como se indica arriba en el dibujo.\n--> Empiezan sacando las x despues los o y asi sucesivamente.\n--> Ganara el que consiga alinear 3 de sus fichas en vertical horizontal o diagonal\n--> SUERTE y que gane el mejor\n ";
				system("pause");
				break;
			 }
			 case 3:{
			 	system("cls");
			 	cout<<"credits\n\n programmer: Rafael Arguelles\n designer: Rafael Aguelles\n";
			 	system("pause");
				break;
			 }
			 default:{
				break;
			 }
		 }
	 }while(choice<4&&choice>0);
  	return 0;
 }
