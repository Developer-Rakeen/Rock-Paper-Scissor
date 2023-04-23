#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
int s1j=0,s2j=0,d1j=0,d2j=0,j=1,th=9,thr=3;
void dot1()
{
	if(d1j%2==0)
	{
		printf(".");
	}
	else
	{
		printf("...");
	}
	d1j++;
}
void dot2()
{
	if(d2j%2==0)
	{
		printf("..");
	}
	else
	{
		printf("....");
	}
	d2j++;
}
void strike1()
{
	if(s1j%2==0&&j==1)
	{
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	}
	else if(s1j%2==0)
	{
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                                                                                                             %c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	}
	else
	{
		printf("                                                                                                %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	}
	s1j++;
	j++;
}
void strike2()
{
	if(s2j%2==0)
	{
		printf("                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	}
	else
	{
		printf("%c%c%c%c                                                                                                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	}
	s2j++;
}

int main()
{
	char pl[30],wrong[1000];
	int u=0,len=1,lower=30,upper=70,in,iCounter,mb,i=1,net,p=100,a=1,t,j,l,ch,computer,comr,comp,coms,compoint,ppoint,w,temp,star,again,d,df,r,g,point=0,z=0,use=0,y,e=0;
	t3:
	system("cls");
	system("color 1F");
	srand(time(NULL));
	if(u==0)
	{
		mb=(rand()%(upper-lower+1))+lower;	
	}
	printf("[Maximize the screen]\n\n\n\n\n\t\t\t\t\t\t\t\tRPS(Rock Paper Scissor) game installation size is %d mb.\n\n\n",mb);
	printf("\n\n\n\n\t\t\t\t\t\t\t\t\tDo you want to install it?\n\n\t\t\t\t\t\t\t\t\t\t1.Yes\n\n\t\t\t\t\t\t\t\t\t\t2.No\n\n\t\t\t\t\t\t\t\t\t\t=");
	if(use==0)
	{
		wrong[z]='0';
	}
	if(in>=1&&in<=2)
	{
    	printf("%d",in);
    }
    else
	{
    	scanf("%s",wrong);
    	len=strlen(wrong);
    }
    if(in<=0||in>2)
    {
    	if(len-2>=0)
    	{
	    	for(y=0;y<256;y++)
    		{
	    		if(wrong[z+(len-2)]==(char)y)
	    		{
	    			wrong[z+(len-1)]='0';
	    		}
	    	}
	    }
    	switch(wrong[z+(len-1)])
		{
			case '1':in=atoi(wrong);iCounter=14;break;
			case '2':exit(0);
			default:use++;printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter 1 or 2.\n");
 	        	    Sleep(2000);
 	        	    u=1;
	           	    goto t3;
		}
    }
	else
	{
		switch(in)
		{
			case 1:iCounter=14;break;
			case 2:exit(0);
			default:printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter 1 or 2.\n");
 	        	    Sleep(2000);
	            	goto t3;
		}
	}
	printf("\n\n\n\nPress 'i' to start the installation....");
    if(getch()!='i')
	{
		printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		Sleep(2000);
		goto t3;
	}
	lower=55,upper=100;
    while(iCounter!=0)
	{
		system("cls");
		system("color A0");
		if(i==thr||i==1)
		{
			srand(time(NULL));
	        net=(rand()%(upper-lower+1))+lower;
	        thr=thr+3;
		}
		printf("                                                                                                                                                {Your Net speed is %d%c}",net,37);
	   	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tInstallation will take %d seconds(%d%c remaining)\n\n",iCounter,p,37);
	   	if(i==13)
	   	{
	   		printf("                                  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	   	}
	   	else if(i==14)
	   	{
	   		printf("                                                                                                                      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	   	}
        else if(i%2!=0)
	   	{
	   		strike1();
	   	}
	   	else
	   	{
	   		strike2();
	   	}
		p=p-i;
	   	i++;
        iCounter--;
	   	Sleep(1000);
	   	lower=64,upper=100;
	}
	while(a!=0)
	{
		t4:
		system("cls");
	    system("color B0");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tPress 'o' to open RPS(Rock Paper Scissor) game....");
	    if(getch()=='o')
	    {
	    	system("cls");
	    }
	    else
	    {
	    	printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		    Sleep(2000);
		    goto t4;
        }
        system("color F0");
    	t=12;
        lower=85,upper=100;
        while(t!=0)
        {
        	if(t==th||t==12)
        	{
	        	srand(time(NULL));
	            net=(rand()%(upper-lower+1))+lower;
	            th=th-3;
	        }
        	printf("                                                                                                                                                {Your Net speed is %d%c}",net,37);
        	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tLoading");
        	if(t%2==0)
        	{
	        	dot1();
	        }
	        else
	        {
        		dot2();
        	}
        	printf("\n\n");
        	if(t==12||t==11)
        	{
	        	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	        }
	        else if(t==10||t==9)
	        {
        		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
        	}
        	else if(t==8||t==7||t==6)
        	{
	        	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	        }
	        else if(t==5||t==4)
	        {
        		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
        	}
        	else
        	{
	        	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
	        }
        	t--;
        	Sleep(460);
        	system("cls");
        }
        system("cls");
        printf("\t\t\t\t\t\t\t\tWelcome to RPS(Rock Paper Scissor) Game!\n\n\n\n");
        printf("Hi everyone.My name is Snither.I will tell you the rules of this game.The rules are:-\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t1|In this game,your opponent will be your own computer.\n\n");
	    printf("\t\t\t\t\t\t\t2|There are 3 difficulties which contains some levels:-\n\n");
	    printf("\t\t\t\t\t\t\t  i)Easy(3 levels).\n\n");
	    printf("\t\t\t\t\t\t\t  ii)Medium(5 levels).\n\n");
	    printf("\t\t\t\t\t\t\t  iii)Hard(10 levels).\n\n");
	    printf("\t\t\t\t\t\t\t3|The winner of one level will achieve 2 points.\n\n");
	    printf("\t\t\t\t\t\t\t4|If you both do the same move,then you both can try again.\n\n");
	    printf("\t\t\t\t\t\t\t5|The player with the most point will be the best player of this game.\n\n");
	    printf("\t\t\t\t\t\t\t6|The player with full points will be the winner of this game.\n\n");
	    printf("\t\t\t\t\t\t\t7|Paper-Rock=Paper,Rock-Scissor=Rock,Paper-Scissor=Scissor;(=)right side is the win move.\n\n");
	    printf("\t\t\t\t\t\t\t8|If you exit from this game it will be deleted because it clears all the data after you exit.\n\n");
	    printf("\t\t\t\t\t\t\t9|Follow the rules.\n\n\n");
	    printf("Enter name:");
	    scanf("%s",pl);
	    t1:
	    last:
	    system("color F0");
	    system("cls");
	    printf("\t\t\t\t\t\t\t\t\t\tDifficulty:-\n\n\n\n");
	    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t1.Easy\n");
    	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t2.Medium\n");
	    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t3.Hard\n\n\n\n\n");
	    printf("Enter your choice:");
	    scanf("%s",wrong);
   		len=strlen(wrong);
   		if(len-2>=0)
   		{
	    	for(y=0;y<256;y++)
    		{
	    		if(wrong[z+(len-2)]==(char)y)
	    		{
	    			wrong[z+(len-1)]='0';
	    		}
	    	}
	    }
    	switch(wrong[z+(len-1)])
		{
			case '1':df=atoi(wrong);d=3;r=d*2;break;
			case '2':df=atoi(wrong);d=5;r=d*2;break;
			case '3':df=atoi(wrong);d=10;r=d*2;break;
			default:printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter 1 , 2 or 3.\n");
 	       	    	Sleep(2000);
	       	   	    goto t1;
		}
	    system("cls");
	    j=3;
	    while(j!=0)
	    {
    		if(j==3)
    		{
		    	system("color 4F");
		    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tReady!");
		    }
		    else if(j==2)
		    {
    			system("color 6F");
		    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSteady!");
    		}
    		else
    		{
		    	system("color 2F");
		    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tGo!!!");
		    }
		    j--;
		    Sleep(1000);
		    system("cls");
    	}
    	l=1,compoint=0,ppoint=0;
    	lower=1,upper=3;
    	while(l!=d+1)
    	{
    		first:
    		system("cls");
    	    system("color DF");
    	    if(df==1)
    	    {
    	    	printf("{Easy}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else if(df==2)
    	    {
    	    	printf("{Medium}\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else
    	    {
    	    	printf("{Hard}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
	    	comr=0,comp=0,coms=0;
	    	srand(time(NULL));
            computer=(rand()%(upper-lower+1))+lower;
            if(computer==1)
            {
            	comr=1;
            }
            else if(computer==2)
            {
            	comp=1;
            }
            else
            {
            	coms=1;
            }
	    	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t1.Rock\n");
	    	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t2.Paper\n");
	    	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t3.Scissor\n\n\n\n\n");
	    	printf("Enter your choice:");
	    	scanf("%s",wrong);
   			len=strlen(wrong);
	   		if(len-2>=0)
   			{
	    		for(y=0;y<256;y++)
    			{
		    		if(wrong[z+(len-2)]==(char)y)
		    		{
	    				wrong[z+(len-1)]='0';
	    			}
		    	}
		    }
    		switch(wrong[z+(len-1)])
			{
				case '1':ch=atoi(wrong);break;
				case '2':ch=atoi(wrong);break;
				case '3':ch=atoi(wrong);break;
				default:printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter 1 , 2 or 3\n");
 		       	    	Sleep(2000);
	    	   	   	    goto first;
			}
	    	system("cls");
	    	if(df==1)
    	    {
    	    	printf("{Easy}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else if(df==2)
    	    {
    	    	printf("{Medium}\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else
    	    {
    	    	printf("{Hard}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
	    	system("color 80");
	    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tRock");
	    	Sleep(470);
	    	system("cls");
	    	if(df==1)
    	    {
    	    	printf("{Easy}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else if(df==2)
    	    {
    	    	printf("{Medium}\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else
    	    {
    	    	printf("{Hard}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
	        system("color F0");
	        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPaper");
	        Sleep(470);
	        system("cls");
	        if(df==1)
    	    {
    	    	printf("{Easy}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else if(df==2)
    	    {
    	    	printf("{Medium}\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else
    	    {
    	    	printf("{Hard}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
	        system("color 90");
	        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tScissor");
	        Sleep(470);
	        t5:
	        system("cls");
	        system("color DF");
	        if(df==1)
    	    {
    	    	printf("{Easy}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else if(df==2)
    	    {
    	    	printf("{Medium}\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
    	    else
    	    {
    	    	printf("{Hard}\t\t\t\t\t\t\t\t\t\tLevel %d\n\n\n\n",l);
    	    }
	        printf("\tYou:-                                                                                                                                           Computer:-\n\n\n");
	    	switch(ch)
	    	{
	    		case 1:if(comp==1)
                       {
                       	   if(point==0)
                       	   {
                  	   		   compoint+=2;
   	                       }
                       	   printf("\tRock                                                                                                                                            Paper");
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t!!Your computer wins!!\n");
                       }
                       else if(coms==1)
                       {
                       	   printf("\tRock                                                                                                                                            Scissor");
					       if(point==0)
                       	   {
                  	   		   ppoint+=2;
   	                       }
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t!!You win!!\n");
                       }
                       else
                       {
                       	   printf("\tRock                                                                                                                                            Rock");
				           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\ttry again.");
                       	   Sleep(1300);
                       	   goto first;
                       }
                       break;
	    		case 2:if(coms==1)
                       {
                       	   printf("\tPaper                                                                                                                                            Scissor");
						   if(point==0)
                       	   {
                  	   		   compoint+=2;
   	                       }
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t!!Your computer wins!!\n");
                       }
                       else if(comr==1)
                       {
                       	   printf("\tPaper                                                                                                                                            Rock");
						   if(point==0)
                       	   {
                  	   		   ppoint+=2;
   	                       }
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t!!You win!!\n");
                       }
                       else
                       {
                       	   printf("\tPaper                                                                                                                                            Paper");
						   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\ttry again.");
                       	   Sleep(1300);
                       	   goto first;
                       }
                       break;
	    		case 3:if(comr==1)
                       {
                       	   printf("\tScissor                                                                                                                                            Rock");
						   if(point==0)
                       	   {
                  	   		   compoint+=2;
   	                       }
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t!!Your computer wins!!\n");
                       }
                       else if(comp==1)
                       {
                       	   printf("\tScissor                                                                                                                                            Paper");
					       if(point==0)
                       	   {
                  	   		   ppoint+=2;
   	                       }
                       	   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t!!You win!!\n");
                       }
                       else
                       {
                       	   printf("\tScissor                                                                                                                                           Scissor");
						   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\ttry again.");
                       	   Sleep(1300);
                       	   goto first;
                       }
                       break;
	    	}
	    	if(l!=d)
	    	{
	    		printf("\n\n\nPress 'n' to move to the next level......");
	    		if(getch()=='n')
	    		{
	    			point=0;
	    			system("cls");
	    		}
	    		else
	    		{
	    			printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		            Sleep(2000);
		            point=1;
		            goto t5;
	    		}
	    	}
	    	l++;
	    }
	    printf("\n\n\nPress 'r' to see the result......");
	    if(getch()=='r')
	    {
	    	point=0;
	    	system("color E0");
    		system("cls");
    	}
    	else
    	{
	    	printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		    Sleep(2000);
		    point=1;
		    l--;
		    goto t5;
	    }
	    t6:
	    system("cls");
    	printf("\t\t\t\t\t\t\t\t\t\tLeaderboard:-\n\n\n\n\n\n\n\n");
    	printf("\tName:-                                                                                                                                          Score:-\n\n\n\n\n\n\n\n");
    	printf("\t%s                                                                                                                                           %d\n\n\n\n\n\n\n\n\n",pl,ppoint);
    	printf("\t%s's computer                                                                                                                                %d\n\n\n\n\n\n\n\n\n",pl,compoint);
    	if(ppoint>compoint)
    	{
	    	printf("\t\t\t\t\t\t\t\t\tThe Best Player is %s\n\n\n",pl);
	    }
	    else if(ppoint<compoint)
	    {
    		printf("\t\t\t\t\t\t\t\t\tThe Best Player is %s's computer\n\n\n",pl);
    	}
    	else
    	{
	    	printf("\t\t\t\t\t\t\t\tThe Best Player is %s and %s's computer\n\n\n",pl,pl);
	    }
	    if(ppoint==r)
    	{
	    	printf("\t\t\t\t\t\t\t\t\tThe Game Winner is %s\n\n\n",pl);
	    	w=1;
	    }
	    else if(compoint==r)
	    {
    		printf("\t\t\t\t\t\t\t\t\tThe Game Winner is %s's computer\n\n\n",pl);
    		w=1;
    	}
	    else
	    {
    		printf("\t\t\t\t\t\t\t\t\tThe Game Winner is None\n\n\n",pl);
    	}
    	if(w==1)
    	{
	    	temp=10;
    		printf("Press the key 'w'......");
    		if(getch()=='w')
    		{
	    		system("cls");
	    	}
	    	else
	    	{
    			printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		        Sleep(2000);
                goto t6;
    		}
    		while(temp!=0)
    		{
    			system("cls");
    			if(ppoint==r)
    			{
		    		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations\n\n\t\t\t\t\t\t\t\t\t\t    %s\n\n",pl);
		    	}
	    		else if(compoint==r)
	    		{
	    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations\n\n\t\t\t\t\t\t\t\t\t\t%s's computer\n\n",pl);
	    		}
	    		system("color F0");
    			Sleep(100);
		    	system("color 40");
		    	Sleep(100);
		    	system("color 60");
		    	Sleep(100);
		    	system("color 20");
		    	Sleep(100);
		    	system("color D0");
		    	Sleep(100);
		    	temp--;
	    	}
	    	t7:
	    	if(g==1)
	    	{
	    		system("cls");
    			if(ppoint==r)
    			{
		    		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations\n\n\t\t\t\t\t\t\t\t\t\t    %s\n\n",pl);
		    	}
	    		else if(compoint==r)
	    		{
	    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations\n\n\t\t\t\t\t\t\t\t\t\t%s's computer\n\n",pl);
	    		}
	    		system("color D0");
	    	}
	    }
    	printf("\n\n\nPress 's' to go back to Snither.......");
    	if(getch()=='s')
    	{
    		use=0;len=1;
    		t2:
	    	system("cls");
	    }
	    else
	    {
    		printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
		    Sleep(2000);
		    if(w==1)
		    {
		    	g=1;
    			goto t7;
    		}
    		else
    		{
		    	goto t6;
		    }
    	}
	    system("color 30");
	    printf("\t\t\t\t\t\t\t\tSnither:Hi,%s!\n\n\n",pl);
	    printf("\t\t\tI hope you enjoyed this game.I want to know your feelings about this game.To know it please rate this game.\n\n\n\n\n");
	    printf("\t\t\t\t\t\t\t\t\tRate:-\n\n");
	    printf("\t\t\t\t\t\t\t\t\t1.*****\n\n");
	    printf("\t\t\t\t\t\t\t\t\t2.****\n\n");
	    printf("\t\t\t\t\t\t\t\t\t3.***\n\n");
	    printf("\t\t\t\t\t\t\t\t\t4.**\n\n");
	    printf("\t\t\t\t\t\t\t\t\t5.*\n\n");
	    printf("\t\t\t\t\t\t\t\t\t6.\n\n\n");
	    printf("Enter your choice:");
	    if(use==0)
		{
			wrong[z]='0';
		}
		if(star>=1&&star<=6)
		{
    		printf("%d",star);
	    }
    	else
		{
    		scanf("%s",wrong);
    		len=strlen(wrong);
	    }
    	if(star<=0||star>6)
	    {
    		if(len-2>=0)
    		{
	    		for(y=0;y<256;y++)
	    		{
		    		if(wrong[z+(len-2)]==(char)y)
	    			{
	    				wrong[z+(len-1)]='0';
	    			}
		    	}
		    }
    		switch(wrong[z+(len-1)])
			{
				case '1':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you very much %s.\n\n",pl);break;
		    	case '2':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case '3':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case '4':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case '5':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
		    	case '6':star=atoi(wrong);printf("\n\n\n\n\t\t\t\t\t\t  Thank you for rating.We will try our best to make it more fun.\n\n");break;
				default:use++;printf("\n\n\t\t\t\t\t\t\t\tEnter 1 , 2 , 3 , 4 , 5 or 6.\n");
 	        		    Sleep(2000);
	           	    	goto t2;
			}
    	}
		else
		{
			switch(star)
			{
				case 1:printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you very much %s.\n\n",pl);break;
			    case 2:printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case 3:printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case 4:printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
		    	case 5:printf("\n\n\n\n\t\t\t\t\t\t\t\t\tThank you for rating.\n\n");break;
			    case 6:printf("\n\n\n\n\t\t\t\t\t\t  Thank you for rating.We will try our best to make it more fun.\n\n");break;
				default:printf("\n\n\t\t\t\t\t\t\t\tEnter 1 , 2 , 3 , 4 , 5 or 6.\n");
 	        		    Sleep(2000);
	            		goto t2;
			}
		}
		e++;
		if(e==1)
		{
			use=0;len=1;
		}
	    printf("\n\t\t\t\t\t\t\t\tDo you wish to play again?(1.Yes/2.No)\n\t\t\t\t\t\t\t\t=");
	    if(use==0)
		{
			wrong[z]='0';
		}
		if(again>=1&&again<=2)
		{
    		printf("%d",again);
	    }
    	else
		{
    		scanf("%s",wrong);
    		len=strlen(wrong);
	    }
    	if(again<=0||again>2)
	    {
    		if(len-2>=0)
    		{
	    		for(y=0;y<256;y++)
	    		{
		    		if(wrong[z+(len-2)]==(char)y)
	    			{
	    				wrong[z+(len-1)]='0';
	    			}
		    	}
		    }
    		switch(wrong[z+(len-1)])
			{
				case '1':again=atoi(wrong);a++;system("cls");star=0,g=0,again=0;break;
		    	case '2':again=atoi(wrong);a=0;
		        	   printf("\n\n\nPress 'e' to exit from the Game....");
            		   if(getch()=='e')
           		   	   {
     	   	  		       system("cls");
		                   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
           		           system("color 07");
           		           exit(0);
	                   }
	                   else
	                   {
	                       printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
                           Sleep(2000);
                           goto t2;
	                   }
		        default:printf("\n\n\t\t\t\t\t\t\t\tEnter 1 or 2.\n");
    		            Sleep(2000);
    	        	    goto t2;
			}
    	}
		else
		{
			switch(again)
			{
				case 1:a++;system("cls");star=0,g=0,again=0;break;
		    	case 2:a=0;
		        	   printf("\n\n\nPress 'e' to exit from the Game....");
            		   if(getch()=='e')
           		   	   {
     	   	  		       system("cls");
		                   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
           		           system("color 07");
           		           exit(0);
	                   }
	                   else
	                   {
	                       printf("\n\n\n\t\t\t\t\t\t\t\t  You pressed the wrong key please try again.");
                           Sleep(2000);
                           goto t2;
	                   }
		        default:printf("\n\n\t\t\t\t\t\t\t\tEnter 1 or 2.\n");
    		            Sleep(2000);
    	        	    goto t2;
			}
		}
	    goto last;
	}
    return 0;
}