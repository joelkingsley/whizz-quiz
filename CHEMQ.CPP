#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void insertionc();
void quizc();
int getscorechemistry();
int correctc;
int getscorechemistry()
{
 return correctc;
}

struct chemistry
{
 char question[100],answer[100];
}setsc[50];

void startchemquiz()
{  clrscr();
 for(int i=0;i<51;i++)
 cout<<'-';
 cout<<"\n";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"Chemistry Quiz!";
 for(i=0;i<17;i++)
 cout<<'-';
 cout<<"\n";
 for( i=0;i<51;i++)
 cout<<'-';

 insertionc();
 quizc();

}

void insertionc()
{


strcpy(setsc[0].question,"the nucleus of an atom consists of protons and ____?");
 strcpy(setsc[0].answer,"neutrons");
 strcpy(setsc[1].question,"The most electronegative element is?");
 strcpy(setsc[1].answer,"fluorine");
 strcpy(setsc[2].question,"The metal used to recover copper from a solution of copper sulphate is?");
 strcpy(setsc[2].answer,"Fe");
 strcpy(setsc[3].question,"Boiling point of water is always 373.15K (true/false)?");
 strcpy(setsc[3].answer,"False");
 strcpy(setsc[4].question,"Metals _____ when heated?");
 strcpy(setsc[4].answer,"Expand");
 strcpy(setsc[5].question,"The chemical symbol of silver is?");
 strcpy(setsc[5].answer,"Ag");
 strcpy(setsc[6].question,"The chemical symbol for tin is??");
 strcpy(setsc[6].answer,"Sn");
 strcpy(setsc[7].question,"The mineral containing both magnesium and calcium is?");
 strcpy(setsc[7].answer,"dolomite");
 strcpy(setsc[8].question,"The most recognized model of how the universe begun is known as the ____ bang");
 strcpy(setsc[8].answer,"Big");
 strcpy(setsc[9].question,"The oldest rocks in the earth's crust were once molten. They are___rocks");
 strcpy(setsc[9].answer,"igneous");
 strcpy(setsc[10].question,"The wire inside an electric bulb is known as the what?");
 strcpy(setsc[10].answer,"Filament");
 strcpy(setsc[11].question,"The law which deals with amount of gas in liquid and its vapor pressure is ____'s law?");
 strcpy(setsc[11].answer,"Henry");
 strcpy(setsc[12].question,"The most commonly used bleaching agent is?");
 strcpy(setsc[12].answer,"chlorine");
 strcpy(setsc[13].question,"The metallurgical process in which a metal is obtained in a fused state is called?");
 strcpy(setsc[13].answer,"smelting");
 strcpy(setsc[14].question,"The mass of P4O10 that will be obtained from the reaction of 1.33 gram of P4 and 5.07 of oxygen is.");
 strcpy(setsc[14].answer,"3.05 gram");
 strcpy(setsc[15].question,"The heat required to raise the temperature of body by 1 K is called?");
 strcpy(setsc[15].answer,"thermal capacity");
 strcpy(setsc[16].question,"Conductors have a high or low resistance?");
 strcpy(setsc[16].answer,"Low");
 strcpy(setsc[17].question,"The ionic radii of N3-, O2-, F- and Na+ follows the order(separateby',')?");
 strcpy(setsc[17].answer,"N3-,O2-,F-,Na+");
 strcpy(setsc[18].question,"The first metal used by man was?");
 strcpy(setsc[18].answer,"copper");
 strcpy(setsc[19].question,"The main chemical constituent of clay is?");
 strcpy(setsc[19].answer,"aluminium silicate");

}
void quizc()
{
 int qno;correctc=0;
 char question[100],answer[100],answeruser[100];
  randomize();
  for(int i=0 ; i<5 ; i++)
  {
    randomize();
    qno=random(20);
    cout<<"\n\n"<<i+1<<") ";
   puts(setsc[qno].question);
   cout<<"\nAnswer:";
   gets(answeruser);
   if(!strcmpi(answeruser,setsc[qno].answer))
    {
     cout<<"\nCorrect Answer!!\n";
     correctc++;
    }
   else
   {
    cout<<"\nSorry wrong answer!\n";
    getch();
   }


 }
 cout<<"\nThanks for playing you got "<<correctc<<" correct answer(s)!";
 getch();
 getscorechemistry();

}

