#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void insertionp();
void quiz();
int getscorephysics();
int correct;
int getscorephysics()
{
 return correct;
}

struct physics
{
 char question[100],answer[100];
}sets[25];

void startphysicsquiz()
{  clrscr();
 for(int i=0;i<51;i++)
 cout<<'-';
 cout<<"\n";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"Physics Quiz!";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"\n";
 for( i=0;i<51;i++)
 cout<<'-';

 insertionp();
 quiz();

}

void insertionp()
{


 strcpy(sets[0].question,"When light bends as it enters a different medium the process is known as what?");
 strcpy(sets[0].answer,"Refraction");
 strcpy(sets[1].question,"A magnifying glass is what type of lens?");
 strcpy(sets[1].answer,"Convex");
 strcpy(sets[2].question,"Electric resistance is typically measured in what units?");
 strcpy(sets[2].answer,"Ohm");
 strcpy(sets[3].question,"A person who studies physics is known as a?");
 strcpy(sets[3].answer,"Physicist");
 strcpy(sets[4].question,"Metals _____ when heated?");
 strcpy(sets[4].answer,"Expand");
 strcpy(sets[5].question,"What is the first name of the famous scientist who gave us Newton’s three laws of motion?");
 strcpy(sets[5].answer,"Isaac");
 strcpy(sets[6].question,"What state of the art computer technology is used to train pilots when wanting to copy the experience of flying an aircraft?");
 strcpy(sets[6].answer,"Simulator");
 strcpy(sets[7].question,"Electric power is typically measured in what units?");
 strcpy(sets[7].answer,"Watt");
 strcpy(sets[8].question,"The most recognized model of how the universe begun is known as the ____ bang");
 strcpy(sets[8].answer,"Big");
 strcpy(sets[9].question,"First name of the person after whom the Hubble Space Telescope is named?");
 strcpy(sets[9].answer,"Edwin");
 strcpy(sets[10].question,"The wire inside an electric bulb is known as the what?");
 strcpy(sets[10].answer,"Filament");
 strcpy(sets[11].question,"Theoretical physicist James Maxwell was born in what country?");
 strcpy(sets[11].answer,"Scotland");
 strcpy(sets[12].question,"Infrared light has a wavelength that is too long or short to be visible for humans?");
 strcpy(sets[12].answer,"Long");
 strcpy(sets[13].question,"What kind of eclipse do we have when the moon is between the sun and the earth?");
 strcpy(sets[13].answer,"Solar");
 strcpy(sets[14].question,"True or false? Iron is attracted by magnets.");
 strcpy(sets[14].answer,"True");
 strcpy(sets[15].question,"What is the earth’s primary source of energy?");
 strcpy(sets[15].answer,"Sun");
 strcpy(sets[16].question,"Conductors have a high or low resistance?");
 strcpy(sets[16].answer,"Low");
 strcpy(sets[17].question,"Electric current is typically measured in what units?");
 strcpy(sets[17].answer,"Ampere");
 strcpy(sets[18].question,"First name of the scientist well known for his theory of relativity?");
 strcpy(sets[18].answer,"Albert Einstein");
 strcpy(sets[19].question,"Earth is located in which galaxy?");
 strcpy(sets[19].answer,"Milkiway");

}
void quiz()
{
 int qno;correct=0;
 char question[100],answer[100],answeruser[100];

 ifstream f("Physics.dat");
 randomize();
 for(int i=0 ; i<5 ; i++)
  {
    randomize();
    qno=random(20);
    cout<<"\n\n"<<i+1<<") ";
   puts(sets[qno].question);
   cout<<"\nAnswer:";
   gets(answeruser);
   if(!strcmpi(answeruser,sets[qno].answer))
    {
     cout<<"\nCorrect Answer!!\n";
     correct++;
    }
   else
   {
    cout<<"\nSorry wrong answer!\n";
    getch();
   }


 }
 cout<<"\nThanks for playing you got "<<correct<<" correct answer(s)!";
 getch();
 getscorephysics();

}

