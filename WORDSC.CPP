#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void insertionws();
void quizws();
int getscorewordscramble();
int correctws;
int getscorewordscramble()
{
 return correctws;
}

struct worldscramble
{
 char question[100],answer[100];
}setsws[25];

void startwordscramble()
{  clrscr();
 for(int i=0;i<52;i++)
 cout<<'-';
 cout<<"\n";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"Word Scramble!";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"\n";
 for( i=0;i<52;i++)
 cout<<'-';

 insertionws();
 quizws();

}

void insertionws()
{


 strcpy(setsws[0].question,"S M E O U ");
 strcpy(setsws[0].answer,"Mouse");
 strcpy(setsws[1].question,"F T A S R W E O");
 strcpy(setsws[1].answer,"Software");
 strcpy(setsws[2].question,"E A Y B D O K R ");
 strcpy(setsws[2].answer,"Keyboard");
 strcpy(setsws[3].question,"N E R N I E T T");
 strcpy(setsws[3].answer,"Internet");
 strcpy(setsws[4].question,"M O R N I T O");
 strcpy(setsws[4].answer,"Monitor");
 strcpy(setsws[5].question,"I C O A I P A P  L T N");
 strcpy(setsws[5].answer,"Application");
 strcpy(setsws[6].question,"O P S O E S R C R");
 strcpy(setsws[6].answer,"Processor");
 strcpy(setsws[7].question,"A A D T");
 strcpy(setsws[7].answer,"Data");
 strcpy(setsws[8].question,"Y R O M E M");
 strcpy(setsws[8].answer,"Memory");
 strcpy(setsws[9].question,"T K N W O E R");
 strcpy(setsws[9].answer,"Network");
 strcpy(setsws[10].question,"P L T P A O");
 strcpy(setsws[10].answer,"Laptop");
 strcpy(setsws[11].question,"E E S N C R");
 strcpy(setsws[11].answer,"Screen");
 strcpy(setsws[12].question,"T U P T U O");
 strcpy(setsws[12].answer,"Output");
 strcpy(setsws[13].question,"C R C U I T");
 strcpy(setsws[13].answer,"Circuit");
 strcpy(setsws[14].question,"W N D W S I O");
 strcpy(setsws[14].answer,"Windows");
 strcpy(setsws[15].question,"C P H I");
 strcpy(setsws[15].answer,"Chip");
 strcpy(setsws[16].question,"T H R E E T E N");
 strcpy(setsws[16].answer,"Ethernet");
 strcpy(setsws[17].question,"P R I A Y C");
 strcpy(setsws[17].answer,"Piracy");
 strcpy(setsws[18].question,"D L W N O A O D");
 strcpy(setsws[18].answer,"Download");
 strcpy(setsws[19].question,"R E W O S B R");
 strcpy(setsws[19].answer,"Browser");

}
void quizws()
{
 int qno;correctws=0;
 char question[100],answer[100],answeruser[100];

 ifstream f("Wordscramble.dat");
 randomize();
 for(int i=0 ; i<5 ; i++)
  {
    randomize();
    qno=random(20);
    cout<<"\n\n"<<i+1<<") ";
   puts(setsws[qno].question);
   cout<<"\nAnswer:";
   gets(answeruser);
   if(!strcmpi(answeruser,setsws[qno].answer))
    {
     cout<<"\nCorrect Answer!!\n";
     correctws++;
    }
   else
   {
    cout<<"\nSorry wrong answer!\n";
    getch();
   }


 }
 cout<<"\nThanks for playing you got "<<correctws<<" correct answer(s)!";
 getch();
 getscorewordscramble();

}

