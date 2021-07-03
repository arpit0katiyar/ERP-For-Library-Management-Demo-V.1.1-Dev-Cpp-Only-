#include<iostream>
#include<string.h>
#include<conio.h>
#include <Windows.h>
#include<fstream>
void gotoxy(int x, int y) 
{ 
COORD coord;
coord.X = x; 
coord.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);  
}
using namespace std;
class UIToolKit
{
  public:
  
  int ThankYou()
{
    system("cls");
 cout<<"+88_________________+880\n_+880_______________++80\n_++88______________+880\n_++88_____________++88\n__+880___________++88\n__+888_________++880\n__++880_______++880\n__++888_____+++880\n__++8888__+++8880++88\n__+++8888+++8880++8888\n___++888++8888+++8888+80\n___++88++8888++888888++88\n___++++++888888fx888888888\n____++++++8888888888888888\n____++++++++00088888888888\n_____+++++++00008f8888888\n______+++++++00088888888\n_______+++++++0888f8888\n\n|||! THANKS FOR THE TIME !|||";
getch();
}   
int Header(int h,char ch[30],int x,int y)
{
	gotoxy(x,y);
	if(h%2==1)
	h-=1;
	int i;
	int q=h;
	h=h-5-strlen(ch);
	int h1=h;
	int h2=h;
	if(q%2==0)
	h2-=1;
	char c1=205,c2=204,c3=201,c4=187,c5=185;
	
	cout<<c3;
	for(i=1; i<=h1/2;i++)
	cout<<c1;
	cout<<c5<<" "<<ch<<" "<<c2;
	for(i=1; i<=h2/2;i++)
	cout<<c1;
	cout<<c4<<"\b\n";
}
int Body(int v,int h,int x,int y)
{
	gotoxy(x,y);
	int i,j;
	if(h%2==1)
	h--;
	char c1=186;
	for(i=1;i<=v;i++)
	{
		gotoxy(x,y+i);
		cout<<c1;
		for(j=1;j<=h-2;j++)
		cout<<" ";
		cout<<c1<<"\n";
	}
	
}
int Footer(int h,char ch1[20],char ch2[20],int x,int hy,int f)
{
	gotoxy(x,hy);
	int i;
	char c1=200,c2=188,c=205;
	if(h%2==1)
	h-=1;
	h=(h-2)/2;
	int h1=h-strlen(ch1)-4-10;
	int h2=h-strlen(ch2)-4-10;

	cout<<c1;
	
	for(i=1;i<=10;i++)
	cout<<c;
	if(f==1)
	{
		cout<<"[ ";
		cout<<ch1<<" ]";
		
	}	
	if(f==0)
	{
		cout<<c<<c;
		cout<<ch1<<c<<c;
		
	}
	for(i=1;i<=h1;i++)
	cout<<c; 
	
	for(i=1;i<=h2;i++)
	cout<<c;
	
	if(f==1)
	{
		cout<<"[ ";
		cout<<ch2<<" ]";
	}
	
	if(f==0)
	{
		cout<<c<<c;
		cout<<ch2<<c<<c;
		
	}
	for(i=1;i<=10;i++)
	cout<<c;

	cout<<c2;
	
}
int Frame(int h, int v, char Heading[50], char LeftFooter[50], char RightFooter[50])
{
	gotoxy(0,0);
    Header(h,Heading,0,0);
	Body(v-2,h,0,0);
	Footer(h,LeftFooter,RightFooter,0,v-1,1);	

}  
int UFrame(int h, int v, char Heading[50], char LeftFooter[50], char RightFooter[50],int x,int y,int f)	// ! UNBAISED FRAME ! NO gotoxy(0,0);
{
    Header(h,Heading,x,y);
	Body(v-2,h,x,y);
	Footer(h,LeftFooter,RightFooter,x,v+4,f);	

}  
};
class Working:UIToolKit
{
   public:
       
int one()
{system("cls");
    MenuOption("VIDYA NETWORKING",25,1);
    cout<<"Learn the basics of hardware & networking, and build a strong base. \nTake the first step to build a successful career in IT.\n\nCourse details :    This course gives you industry-relevant training in:\n	                Fundamentals of hardwareBasics of networking\n		            File sharing & computer securityIntroduction to cloud computing\\n\nJob opportunities : On completing this course, you can become :\n		            Hardware support engineerDesktop support executive\n\nEligibility :        10+2/ Undergraduates/ Graduates/\n                    Engineers/ Working Professionals\n		\nCourse Duration :    5 months*\n\nFee range :	        14,143 - 18,000**\n";
    getch();
    system("cls");
    Courses();
}


int IssueBook()
{
	

    int x=20,y=6;
         
     char cch,d=224,sn[100],bn[100],doi[100],dor[100];
     int id;
    Frame(79,25,": ISSUE BOOK :","BACK","0");   
    gotoxy(25-4,7);
    cout<<"ID             :     [ Max 3 Digits ]";
    gotoxy(25-4,9);
    cout<<"Student's Name :                 ";
    gotoxy(25-4,11);
    cout<<"Book's Name    :                 ";
    gotoxy(25-4,13);
    cout<<"Issued Date    :                 ";
    gotoxy(25-4,15);
    cout<<"Return Date    :                 ";
    MenuOption("ISSUE",35,17);
    MenuOption("---[ MAX - 15 Characters | [E]Enter | No Space | [A] To Accept ]---",3,3);
   
    ifstream infile; 
   infile.open("LIBIDC.dat",ios::in); 
   infile >>id;  
   infile.close();
   ++id;
 cout<<id;
    gotoxy(38,7);
    cout<<id;
      while(true)
{
        
    if(cch!=d)
    {
  
    if(cch=='P' || cch=='K')
    {
    	cout<<y;
        if(y==17)
        {
         x=14;y=22;
         gotoxy(19-4,7);
         cout<<"   ";
         gotoxy(19-4,9);
         cout<<"   ";
         gotoxy(19-4,11);
         cout<<"   ";
         gotoxy(19-4,13);
         cout<<"   ";
         gotoxy(19-4,15);
         cout<<"   ";
         gotoxy(30-4,18);
         cout<<"   ";
         gotoxy(30+19-4,18);
         cout<<"   ";
        }
        if(y==14)
        {
         x=31;y=17;  
         gotoxy(19-4,7);
         cout<<"   ";
         gotoxy(19-4,9);
         cout<<"   ";
         gotoxy(19-4,11);
         cout<<"   ";
         gotoxy(19-4,13);
         cout<<"   ";
         gotoxy(19-4,15);
         cout<<"   ";
        }
        if(y<14)
        y+=2;
        if(y==8)
        {
             
         gotoxy(19-4,7);
         cout<<"   ";
         }
        if(y==10)
        {
             
         gotoxy(19-4,7);
         cout<<"   ";
         gotoxy(19-4,9);
         cout<<"   ";
         }
        if(y==12)
        {
             
         gotoxy(19-4,7);
         cout<<"   ";
         gotoxy(19-4,9);
         cout<<"   ";
         gotoxy(19-4,11);
         cout<<"   ";
        }
        if(y==14)
        {     
         gotoxy(19-4,7);
         cout<<"   ";
         gotoxy(19-4,9);
         cout<<"   ";
         gotoxy(19-4,11);
         cout<<"   ";
         gotoxy(19-4,13);
         cout<<"   ";
        }
        if(y==22)
        {
		 gotoxy(30+19-4,18);
         cout<<"                     ";
		}
    }
    
    if(cch=='H')
    {
        
        if(y<=14)
        {
            y-=2;
        } 
        if(y==17)
        {
            x=20;
            y=14;
            gotoxy(30-4,18);
            cout<<"   ";
            gotoxy(30+19-4,18);
            cout<<"                     ";
        }
       
        if(y==22)
        {
            x=31;
            y=17;
            gotoxy(14-1,22+1);
            cout<<"   ";
        }        
        if(y==12)
        {
            
            gotoxy(19-4,15);
            cout<<"   ";
        }
        if(y==6)
        {
           gotoxy(19-4,9);
            cout<<"   "; 
        }
        if(y==10)
        {
            
            gotoxy(19-4,13);
            cout<<"   ";
        }
        
        if(y==8)
        {
            
            gotoxy(19-4,11);
            cout<<"   ";
        }
        if(y<7)
        y=6;
        
    } 
        if(cch=='a' || cch=='A')
        {       
            if(y==8)
            {
                gotoxy(38,9);
                cin>>sn;             
            }
            
            if(y==10)
            {
                gotoxy(38,11);
                cin>>bn;             
            }
            
            if(y==12)
            {
                gotoxy(38,13);
                cin>>doi;             
            }
            
            if(y==14)
            {
                gotoxy(38,15);
                cin>>dor;             
            }
            if(y==17)
            {
                ofstream outfile;
    outfile.open("LIB.info",ios::app);
    outfile<<id<<" "<<sn<<" "<<bn<<" "<<doi<<" "<<dor<<" "<<endl;
    outfile.close();
    ofstream outfileid;
    outfile.open("LIBIDC.dat",ios::out);
    outfile<<id;
    outfile.close();
            
    gotoxy(29,21);
    cout<<"[! ISSUED SUCCESFULLY !]";
    getch();
	Library(); 
	      }
            if(y==22)
            {
                Library();
            }
        }
   }
   
    MenuOption("ISSUE",35,17);
    if(y==22)
    Cursor(x,y);
	
	if(y!=22)
	Cursor(x-4,y);
    
	if(y==17)
    Cursor(x+19,y);
        
        if(cch=='A' || cch=='a' || cch=='\\' )
        if(x==15 && y==22)
        {
            Library();
        }
     gotoxy(0,24);
    cch=getch();
}

}

int IssuedBook()
{
	system("cls");
	int id,idc=1;
    
	ifstream infile; 
    infile.open("LIBIDC.dat",ios::in); 
    infile >>id;  
    infile.close();
    int x=20,y=6;
    char cch,d=224;
   Frame(79,25,": ISSUED BOOK :","PREVIOUS PAGE","NEXT PAGE");   
    UFrame(49,13,"ISSUED BOOK","","",15,5,0);  
 
    char  sn[100],bn[100],doi[100],dor[100];
	  
	
      while(true)
{
    if(cch!=d)
    {
  
    if(cch=='K')
    {
    	if(idc>1)
    	--idc;
    }
    
    if(cch=='M')
    {        
    	if(idc<id)
    	++idc;
    } 
        if(cch=='a' || cch=='A')
        {       
            Library();
        }
   }
   
     Cursor(30,19);
     Cursor(26+17,19);
   
       ifstream infile; 
           infile.open("LIB.info",ios::in); 
            int i,idn,h=idc;
		for(i=1;i<=idc;i++)
		{
	     infile>>idn;
         infile>>sn;
         infile>>bn;
         infile>>doi;
         infile>>dor;	
		}
         
    
	gotoxy(25-4,7);
    cout<<"ID             : "<<idc<<"    [ Max 3 Digits ]";
    gotoxy(25-4,9);
    cout<<"Student's Name : "<<sn<<"                ";
    gotoxy(25-4,11);
    cout<<"Book's Name    : "<<bn<<"                ";
    gotoxy(25-4,13);
    cout<<"Issued Date    : "<<doi<<"                ";
    gotoxy(25-4,15);
    cout<<"Return Date    : "<<dor<<"               ";
    MenuOption("BACK",35-2,19);    
    gotoxy(0,25);
    cch=getch();

}
}

int ReturnBook() 
{
	
}

int Library()
{
 	int c=3;
    char cch,d=224,q[50]=" : LIBRARY : ";
    Frame(79,25,q,"O","O");
    MenuOption("ISSUE BOOK",32,3);  
    MenuOption("ISSUED BOOK",32,8);     
    MenuOption("COURSES",32,13);
    MenuOption(":BACK:",32,18);

   while(true)
   {
    if(cch!=d)
{
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        IssueBook();
    }
    
     if(cch=='a' || cch=='A')
    {
        
        if(c==8)
        IssuedBook();    
    }
    
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        Courses();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        AdminMenu();
    }
       
    
    if(cch=='P')
    {
        if(c>=18)
        Library();
        
		c+=5;
    }
    
    if(cch=='H')
    {
        if(c>=5)
        c-=5;
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
    }   
    Cursor(28,c);
    if(c==3)
    {
        MenuOption("ISSUE BOOK",32,3);
        Cursor(52,c);
    }
      
    
    if(c==8)
    {
      MenuOption("ISSUED BOOK",32,8);
      Cursor(52,c);  
    }
        
    
    if(c==13)
    {
      MenuOption("COURSES",32,13); 
      Cursor(52,c);  
    }
    
    
    if(c==18)
    {
      MenuOption(":BACK:",32,18);
      Cursor(52,c);
    }
    
    }cch=getch();
}
}
int two()
{system("cls");
    MenuOption("PROGRAMMING IN C",25,1);
    cout<<"Aptech's Programming in C course trains you to develop software applications using C language. \nThe course will provide you complete understanding of the programming logic & help you build\n a strong base in this in-demand IT language.\n\n\nCourse covers :      Data types & operators\n                     Switch & if-else statements\n	                 Implementing Loops, Array Handling & Use of Pointers\n	                 Defining & Using Functions, Storage Classes & Structures in C\n\nPractice sessions :  Course duration\n	                 This is an 80-hour course.\n\nEligibility :        IT Students/ Engineers/ Professionals/\n	                 Anyone with Knowledge of Computer Fundamentals\n\nCourse Duration:     1 months*\n\nFee range:	         2,000 - 4,000**\n";
getch();system("cls");
    Courses();
}
int three()
{
    system("cls");
    MenuOption("PROGRAMMIG IN C++",25,1);
    cout<<"Gain Expertise in Working with C++ & writing Technically Sound Code.\n\nCourse Highlights:  Understanding of programming logic\n                	Learn OOPS( Object oriented programming) concepts\n		            Understand classes & objects, abstraction, inheritance & polymorphism\n		            Learn & apply file handling, operator overloading & functions\n\nCourse Covers:      Programming with C++\n\nEligibility:        Anyone familiar with basic programming concepts\n\nCourse Duration:    32 hours\n\nFee range:      	2,000 - 4,000**\n";
getch();system("cls");
    Courses();
}
int four()
{
    system("cls");
    MenuOption("JAVA PROGRAMMING",25,1);
    cout<<"Java is used to build applications and platforms for a number of devices, including computers, \nlaptops, gaming consoles and smartphones.It is one of the most popular programming languages\nused to create web applications and platforms.\nWith the course, you will learn the core language features and Application Programming \nInterfaces (API) that you can use to design object-oriented applications with Java SE8.\n\nCourse details:     This course gives you quick training in:\n   	                Fundamentals of Java\n	                Object Oriented Programming with Java\n\nEligibility:        Undergraduates/ graduates/ working professionals/ engineers\n\nJob opportunities:  On completing this program,\n	                you can build a successful career as a Java Programming\n\nFee range :         7,800 - 13,000*\n\nCourse duration:    3 Month*\n";
getch();
system("cls");
    Courses();
}
int five()
{
    system("cls");
    MenuOption("EMBEDDED PROGRAMMING",25,1);
    cout<<"Embedded programming is basic for any system to work properly.\nIt is important for an embedded programmer to be familiar with the programming interface of the systems.\n\nIt Includes:	    Introduction to embedded systems\n	                Programming embedded systems\n\nEligibility:		Undergraduates/ graduates/ working professionals/ engineers\n\nJob opportunities:	On completing this program, you can build a successful career as:\n		            Embedded Systems Programmer\n\nFee Range:	        14,800 – 25,000*\n\nCourse duration:	Embedded programming is a 3-month* course. \n		            Classes are typically held 2 hours a day/ 3 days a week.\n";
getch();
system("cls");
    Courses();
}
int six()
{
    system("cls");
    MenuOption("ASP.NET MVC",25,1);
    cout<<"Learn to develop advanced ASP.NET Model View Controller (MVC) applications \nusing .NET Framework 4.5 tools and technologies. ASP.Net MVC training in \nBangalore focuses on coding activities that enhance the performance and \nscalability of the website application.\n\nCourse Highlights:     Mapped to global certification MCSD:    \n                       Developing ASP.Net 4.5 MVC Web Applications\n			           Microsoft official curriculum\n			           Focus on coding to develop the web application\n			           Certified Trainer\n\nCourse Covers:		   .NET Framework 4.5 tools & technologies\n\nEligibility:           Engineering/IT students, working professional – Web developers\n\nPrerequisite:          Programming in HTML5 with JavaScript and CSS3\n\nDuration:		       2 months*\n\nFee Range:  		   7,000 – 11,600*\n";
getch();
system("cls");
    Courses();
}
int seven()
{
    system("cls");
    MenuOption("SQL & MySQL",25,1);
    cout<<"Become an SQL & data management expert.\nLearn fundamentals of SQL Server platform and its major tools.\n\nEligibility:         Undergraduates/ graduates/ \n                     working professionals/ engineers\n\nJob opportunities:   On completing an SQL & MySQL course,\n                     you can build a successful career as:\n                	 Database developer\n		             PHP programmer\n	                 Python developer\n		             Drupal developer\n		             Magento developer\n\nCourse Duration:     2 months*\n\nFee range:	         7,000 - 10,000**\n";
getch();
system("cls");
    Courses();
}
int eight()
{
    system("cls");
    MenuOption("RED HAT",25,1);
    cout<<"Red Hat is one of the biggest providers of open-source software.\nGet the required skills to become a Red Hat professional.\n\nTerm 1:  Fundamentals of Red Hat system administrationInstall  \nconfigure Red Hat Enterprise Linux 7\n\nTerm 2:  Manage & maintain Red Hat Enterprise Linux 7Red Hat\nsecurity administration\n\nJob opportunities :	On completing this course, you can become:\n		            System administratorSystem engineer\n\nEligibility:		IT undergraduates & graduates/\n		            engineers/ working professionals\n\nCourse Duration:	4 months*\n\nFee range:	        4000 - 13,000**\n";
getch();
system("cls");
    Courses();

}

