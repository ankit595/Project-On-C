#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void edit_score(float , char []);
int main()
{
	 int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
	else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);
	printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
    printf("\n    C knowledge. You are eligible to play the game if you give atleast 5");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=8;i++)
     {
    system("cls");
     r1=i;

	 switch(r1)
		{
		case 1:
		printf("\n\nWho is father of C Language?");
		printf("\n\nA.Bjarne Stroustrup\t\tB.James A. Gosling\n\nC.Dennis Ritchie\t\tD.Dr. E.F. Codd");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Dennis Ritchie");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nC Language developed at _________?");
		printf("\n\nA.AT & T's Bell Laboratories of USA in 1972\t\tB.AT & T's Bell Laboratories of USA in 1970\n\nC.Sun Microsystems in 1973\t\t\t\tD.Cambridge University in 1972");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.AT & T's Bell Laboratories of USA in 1972");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nC programs are converted into machine language with the help of?");
		printf("\n\nA. An Editor\t\t\tB.A compiler\n\nC.An operating system\t\tD.None of these.");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.A compiler");
		       getch();
		       break;}
		case 4:
		printf("\n\n\nC was primarily developed as?");
		printf("\n\nA.System programming language\t\tB.General purpose language\n\nC.Data processing language\t\tD.None of the above.");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.System programming language");
		       getch();
		       break;}
		case 5:
        printf("\n\n\nStandard ANSI C recognizes _______ number of keywords?");
        printf("\n\nA.30\t\tB.32\n\nC.36\t\tD.24");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.32");
		       getch();
		       break;}
		case 6:
		printf("\n\n\nA C varible cannot start with?");
		printf("\n\nA.A number\t\t\tB.A special symbol other than underscore\n\nC.Both of the above\t\tD.An alphabet");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Both of the above");
		       getch();
		       break;}	
		case 7:
		printf("\n\n\nWhich one of the following is not a valid identifier?");
		printf("\n\nA.cprogram1\t\tB._cprogram\n\nC.1cprogram\t\tD.c_program");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.1cprogram");
		       getch();
		       break;}
		case 8:
		printf("\n\n\nWhich of the following is not a correct variable type?");
		printf("\n\nA.int\t\tB.char\n\nC.float\t\tD.real");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.real");
		       getch();
		       break;}}
		       }
		       
	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}    
	test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{  	  
		case 1:
		printf("\n\n\n#include<stdio.h>\nmain()\n{\n  for(1;2;3)\n  printf(\"Hello\");\n}");
		printf("\n\nA.Infinite loop\t\tB.Prints \"Hello\"once\n\nC.No output\t\tD.Compile error");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer isA.Infinite loop");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n#include<stdio.h>\nmain()\n{\n  int a[] = {1,2}, *p = a;\n  printf(\"%%d\", p[1]);\n}");
		printf("\n\nA.1\t\t\tB.2\n\nC.Compile error\t\tD.Runtime error");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.2");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n#include<stdio.h>\nmain()\n{\n  int x;\n  float y;\n  y = x = 7.5;\n  printf(\"x=%%d y=%%f\", x, y);\n}");
		printf("\n\nA.7 7.000000\t\tB.7 7.500000\n\nC.5 7.500000\t\tD.5 5.500000");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.7 7.000000");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nStatement 1: char *p;\n\nStatement 2: p = (char*) malloc(100);");
		printf("\n\nA.char p = *malloc(100)\t\t\tB.char *p = (char*)malloc(100)\n\nC.char *p = (char)malloc(100)\t\tD.None of the above.");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.char *p = (char*)malloc(100)");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nHow many times c_program is printed?\nint main()\n{\n  int a = 0;\n  while(a++);\n  {\n   printf(\"c_program\");\n  }\n  return 0;\n}");
		printf("\n\nA.0 time\t\tB.1 time\n\nC.compile error\t\tD.infinte times");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is 1 time");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nHow many times c_program is printed?\nint main()\n{\n  int a = 0;\n  while(a++)\n  {\n   printf(\"c_program\");\n  }\n  return 0;\n}");
		printf("\n\nA.Nothing will print\t\tB.0 time\n\nC.1 time\t\t\tD.Infinite times");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nothing will print");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nHow many times c_program is printed?\nint main()\n{\n  int a = 0;\n  while(a==0)\n  {\n   printf(\"c_program\");\n  }\n  return 0;\n}");
		printf("\n\nA.Nothing will print\t\tB.0 time\n\nC.1 time\t\t\tD.Infinite times");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Infinite times");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhat is output of below program?\nint main()\n{\n  int i,j,count;\n  count=0;\n  for(i=0; i<5; i++);\n  {\n     for(j=0;j<5;j++);\n     {\n      count++;\n     }\n  }\n  printf(\"%%d\",count);\n  return 0;\n}");
		printf("\n\nA.55\t\tB.54\n\nC.1\t\tD.0");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.1");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is output of below program?\nint main()\n{\n  int i,j;\n  for(i = 0,j=0;i<5;i++)\n  {\n    printf(\"%%d%%d--\",i,j);\n  } \n  return 0;\n}");
		printf("\n\nA.0--01--12--23--34--\t\tB.00--10--20--30--40--\n\nC.Compilation Error\t\tD.00--01--02--03--04--");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.00--10--20--30--40--");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhat is output of below program??\nint main()\n{\n  for(; ;);\n  for(; ;);\n    printf(\"Hello\");\n  return 0;\n}");
		printf("\n\nA.Compilation Error\t\tB.Runtime Error\n\nC.Nothing is printed\t\tD.Hello is printed infinite times");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Nothing is printed");getch();
			   goto score;
			   break;}}}  
			    
	score:
    system("cls");
	score=(float)countr*10;
	if(score>0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You scored %.2f points",score);goto go;}

	 else if(score==100.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A GENIUS!!!!!!!!!");
	    printf("\t\t Thank You!!");
	}
	 else
    {
	 printf("\n\n\t******** YOU HAVE GOOD KNOWLEDGE ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}


void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}	   


