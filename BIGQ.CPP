#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void insertionb();
void quizb();
int getscoreb();
int correctb;
int getscorebig()
{
 return correctb;
}

struct big
{
 char question[100],answer[100];
}setsb[83];

void startbig()
{  clrscr();
 for(int i=0;i<51;i++)
 cout<<'-';
 cout<<"\n";
 for(i=0;i<19;i++)
 cout<<'-';
 cout<<"Big Quiz!";
 for(i=0;i<23;i++)
 cout<<'-';
 cout<<"\n";
 for( i=0;i<51;i++)
 cout<<'-';

 insertionb();
 quizb();

}

void insertionb()
{


 strcpy(setsb[0].question,"What is the next prime number after 7?");
 strcpy(setsb[0].answer,"11");
 strcpy(setsb[1].question,"The perimeter of a circle is also known as what?");
 strcpy(setsb[1].answer,"Circumference");
 strcpy(setsb[2].question,"The angle made by the vector 1i + 1j + 1k with x axis = ?");
 strcpy(setsb[2].answer,"120");
 strcpy(setsb[3].question,"True or false? A convex shape curves outwards.");
 strcpy(setsb[3].answer,"True");
 strcpy(setsb[4].question,"What is the positive square root of 144?");
 strcpy(setsb[4].answer,"12");
 strcpy(setsb[5].question,"True or false? Pi can be correctly written as a fraction.");
 strcpy(setsb[5].answer,"False");
 strcpy(setsb[6].question,"What comes after a million, billion and trillion?");
 strcpy(setsb[6].answer,"Quadrillion");
 strcpy(setsb[7].question,"52 divided by cube  root of equals 64 is = ?");
 strcpy(setsb[7].answer,"13");
 strcpy(setsb[8].question,"What is the bigger number, a googol or a quadrillion?");
 strcpy(setsb[8].answer,"googol");
 strcpy(setsb[9].question,"True or false? Opposite angles of a parallelogram are equal.");
 strcpy(setsb[9].answer,"TRUE");
 strcpy(setsb[10].question,"87 + 56 = ?");
 strcpy(setsb[10].answer,"143");
 strcpy(setsb[11].question,"How many sides does a nonagon have?");
 strcpy(setsb[11].answer,"9");
 strcpy(setsb[12].question,"True or false? -2 is an integer.");
 strcpy(setsb[12].answer,"True");
 strcpy(setsb[13].question,"What is the next number in the Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ?");
 strcpy(setsb[13].answer,"55");
 strcpy(setsb[14].question,"Product of first 666 integers from -3 = ?");
 strcpy(setsb[14].answer,"0");
 strcpy(setsb[15].question,"True or false? In an isosceles triangle all sides are unequal");
 strcpy(setsb[15].answer,"false");
 strcpy(setsb[16].question,"In statistics, the middle value of an ordered set of values is called what?");
 strcpy(setsb[16].answer,"Median");
 strcpy(setsb[17].question,"How many roots can a cubic equation have?");
 strcpy(setsb[17].answer,"3");
 strcpy(setsb[18].question,"Which is used for finding areas of any given curve?Integration or differentiation?");
 strcpy(setsb[18].answer,"Integration");
 strcpy(setsb[19].question,"Differentiation of a constant gives?");
 strcpy(setsb[19].answer,"0");
 strcpy(setsb[20].question,"When light bends as it enters a different medium the process is known as what?");
 strcpy(setsb[20].answer,"Refraction");
 strcpy(setsb[21].question,"A magnifying glass is what type of lens?");
 strcpy(setsb[21].answer,"Convex");
 strcpy(setsb[22].question,"Electric resistance is typically measured in what units?");
 strcpy(setsb[22].answer,"Ohm");
 strcpy(setsb[23].question,"A person who studies physics is known as a?");
 strcpy(setsb[23].answer,"Physicist");
 strcpy(setsb[24].question,"Metals _____ when heated?");
 strcpy(setsb[24].answer,"Expand");
 strcpy(setsb[25].question,"What is the first name of the famous scientist who gave us Newton’s three laws of motion?");
 strcpy(setsb[25].answer,"Isaac");
 strcpy(setsb[26].question,"What state of the art computer technology is used to train pilots when wanting to copy the experience of flying an aircraft?");
 strcpy(setsb[26].answer,"Simulator");
 strcpy(setsb[27].question,"Electric power is typically measured in what units?");
 strcpy(setsb[27].answer,"Watt");
 strcpy(setsb[28].question,"The most recognized model of how the universe begun is known as the ____ bang");
 strcpy(setsb[28].answer,"Big");
 strcpy(setsb[29].question,"First name of the person after whom the Hubble Space Telescope is named?");
 strcpy(setsb[29].answer,"Edwin");
 strcpy(setsb[30].question,"The wire inside an electric bulb is known as the what?");
 strcpy(setsb[30].answer,"Filament");
 strcpy(setsb[31].question,"Theoretical physicist James Maxwell was born in what country?");
 strcpy(setsb[31].answer,"Scotland");
 strcpy(setsb[32].question,"Infrared light has a wavelength that is too long or short to be visible for humans?");
 strcpy(setsb[32].answer,"Long");
 strcpy(setsb[33].question,"What kind of eclipse do we have when the moon is between the sun and the earth?");
 strcpy(setsb[33].answer,"Solar");
 strcpy(setsb[34].question,"True or false? Iron is attracted by magnets.");
 strcpy(setsb[34].answer,"True");
 strcpy(setsb[35].question,"What is the earth’s primary source of energy?");
 strcpy(setsb[35].answer,"Sun");
 strcpy(setsb[36].question,"Conductors have a high or low resistance?");
 strcpy(setsb[36].answer,"Low");
 strcpy(setsb[37].question,"Electric current is typically measured in what units?");
 strcpy(setsb[37].answer,"Ampere");
 strcpy(setsb[38].question,"First name of the scientist well known for his theory of relativity?");
 strcpy(setsb[38].answer,"Albert Einstein");
 strcpy(setsb[39].question,"Earth is located in which galaxy?");
 strcpy(setsb[39].answer,"Milkiway");
 strcpy(setsb[40].question,"the nucleus of an atom consists of protons and ____?");
 strcpy(setsb[40].answer,"neutrons");
 strcpy(setsb[41].question,"The most electronegative element is?");
 strcpy(setsb[41].answer,"fluorine");
 strcpy(setsb[42].question,"The metal used to recover copper from a solution of copper sulphate is?");
 strcpy(setsb[42].answer,"Fe");
 strcpy(setsb[43].question,"Boiling point of water is always 373.15K (true/false)?");
 strcpy(setsb[43].answer,"False");
 strcpy(setsb[44].question,"Metals _____ when heated?");
 strcpy(setsb[44].answer,"Expand");
 strcpy(setsb[45].question,"The chemical symbol of silver is?");
 strcpy(setsb[45].answer,"Ag");
 strcpy(setsb[46].question,"The chemical symbol for tin is??");
 strcpy(setsb[46].answer,"Sn");
 strcpy(setsb[47].question,"The mineral containing both magnesium and calcium is?");
 strcpy(setsb[47].answer,"dolomite");
 strcpy(setsb[48].question,"The most recognized model of how the universe begun is known as the ____ bang");
 strcpy(setsb[48].answer,"Big");
 strcpy(setsb[49].question,"The oldest rocks in the earth's crust were once molten, and came from deep inside the earth. The molten rock, called magma, spewed out in  volcanic eruptions during the earth;s early life and solidified into hard rock's called  ___ rock?");
 strcpy(setsb[49].answer,"igneous");
 strcpy(setsb[50].question,"The wire inside an electric bulb is known as the what?");
 strcpy(setsb[50].answer,"Filament");
 strcpy(setsb[51].question,"The law which states that the amount of gas dissolved in a liquid is proportional to its partial pressure is ____'s law?");
 strcpy(setsb[51].answer,"Henry");
 strcpy(setsb[52].question,"The most commonly used bleaching agent is?");
 strcpy(setsb[52].answer,"chlorine");
 strcpy(setsb[53].question,"The metallurgical process in which a metal is obtained in a fused state is called?");
 strcpy(setsb[53].answer,"smelting");
 strcpy(setsb[54].question,"The mass of P4O10 that will be obtained from the reaction of 1.33 gram of P4 and 5.07 of oxygen is.");
 strcpy(setsb[54].answer,"3.05 gram");
 strcpy(setsb[55].question,"The heat required to raise the temperature of body by 1 K is called?");
 strcpy(setsb[55].answer,"thermal capacity");
 strcpy(setsb[56].question,"Conductors have a high or low resistance?");
 strcpy(setsb[56].answer,"Low");
 strcpy(setsb[57].question,"The ionic radii of N3-, O2-, F- and Na+ follows the order(separateby',')?");
 strcpy(setsb[57].answer,"N3-,O2-,F-,Na+");
 strcpy(setsb[58].question,"The first metal used by man was?");
 strcpy(setsb[58].answer,"copper");
 strcpy(setsb[59].question,"The main chemical constituent of clay is?");
 strcpy(setsb[59].answer,"aluminium silicate");
 strcpy(setsb[60].question,"S M E O U - Unscramble");
 strcpy(setsb[60].answer,"Mouse");
 strcpy(setsb[61].question,"F T A S R W E O - Unscramble");
 strcpy(setsb[61].answer,"Software");
 strcpy(setsb[62].question,"E A Y B D O K R - Unscramble ");
 strcpy(setsb[62].answer,"Keyboard");
 strcpy(setsb[63].question,"N E R N I E T T - Unscramble");
 strcpy(setsb[63].answer,"Internet");
 strcpy(setsb[64].question,"M O R N I T O - Unscramble");
 strcpy(setsb[64].answer,"Monitor");
 strcpy(setsb[65].question,"I C O A I P A P  L T N - Unscramble");
 strcpy(setsb[65].answer,"Application");
 strcpy(setsb[66].question,"O P S O E S R C R - Unscramble");
 strcpy(setsb[66].answer,"Processor");
 strcpy(setsb[67].question,"A A D T - Unscramble");
 strcpy(setsb[67].answer,"Data");
 strcpy(setsb[68].question,"Y R O M E M - Unscramble");
 strcpy(setsb[68].answer,"Memory");
 strcpy(setsb[69].question,"T K N W O E R - Unscramble");
 strcpy(setsb[69].answer,"Network");
 strcpy(setsb[70].question,"P L T P A O - Unscramble");
 strcpy(setsb[70].answer,"Laptop");
 strcpy(setsb[71].question,"E E S N C R - Unscramble");
 strcpy(setsb[71].answer,"Screen");
 strcpy(setsb[72].question,"T U P T U O - Unscramble");
 strcpy(setsb[72].answer,"Output");
 strcpy(setsb[73].question,"C R C U I T - Unscramble");
 strcpy(setsb[73].answer,"Circuit");
 strcpy(setsb[74].question,"W N D W S I O - Unscramble");
 strcpy(setsb[74].answer,"Windows");
 strcpy(setsb[75].question,"C P H I - Unscramble");
 strcpy(setsb[75].answer,"Chip");
 strcpy(setsb[76].question,"T H R E E T E N - Unscramble");
 strcpy(setsb[76].answer,"Ethernet");
 strcpy(setsb[77].question,"P R I A Y C - Unscramble");
 strcpy(setsb[77].answer,"Piracy");
 strcpy(setsb[78].question,"D L W N O A O D - Unscramble");
 strcpy(setsb[78].answer,"Download");
 strcpy(setsb[79].question,"R E W O S B R - Unscramble");
 strcpy(setsb[79].answer,"Browser");
}
void quizb()
{
 int qno;correctm=0;
 char question[100],answer[100],answeruser[100];


 randomize();
 for(int i=0 ; i<25 ; i++)
  {
    randomize();
    qno=random(80);
    cout<<"\n\n"<<i+1<<") ";
   puts(setsb[qno].question);
   cout<<"\nAnswer:";
   gets(answeruser);
   if(!strcmpi(answeruser,setsb[qno].answer))
    {
     cout<<"\nCorrect Answer!!\n";
     correctb++;
    }
   else
   {
    cout<<"\nSorry wrong answer!\n";
    getch();
   }


 }
 cout<<"\nThanks for playing you got "<<correctb<<" correct answer(s)!";
 getch();
 getscorebig();

}

