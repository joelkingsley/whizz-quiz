#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void insertionm();
void quizm();
int getscoremaths();
int correctm;
int getscoremaths()
{
 return correctm;
}

struct maths
{
 char question[100],answer[100];
}setsm[25];

void startmathsquiz()
{  clrscr();
 for(int i=0;i<51;i++)
 cout<<'-';
 cout<<"\n";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"Maths Quiz!";
 for(i=0;i<21;i++)
 cout<<'-';
 cout<<"\n";
 for( i=0;i<51;i++)
 cout<<'-';

 insertionm();
 quizm();

}

void insertionm()
{


 strcpy(setsm[0].question,"What is the next prime number after 7?");
 strcpy(setsm[0].answer,"11");
 strcpy(setsm[1].question,"The perimeter of a circle is also known as what?");
 strcpy(setsm[1].answer,"Circumference");
 strcpy(setsm[2].question,"The angle made by the vector 1i + 1j + 1k with x axis = ?");
 strcpy(setsm[2].answer,"120");
 strcpy(setsm[3].question,"True or false? A convex shape curves outwards.");
 strcpy(setsm[3].answer,"True");
 strcpy(setsm[4].question,"What is the positive square root of 144?");
 strcpy(setsm[4].answer,"12");
 strcpy(setsm[5].question,"True or false? Pi can be correctly written as a fraction.");
 strcpy(setsm[5].answer,"False");
 strcpy(setsm[6].question,"What comes after a million, billion and trillion?");
 strcpy(setsm[6].answer,"Quadrillion");
 strcpy(setsm[7].question,"52 divided by cube  root of equals 64 is = ?");
 strcpy(setsm[7].answer,"13");
 strcpy(setsm[8].question,"What is the bigger number, a googol or a quadrillion?");
 strcpy(setsm[8].answer,"googol");
 strcpy(setsm[9].question,"True or false? Opposite angles of a parallelogram are equal.");
 strcpy(setsm[9].answer,"TRUE");
 strcpy(setsm[10].question,"87 + 56 = ?");
 strcpy(setsm[10].answer,"143");
 strcpy(setsm[11].question,"How many sides does a nonagon have?");
 strcpy(setsm[11].answer,"9");
 strcpy(setsm[12].question,"True or false? -2 is an integer.");
 strcpy(setsm[12].answer,"True");
 strcpy(setsm[13].question,"What is the next number in the Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ?");
 strcpy(setsm[13].answer,"55");
 strcpy(setsm[14].question,"Product of first 666 integers from -3 = ?");
 strcpy(setsm[14].answer,"0");
 strcpy(setsm[15].question,"True or false? In an isosceles triangle all sides are unequal");
 strcpy(setsm[15].answer,"false");
 strcpy(setsm[16].question,"In statistics, the middle value of an ordered set of values is called what?");
 strcpy(setsm[16].answer,"Median");
 strcpy(setsm[17].question,"How many roots can a cubic equation have?");
 strcpy(setsm[17].answer,"3");
 strcpy(setsm[18].question,"Which is used for finding areas of any given curve?Integration or differentiation?");
 strcpy(setsm[18].answer,"Integration");
 strcpy(setsm[19].question,"Differentiation of a constant gives?");
 strcpy(setsm[19].answer,"0");

}
void quizm()
{
 int qno;correctm=0;
 char question[100],answer[100],answeruser[100];

 ifstream f("maths.dat");
 randomize();
 for(int i=0 ; i<5 ; i++)
  {
    randomize();
    qno=random(20);
    cout<<"\n\n"<<i+1<<") ";
   puts(setsm[qno].question);
   cout<<"\nAnswer:";
   gets(answeruser);
   if(!strcmpi(answeruser,setsm[qno].answer))
    {
     cout<<"\nCorrect Answer!!\n";
     correctm++;
    }
   else
   {
    cout<<"\nSorry wrong answer!\n";
    getch();
   }


 }
 cout<<"\nThanks for playing you got "<<correctm<<" correct answer(s)!";
 getch();
 getscoremaths();

}

