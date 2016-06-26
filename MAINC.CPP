#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<main2.h>
#include<iomanip.h>
#include"PHYSICSQ.cpp"
#include"MATHSQ.cpp"
#include"WORDSC.cpp"
#include"CHEMQ.cpp"
#include"BIGQ.cpp"


void menu();
void displayuserstats();
int current;
struct rankc
{
	char name[20];
	float avg;
}e[200];

int user::checkname(char username[])//Checks if username is available for the logging in user
{
	int status=0;
	fstream f("user.dat",ios::in);
	user temp;
	while(f.read((char*)&temp,sizeof(temp)))
	{
		if(!strcmpi(temp.username,username))
		 {
		  status=1;
		  break;
		 }
   }
   f.close();
   if(status)
   return(1);
   else
   return(0);

}


void user::loginuser()//Logging in
{

	int status=0;
	user temp;
	clrscr();
	cout<<"\n\t\t\t\t  Login";
	cout<<"\n\t\t\t\t----------    ";
	cout<<"\n\n\t\tUsername:";
	cin>>username;
	cout<<"\n\t\tPassword:";
	cin>>password;
	fstream f("user.dat",ios::in);
	while(f.read((char*)&temp,sizeof(temp)))
	{

		if((!strcmp(temp.username,username))&&(!strcmp(temp.password,password)))
		{
			status=1;
			break;
		}
	}

	if(status)
	    {
		meobj=temp;
		current = f.tellg()-sizeof(meobj);
		loginme(temp.username);
	    }
	else
		{
		 cout<<"\nInvalid username or password!";
         meobj.presentation();
       }
	f.close();
}
void user::loginme(char username[])//login
{
	clrscr();
	cout<<"Logging in to your account "<<username<<"....";
	delay(1200);
	menu();
}




void menu()//Menu after sign in
{
	user temp;
	char pos[20];
	menu:int in=1;
	clrscr();
	int choice;
	cout<<"\n\n                                  Menu";
	cout<<"\n\n                                ---------   ";
	cout<<"\n\n                              1.Computer Word Scramble";
	cout<<"\n\n                              2.Maths Quiz";
	cout<<"\n\n                              3.Physics Quiz";
	cout<<"\n\n                              4.Chemistry Quiz";
	cout<<"\n\n                              5.BIG QUIZ";
	cout<<"\n\n                              6.User Stats";
	cout<<"\n\n                              7.Sign out";

	cout<<"\n\n               Enter Choice:";
	cin>>choice;

	switch(choice)
	{
	       case 1: startwordscramble();
			fstream f("user.DAT",ios::in|ios::out) ;
			meobj.exp+=5;
			meobj.score+=getscorewordscramble();
			f.seekp(current);
			f.write((char*)&meobj , sizeof (meobj));
			f.close();
			break;
	   case 2: startmathsquiz();
		    fstream f1("user.DAT",ios::in|ios::out);
		    meobj.exp+=5;
		    meobj.score+=getscoremaths();
		    f1.seekp(current);
		    f1.write((char*)&meobj , sizeof (meobj));//find spot and modify
		    f1.close();
		    break;
	       case 3: startphysicsquiz();
		    fstream f2("user.DAT",ios::in|ios::out)  ;
		    meobj.exp+=5;
		    meobj.score+=getscorephysics();
		    f2.seekp(current);
		    f2.write((char*)&meobj , sizeof (meobj));
		    f2.close();
		    break;
		  case 4: startchemquiz();
		    fstream f3("user.DAT",ios::in|ios::out)  ;
		    meobj.exp+=5;
		    meobj.score+=getscorechemistry();
		    f3.seekp(current);
		    f3.write((char*)&meobj , sizeof (meobj));
		    f3.close();
		    break;
		  case 5: startbig();
		    fstream f4("user.DAT",ios::in|ios::out)  ;
		    meobj.exp+=25;
		    meobj.score+=getscorebig();
		    f4.seekp(current);
		    f4.write((char*)&meobj , sizeof(meobj));
		    f4.close();
		    break;
		   case 6: displayuserstats();
		   break;
		  case 7:meobj.presentation();
		   default:"\nPlease enter the right option";

	}
	 cout<<"\n\nGo back to menu(0/1)? :";
	 cin>>in;
	 if(in)
	 goto menu;
}
void user::registeruser()//Registering
{
	int choice;
	clrscr();
	cout<<"\n\n\n                             Create account!";
	cout<<"\n\n                            ----------------- ";
	cout<<"\n\n                    Enter Username:";
	cin>>username;
	if(checkname(username))
	{
		cout<<"\nUsername not available";
		getch();
		meobj.presentation();
	}
	cout<<"\n\n                    Enter Password:";
	cin>>password;
	cout<<"\nConfirm registration(0/1)? :";
	cin>>choice;
	if(choice==1)
	{
		strcpy(meobj.username,username);
		strcpy(meobj.password,password);
		meobj.score=0;
		meobj.exp=0;
		cout<<"\nUser profile created";
		ofstream f("user.dat",ios::app|ios::binary);
		f.write((char*)&meobj,sizeof(meobj));
		f.close();
		getch();
		cout<<"\n\n\tReturning to main page......";
		delay(1200);
		meobj.presentation();
	}
	else
	{
		cout<<"\n\n\tReturning to main page......";
		delay(1200);
		meobj.presentation();
	}
}
void displayuserstats()//User stats
{
 clrscr();
 float a, b;
 a=meobj.exp;
 b=meobj.score;
 cout<<"\n---------USER STATS------------";
 cout<<"\nExperience            :"<<a;
 cout<<"\nNo. of correct answers:"<<b;


 float avg=(b/a)*100;
 cout<<"\nAccuracy              :"<<avg<<'%';
 getch();
}
void initusers()
{
	user obj;
	ifstream f("USER.DAT",ios::binary);
	while(f.read((char*)&obj,sizeof(obj)))
	{
		strcpy(meobj.username,obj.username);
		strcpy(meobj.password,obj.password);
		meobj.score=obj.score;
		meobj.exp=obj.exp;

	}
	f.close();
}
void user::presentation()
{
	clrscr();
	int choice;
	cout<<"\n\n                                      Menu";
	cout<<"\n\n                                     ------   ";
	cout<<"\n\n                                   1.Register";
	cout<<"\n\n\n                                    2.Login";
	cout<<"\n\n\n                                    3.Exit";
	cout<<"\n\n\n\n                         Enter Choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
		meobj.registeruser();
		break;

		case 2:
		meobj.loginuser();
		break;

		case 3:
		exit(1);
		break;

		default:
		cout<<"\nCheck Menu!";
		exit(1);
	}
}
void main()
{
	int choice;
	do{
	meobj.presentation();
	cout<<"\nDo you want to exit?(0/1)\n";
	cin>>choice;
	}while(choice==0);
}