int DelA()
{
    
    char e;
    system("cls");
    gotoxy(30,12);
    cout<<" SURE ? [Y/N]";
    e=getch();
    if(e=='y'||e=='Y')
    {
        ofstream outfile;
    outfile.open("ACre.cre",ios::out);
    outfile.close();
    ofstream utfile;
    utfile.open("AIDC.dat",ios::out);
    int a=0;
    utfile<<a;
    utfile.close();
    MainMenu();
    }
    if(e=='N' || e=='n')
    AdminMenu();
       
}
int DelS()
{
    
    char e;
    system("cls");
    gotoxy(30,12);
    cout<<" SURE ? [Y/N]";
    e=getch();
    if(e=='y'||e=='Y')
    {
        ofstream outfile;
    outfile.open("SCre.cre",ios::out);
    outfile.close();
    ofstream utfile;
    utfile.open("SIDC.dat",ios::out);
    int a=0;
    utfile<<a;
    utfile.close();
    MainMenu();
    }
    if(e=='N' || e=='n')
    StudentMenu();
       
}

int AboutA()
 {
     system("cls");
     cout<<"________$$$$_______________\n_______$$__$_______________\n_______$___$$______________\n_______$___$$______________\n_______$$___$$_____________\n________$____$$____________\n________$$____$$$__________\n_________$$_____$$_________\n_________$$______$$________\n__________$_______$$_______\n____$$$$$$$________$$______\n__$$$_______________$$$$$$\n_$$____$$$$____________$$$\n_$___$$$__$$$____________$$\n_$$________$$$____________$\n__$$____$$$$$$____________$\n__$$$$$$$____$$___________$\n__$$_______$$$$___________$\n___$$$$$$$$$__$$_________$$\n____$________$$$$_____$$$$\n____$$____$$$$$$____$$$$$$\n_____$$$$$$____$$__$$\n_______$_____$$$_$$$\n________$$$$$$$$$$\n";
    getch();
    system("cls");
    AdminMenu(); 
}
int AboutS()
 {
     system("cls");
     cout<<"________$$$$_______________\n_______$$__$_______________\n_______$___$$______________\n_______$___$$______________\n_______$$___$$_____________\n________$____$$____________\n________$$____$$$__________\n_________$$_____$$_________\n_________$$______$$________\n__________$_______$$_______\n____$$$$$$$________$$______\n__$$$_______________$$$$$$\n_$$____$$$$____________$$$\n_$___$$$__$$$____________$$\n_$$________$$$____________$\n__$$____$$$$$$____________$\n__$$$$$$$____$$___________$\n__$$_______$$$$___________$\n___$$$$$$$$$__$$_________$$\n____$________$$$$_____$$$$\n____$$____$$$$$$____$$$$$$\n_____$$$$$$____$$__$$\n_______$_____$$$_$$$\n________$$$$$$$$$$\n";
    getch();
    system("cls");
    StudentMenu(); 
}
int Exit()
{
    char e;
    system("cls");
    gotoxy(30,12);
    cout<<" SURE ? [Y/N]";
    e=getch();
    if(e=='y'||e=='Y')
    {
     ThankYou();
      exit(1); 
    } 
    if(e=='N' || e=='n')
    MainMenu();
    
}
int MenuOption(char ch[20],int x,int y)
{
	int i;
	char a=201,b=187,c=200,d=188,e=205,f=204,g=185;
	gotoxy(x,y);
    cout<<a;
	for(i=1;i<strlen(ch)+3;i++)
	cout<<e;
	cout<<b;
    gotoxy(x,y+1);
	cout<<f<<" "<<ch<<" "<<g;
	gotoxy(x,y+2);
	cout<<c;
	for(i=1;i<strlen(ch)+3;i++)
	cout<<e;
	cout<<d;
	cout<<endl;
}

int Cursor(int x,int y)
{
  
    char a=153;
      
     
    
      gotoxy(x-2,y+1);
    cout<<" |"<<a<<"|";
    cout<<"\n";
      
     
}


int StudentLogin()
{
    int x=29,y=15;
         
     char cch,d=224,un[50],pass[50];
     int id;
    Frame(79,25,": STUDENT LOGIN :","MAIN MENU","REGISTER");   
    gotoxy(31,9);
    cout<<"ID : ___";
    gotoxy(25,11);
    cout<<"Username : _______________";
    gotoxy(25,13);
    cout<<"Password : _______________";
    MenuOption("LOGIN",35,15);
    
    gotoxy(36,9);
        cin>>id;

    gotoxy(36,11);
        cin>>un;
    
    gotoxy(36,13);
        cin>>pass;
    
      while(true)
{
        
    if(cch!=d)
    {
  
    if(cch=='P' || cch=='K')
    {
        x=15;y=22;
        gotoxy(62,23);
        cout<<"   ";
        gotoxy(28,16);
        cout<<"   ";
        
        
    }
    if(cch=='M' )
    {
        x=63;y=22;
        gotoxy(14,23);
        cout<<"   ";
        gotoxy(28,16);
        cout<<"   ";
    }
    if(cch=='H')
    {
        x=30;y=15;
        
        gotoxy(14,23);
        cout<<"   ";
        gotoxy(62,23);
        cout<<"   ";
        
    }
    
     
    
    MenuOption("LOGIN",35,15);
    
     Cursor(x,y);
        
        if(cch=='a' || cch=='A')
        if(x==15 && y==22)
        {
            MainMenu();
        }
        
        if(cch=='A' || cch=='a')
        if(x==63 && y==22)
        {
            RegisterOption();
        }
         if(cch=='A' || cch=='a')
         if(y==15)
        {
    
           ifstream infile; 
           infile.open("SCre.cre",ios::in); 
            int j,h=id;
         char unc[100],passc[100];
        for(j=1;j<=(h-1)*5;j++)
             {
             infile>>unc;  
             }
          if(h==1)
            {
            for(j=1;j<=3;j++)
             infile>>unc;
             infile>>unc;
             infile>>passc;
            }
             for(j=1;j<=3;j++)
             infile>>unc;
            infile>>unc;
            infile>>passc;
            
            if(strcmp(un,unc)==0)
            {
            if(strcmp(pass,passc)==0)
            {
            gotoxy(28,19);
            cout<<"[---Login Succesful---]";
            infile.close();
            StudentMenu();
            }
            else
            {
            gotoxy(28,19);
            cout<<"[---Login Unsuccesful---]";
            getch();
            infile.close();
            StudentLogin();
            
            }
            }
            else
            {
            gotoxy(28,19);
            cout<<"[---Login Unsuccesful---]";
            getch();
            infile.close();
            StudentLogin();
            }
            infile.close();
               
             }
        
    }
    gotoxy(0,24);
    cch=getch();
    
}
}
int RegistrationS()
{
    int x=20,y=6;
         
     char cch,d=224,fn[100],ln[100],un[100],pass[100];
     int id;
    Frame(79,25,": STUDENT REGISTRATION :","BACK","0");   
    gotoxy(25,7);
    cout<<"ID         :     [ Max 3 Digits ]";
    gotoxy(25,9);
    cout<<"First Name :                 ";
    gotoxy(25,11);
    cout<<"Last Name  :                 ";
    gotoxy(25,13);
    cout<<"Username   :                 ";
    gotoxy(25,15);
    cout<<"Password   :                 ";
    MenuOption("REGISTER",35,17);
    MenuOption("---[ MAX - 15 Characters | [E]Enter | No Space | [A] To Accept ]---",3,3);
   
    ifstream infile; 
   infile.open("SIDC.dat",ios::in); 
   infile >>id;  
   infile.close();
   ++id;
 cout<<id;
    gotoxy(38,7);
    cout<<id;
      while(true)
{
        
    if(cch!=d)
    {
  
    if(cch=='P' || cch=='K')
    {
        if(y==17)
        {
         x=14;y=22;
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
         gotoxy(19,15);
         cout<<"   ";
         gotoxy(30,18);
         cout<<"   ";
         gotoxy(30+19,18);
         cout<<"   ";
        }
        if(y==14)
        {
         x=31;y=17;  
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
         gotoxy(19,15);
         cout<<"   ";
        }
        if(y<14)
        y+=2;
        if(y==8)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         }
        if(y==10)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         }
        if(y==12)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
        }
        if(y==14)
        {     
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
        }
    }
    
    if(cch=='H')
    {
        
        if(y<=14)
        {
            y-=2;
        } 
        if(y==17)
        {
            x=20;
            y=14;
            gotoxy(30,18);
            cout<<"   ";
            gotoxy(30+19,18);
            cout<<"   ";
        }
       
        if(y==22)
        {
            x=31;
            y=17;
            gotoxy(14-1,22+1);
            cout<<"   ";
        }        
        if(y==12)
        {
            
            gotoxy(19,15);
            cout<<"   ";
        }
        if(y==6)
        {
           gotoxy(19,9);
            cout<<"   "; 
        }
        if(y==10)
        {
            
            gotoxy(19,13);
            cout<<"   ";
        }
        
        if(y==8)
        {
            
            gotoxy(19,11);
            cout<<"   ";
        }
        if(y<7)
        y=6;
        
    } 
        if(cch=='a' || cch=='A')
        {       
            if(y==8)
            {
                gotoxy(38,9);
                cin>>fn;             
            }
            
            if(y==10)
            {
                gotoxy(38,11);
                cin>>ln;             
            }
            
            if(y==12)
            {
                gotoxy(38,13);
                cin>>un;             
            }
            
            if(y==14)
            {
                gotoxy(38,15);
                cin>>pass;             
            }
            if(y==17)
            {
                ofstream outfile;
    outfile.open("SCre.cre",ios::app);
    outfile<<id<<" "<<fn<<" "<<ln<<" "<<un<<" "<<pass<<" "<<endl;
    outfile.close();
    ofstream outfileid;
    outfile.open("SIDC.dat",ios::out);
    outfile<<id;
    outfile.close();
            
    gotoxy(29,21);
    cout<<"[! REGISTRAION SUCCESS !]";
    getch();
    RegisterOption();
        }
            if(y==22)
            {
                RegisterOption();
            }
        }
   }
   
    MenuOption("REGISTER",35,17);
    
     Cursor(x,y);
     if(y==17)
     Cursor(x+19,y);
        
        if(cch=='A' || cch=='a' || cch=='\\' )
        if(x==15 && y==22)
        {
            RegisterOption();
        }
     gotoxy(0,24);
    cch=getch();
}
}


int RegistrationA()
{
    int x=20,y=6;
         
     char cch,d=224,fn[100],ln[100],un[100],pass[100];
     int id;
    Frame(79,25,": ADMIN REGISTRATION :","BACK","0");   
    gotoxy(25,7);
    cout<<"ID         :     [ Max 3 Digits ]";
    gotoxy(25,9);
    cout<<"First Name :                 ";
    gotoxy(25,11);
    cout<<"Last Name  :                 ";
    gotoxy(25,13);
    cout<<"Username   :                 ";
    gotoxy(25,15);
    cout<<"Password   :                 ";
    MenuOption("REGISTER",35,17);
    MenuOption("---[ MAX - 15 Characters | [E]Enter | No Space | [A] To Accept ]---",3,3);
   
    ifstream infile; 
   infile.open("AIDC.dat",ios::in); 
   infile >>id;  
   infile.close();
   ++id;
 cout<<id;
    gotoxy(38,7);
    cout<<id;
      while(true)
{
        
    if(cch!=d)
    {
  
    if(cch=='P' || cch=='K')
    {
        if(y==17)
        {
         x=14;y=22;
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
         gotoxy(19,15);
         cout<<"   ";
         gotoxy(30,18);
         cout<<"   ";
         gotoxy(30+19,18);
         cout<<"   ";
        }
        if(y==14)
        {
         x=31;y=17;  
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
         gotoxy(19,15);
         cout<<"   ";
        }
        if(y<14)
        y+=2;
        if(y==8)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         }
        if(y==10)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         }
        if(y==12)
        {
             
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
        }
        if(y==14)
        {     
         gotoxy(19,7);
         cout<<"   ";
         gotoxy(19,9);
         cout<<"   ";
         gotoxy(19,11);
         cout<<"   ";
         gotoxy(19,13);
         cout<<"   ";
        }
    }
    
    if(cch=='H')
    {
        
        if(y<=14)
        {
            y-=2;
        } 
        if(y==17)
        {
            x=20;
            y=14;
            gotoxy(30,18);
            cout<<"   ";
            gotoxy(30+19,18);
            cout<<"   ";
        }
       
        if(y==22)
        {
            x=31;
            y=17;
            gotoxy(14-1,22+1);
            cout<<"   ";
        }        
        if(y==12)
        {
            
            gotoxy(19,15);
            cout<<"   ";
        }
        if(y==6)
        {
           gotoxy(19,9);
            cout<<"   "; 
        }
        if(y==10)
        {
            
            gotoxy(19,13);
            cout<<"   ";
        }
        
        if(y==8)
        {
            
            gotoxy(19,11);
            cout<<"   ";
        }
        if(y<7)
        y=6;
        
    } 
        if(cch=='a' || cch=='A')
        {       
            if(y==8)
            {
                gotoxy(38,9);
                cin>>fn;             
            }
            
            if(y==10)
            {
                gotoxy(38,11);
                cin>>ln;             
            }
            
            if(y==12)
            {
                gotoxy(38,13);
                cin>>un;             
            }
            
            if(y==14)
            {
                gotoxy(38,15);
                cin>>pass;             
            }
            if(y==17)
            {
                ofstream outfile;
    outfile.open("ACre.cre",ios::app);
    outfile<<id<<" "<<fn<<" "<<ln<<" "<<un<<" "<<pass<<" "<<endl;
    outfile.close();
    ofstream outfileid;
    outfile.open("AIDC.dat",ios::out);
    outfile<<id;
    outfile.close();
            
    gotoxy(29,21);
    cout<<"[! REGISTRAION SUCCESS !]";
    getch();
    RegisterOption();
        }
            if(y==22)
            {
                RegisterOption();
            }
        }
   }
   
    MenuOption("REGISTER",35,17);
    
     Cursor(x,y);
     if(y==17)
     Cursor(x+19,y);
        
        if(cch=='A' || cch=='a' || cch=='\\' )
        if(x==15 && y==22)
        {
            RegisterOption();
        }
     gotoxy(0,24);
    cch=getch();
}
}
int AdminLogin()
{
    int x=29,y=15;
         
     char cch,d=224,un[50],pass[50];
     int id;
    Frame(79,25,": ADMIN LOGIN :","MAIN MENU","REGISTER");   
    gotoxy(31,9);
    cout<<"ID : ___";
    gotoxy(25,11);
    cout<<"Username : _______________";
    gotoxy(25,13);
    cout<<"Password : _______________";
    MenuOption("LOGIN",35,15);
    
    gotoxy(36,9);
        cin>>id;

    gotoxy(36,11);
        cin>>un;
    
    gotoxy(36,13);
        cin>>pass;
    
      while(true)
{
        
    if(cch!=d)
    {
  
    if(cch=='P' || cch=='K')
    {
        x=15;y=22;
        gotoxy(62,23);
        cout<<"   ";
        gotoxy(28,16);
        cout<<"   ";
        
        
    }
    if(cch=='M' )
    {
        x=63;y=22;
        gotoxy(14,23);
        cout<<"   ";
        gotoxy(28,16);
        cout<<"   ";
    }
    if(cch=='H')
    {
        x=30;y=15;
        
        gotoxy(14,23);
        cout<<"   ";
        gotoxy(62,23);
        cout<<"   ";
        
    }
    
     
    
    MenuOption("LOGIN",35,15);
    
     Cursor(x,y);
        
        if(cch=='a' || cch=='A')
        if(x==15 && y==22)
        {
            MainMenu();
        }
        
        if(cch=='A' || cch=='a')
        if(x==63 && y==22)
        {
            RegisterOption();
        }
        
         if(cch=='A' || cch=='a')
         if(y==15)
        {
    
           ifstream infile; 
           infile.open("ACre.cre",ios::in); 
            int j,h=id;
         char unc[100],passc[100],ln[50],fn[50];
        for(j=1;j<=(h-1)*5;j++)
             {
             infile>>unc;  
             }
          if(h==1)
            {
            for(j=1;j<=3;j++)
             infile>>unc;
             infile>>unc;
             infile>>passc;
            }
            infile>>fn;
            infile>>fn;
             infile>>ln;
             infile>>unc;
            infile>>unc;
            infile>>passc;
            
            if(strcmp(un,unc)==0)
            {
            if(strcmp(pass,passc)==0)
            {
            gotoxy(28,19);
            cout<<"[---Login Succesful---]";
            AdminMenu();
            infile.close();
            }
            else
            {
            gotoxy(28,19);
            cout<<"[---Login Unsuccesful---]";
            //cout<<endl<<unc<<" "<<passc;
            getch();
            infile.close();
            AdminLogin();
            
            }
            }
            else
            {
            gotoxy(28,19);
            cout<<"[---Login Unsuccesful---]";
            getch();
            infile.close();
            AdminLogin();
            }
            
               
             }
        
    }
    gotoxy(0,24);
    cch=getch();
    
}
}
int MainMenu()
{
    int c=3;
    char cch,d=224;
    
    Frame(79,25,": APTECH ERP V.1.1 :","O","O");
    MenuOption("STUDENT LOGIN",32,3);  
    MenuOption("REGISTRATION",32,8);     
    MenuOption("ADMIN LOGIN",32,13);
    MenuOption(":EXIT ERP:",32,18);

   while(true)
   {
    if(cch!=d)
{
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        StudentLogin();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        AdminLogin();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        Exit();
        
    }
    
    if(cch=='a' || cch=='A')
    {
        if(c==8)
        RegisterOption();
    }
    
    if(cch=='P')
    {
        if(c<18)
        c+=5;
    }
    
    if(cch=='H')
    {
        if(c>=5)
        c-=5;
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
    }   
    Cursor(28,c);
    if(c==3)
    {
        MenuOption("STUDENT LOGIN",32,3);
        Cursor(52,c);
    }
      
    
    if(c==8)
    {
      MenuOption("REGISTRATION",32,8);
      Cursor(52,c);  
    }
        
    
    if(c==13)
    {
      MenuOption("ADMIN LOGIN",32,13); 
      Cursor(52,c);  
    }
    
    
    if(c==18)
    {
      MenuOption(":EXIT ERP:",32,18);
      Cursor(52,c);
    }
    
   

 
    }cch=getch();
}}
int Courses()
{
    int c=3;
    char cch,d=224;
    
    Frame(79,25,"MODULES","BACK [B]","1");
    MenuOption("VIDYA NETWORKING",32,3);  
    MenuOption("C PROFRAMMING",32,8);     
    MenuOption("C++ PROGRAMMING",32,13);
    MenuOption("JAVA PROGRAMMING",32,18);

   while(true)
   {
    if(cch!=d)
{
    
    if(cch=='b' || cch=='B')
    AdminMenu();
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        one();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        three();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        four();
    }
    
    if(cch=='a' || cch=='A')
    {
        if(c==8)
       two();
    }
    
    if(cch=='P')
    {
        if(c>17)
        {
            system("cls");
            break;
        }
        c+=5;
    }
    
    if(cch=='H')
    {
        if(c>=5)
        c-=5;
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
        
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
       
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
        
    }   
    Cursor(28,c);
    if(c==3)
    {
        MenuOption("VIDYA NETWORKING",32,3);
    
    }
      
    
    if(c==8)
    {
      MenuOption("C PROGRAMMING",32,8);
      
    }
        
    
    if(c==13)
    {
      MenuOption("C++ PROGRAMMING",32,13); 
      
    }
    
    
    if(c==18)
    {
      MenuOption("JAVA PROGRAMMING",32,18);
    
    }
    
   

 
    }cch=getch();
}
//two
    c=3;
    cch=0;
    Frame(79,25,"MODULES","BACK [B]","2");
    MenuOption("EMBEDDED PROGRAMMING",32,3);  
    MenuOption("ASP.NET MVC",32,8);     
    MenuOption("SQL & MySQL",32,13);
    MenuOption("RED HAT",32,18);
while(true)
   {
    if(cch!=d)
{
    
    
    if(cch=='b' || cch=='B')
    AdminMenu();
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        five();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        five();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        {
        seven();   
        }
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        eight();
    }
    
    if(cch=='a' || cch=='A')
    {
        if(c==8)
        six();
    }
    
    if(cch=='P')
    {
        if(c<18)
        c+=5;
    }
    
    if(cch=='H')
    {
        if(c<5)
        Courses();
        
		c-=5;  
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
    }   
    Cursor(28,c);
    gotoxy(0,0);
    cout<<c;
    if(c==3)
    {
        MenuOption("EMBEDDED PROGRAMMING",32,3);
        
    }
      
    
    if(c==8)
    {
      MenuOption("ASP.NET MVC",32,8);
      
    }
        
    
    if(c==13)
    {
      MenuOption("SQL & MySQL",32,13); 
      
    }
    
    
    if(c==18)
    {
      MenuOption("RED HAT",32,18);
    }

    }cch=getch();
}
}
int AdminMenu2()
{
	 int c=3;
    char cch,d=224,q[50]=" : ADMIN : ";
    Frame(79,25,q,"O","O");
    MenuOption("*ABOUT*",32,3);
   while(true)
   {
    if(cch!=d)
{
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        AboutA();
    }
    
	 
    if(cch=='P')
    {
        if(c>=18)
        AdminMenu2();
    }
    
    if(cch=='H')
    {
		AdminMenu();    
	}
	
	Cursor(52,3);    
	Cursor(23,3);    
    
    }cch=getch();
}}


int AdminMenu()
{
    int c=3;
    char cch,d=224,q[50]=" : ADMIN : ";
    Frame(79,25,q,"O","O");
    MenuOption("AVAIL COURSES",32,3);  
    MenuOption("|DEL A/C|",32,8);     
    MenuOption(":LOGOUT:",32,13);
    MenuOption("LIBRARY",32,18);

   while(true)
   {
    if(cch!=d)
{
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        Courses();
    }
    
     if(cch=='a' || cch=='A')
    {
        
        if(c==8)
        DelA();    
    }
    
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        MainMenu();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        Library();
    }
    
   
    
    if(cch=='P')
    {
        if(c>=18)
        AdminMenu2();
        
		c+=5;
    }
    
    if(cch=='H')
    {
        if(c>=5)
        c-=5;
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
    }   
    Cursor(28,c);
    if(c==3)
    {
        MenuOption("AVAIL COURSES",32,3);
        Cursor(52,c);
    }
      
    
    if(c==8)
    {
      MenuOption("|DEL A/C|",32,8);
      Cursor(52,c);  
    }
        
    
    if(c==13)
    {
      MenuOption(":LOGOUT:",32,13); 
      Cursor(52,c);  
    }
    
    
    if(c==18)
    {
      MenuOption("LIBRARY",32,18);
      Cursor(52,c);
    }
    
   

 
    }cch=getch();
}}
int StudentMenu()
{
    int c=3;
    char cch,d=224,q[50]=" : STUDENT : ";
    Frame(79,25,q,"O","O");
    MenuOption("AVAIL COURSES",32,3);  
    MenuOption("|DEL A/C|",32,8);     
    MenuOption(":LOGOUT:",32,13);
    MenuOption("*ABOUT*",32,18);

   while(true)
   {
    if(cch!=d)
{
    if(cch=='a' || cch=='A')
    {
        if(c==3)
        Courses();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==13)
        MainMenu();
    }
    if(cch=='a' || cch=='A')
    {
        if(c==18)
        AboutS();
    }
    
    if(cch=='a' || cch=='A')
    {
        
        if(c==8)
        {
            DelS();    
        }
    }
    if(cch=='P')
    {
        if(c<18)
        c+=5;
    }
    
    if(cch=='H')
    {
        if(c>=5)
        c-=5;
    }
    if(c==3)
    {
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
    
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==8)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==13)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,19);
        cout<<"     ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,19);
        cout<<"     ";
    }   if(c==18)
    {
        gotoxy(26,4);
        cout<<"     ";
        
        gotoxy(26,9);
        cout<<"     ";
        
        gotoxy(26,14);
        cout<<"    ";
        
        gotoxy(50,4);
        cout<<"     ";
        
        gotoxy(50,9);
        cout<<"     ";
        
        gotoxy(50,14);
        cout<<"     ";
        
    }   
    Cursor(28,c);
    if(c==3)
    {
        MenuOption("AVAIL COURSES",32,3);
        Cursor(52,c);
    }
      
    
    if(c==8)
    {
      MenuOption("|DEL A/C|",32,8);
      Cursor(52,c);  
    }
        
    
    if(c==13)
    {
      MenuOption(":LOGOUT:",32,13); 
      Cursor(52,c);  
    }
    
    
    if(c==18)
    {
      MenuOption("*ABOUT*",32,18);
      Cursor(52,c);
    }
    
   

 
    }cch=getch();
}}
int RegisterOption()
{
    
    int x=26,y=8;
         
     char cch,d=224,un[15],pass[15],id[3];
    Frame(79,25,": REGISTRATION :","BACK","0");   
    gotoxy(31,9);
    MenuOption("STUDENT ACCOUNT",30,8);
    MenuOption("ADMIN ACCOUNT",31,12);
    
    
    
      while(true)
{
        
    if(cch!=d)
    {
     
    if(cch=='P' || cch=='K')
    {
        y+=4;
        if(y==12)
        {
           gotoxy(13,23);
        cout<<"   ";
         gotoxy(26+25,9);
        cout<<"   ";
        gotoxy(25,9);
        cout<<"   "; 
        }
        if(y>13)
        {
        gotoxy(26+25,9);
        cout<<"   ";
        gotoxy(25,9);
        cout<<"   ";
        gotoxy(25,13);
        cout<<"   ";
        gotoxy(25+26,13);
        cout<<"   ";
            x=14;y=22;
        }
    }
    
    if(cch=='H')
    {
        if(y==12 )
        {
        y-=4;x=26;
        gotoxy(25,13);
        cout<<"   ";
        gotoxy(25+26,13);
        cout<<"   ";
        gotoxy(13,23);
        cout<<"   ";
            
        }if(y>12)
        {
        y=12;x=26;
        gotoxy(13,23);
        cout<<"   ";
        gotoxy(26+25,9);
        cout<<"   ";
        gotoxy(25,9);
        cout<<"   ";
        }
        
       
        if(y<8)
        y=8;
        
    }
    
    
    if(y==8 && (cch=='a' || cch=='A')) 
    RegistrationS();
    if(y==12 && (cch=='a' || cch=='A')) 
    RegistrationA();
    if(y==22 && (cch=='a' || cch=='A')) 
    MainMenu();
    gotoxy(0,26);
    
    
     Cursor(x,y);
     if(y<14)
     Cursor(x+26,y);   
        if(cch=='A' || cch=='a' || cch=='\\' )
        if(x==15 && y==22)
        {
            MainMenu();
        }
        
        // Two More
    }
     gotoxy(0,24);
    cch=getch();
   
}
}
        
};


int main()
{
 Working WO;
 WO.MainMenu();
};
