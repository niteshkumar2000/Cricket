#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void teams()
{
        FILE *ptr;
        char ch;
        ptr=fopen("teams.txt","r");
        if(ptr==NULL)
        {
                printf("error\n");
        }
        else
        {
                while(!feof(ptr))
                {
                        ch=fgetc(ptr);
                        if(!feof(ptr))
                                printf("%c",ch);
                }
        }
}
void toss()
{
        int f=0,f1=0,n,m;
        n=rand();
        if(n%2==0)
        {
                printf("\nINDIA won the toss");
                f=1;
                m=rand();
                if(m%2==0)
                {
                        printf("\nINDIA OPTED TO BAT");
                        f1=1;
                }
                else
                {
                        printf("\nINDIA OPTED TO BOWL");
                        f1=2;
                }
        }
        else
        {
                printf("\nSRILANKA won the toss");
                f=2;
                m=rand();
                if(m%2==0)
                {
                        printf("\nSRILANKA OPTED TO BAT");
                        f1=1;
                }
                else
                {
                        printf("\nSRILANKA OPTED TO BOWL");
                        f1=2;
                }
        }
}
struct player
{
                char name[20];
                int n;
                char cat[10];
                int score;
                float str;
};
/*void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/
int  run(int *count)
{

	int a[11],i,m=0,f=0,c=0,c1=0,f1=0,choice,f2=0;
	int n,s[11]={0},balls,overs,over=0,total=0,b[20]={0};
	float str,rrt;
	printf("\n Enter  the number of overs");
	scanf("%d",&overs);
	balls=overs*6;
	srand(time(NULL));
	for(i=1;i<=balls;i++)
	{
		n=rand()%8;
		switch(n)
		{
			//(n%2)?(s[m]+=n):(s[m+1]+=n);
			case 1:s[m]+=n;over+=n;total+=n;
			        printf("\n The score is 1");
				printf("\nBatsman two on strike");
			      	//swap(s[m],s[m+1]);
			        break;
			case 2:s[m]+=n;over+=n;total+=n;
			       	printf("\n The  score is  2");
			        printf("\nStrike remains the same");
			        break;
			case 3:s[m]+=n;over+=n;total+=n;
			       printf("\nThe score is 3");
			       printf("\nBatsman two on strike");
			       //swap(s[m],s[m+1]);
			       break;
			case 4:s[m]+=n;over+=n;total+=n;
			       printf("\nThe score is 4");
			       printf("\nStrike remains the same");
			       break;
			case 5:s[m]+=n;over+=n;total+=n;
			       printf("\nThe score is 5");
			       printf("\nBatsman two on strike");
			       //swap(s[m],s[m+1]);
			       break;
			case 6:s[m]+=n;over+=n;total+=n;
			       printf("\n The score is 6");
			       printf("\nStrike remains the same");
			       break;
			case 7:printf("\n OOOPS!!!Its wicket");
			       	printf("\n YOU CAN USE THIRD UMPIRE ONLY ONCE");
                                printf("\n DO YOU WANT TO GO FOR THIRD UMPIRE");
                                printf("\n 1.Yes\n2.No");
                                scanf("%d",&choice);
				sleep(2);
				if(f2==1)
				printf("\nNO!!!you cant use");
				if(f2==0)
				{
                                	if(choice==1)
                                	{
                                        	int x;
                                        	x=rand();
                                        	if(x%2==0)
                                        	{
                                               		printf("\n WICKET");
                                               	 	f=1;
                                                	c++;
                                       		 }
						else
                                        	{
                                        	        printf("\n YOU CAN PLAY!!!!");
                                        	        break;
                                        	}
					f2=1;
					}
                               	}

				f=1;
				c++;
			       	break;
		}
		 rrt=(s[m]/(i))*6.0;
		printf("\nRunrate is %f\n",rrt);

		if(f==1)
		{
			m++;
			printf("\n The total score of the batsman %d is %d",m,s[m-1]);
			str=(100.0/(i))*s[m-1];
			printf("\n-----------------\n");
		        printf("\nStrike rate  of the batsman %d is %f\n",m,str);
			printf("-----------------\n");
			f=0;	
		}
		if(i%6==0)
		{

			printf("\n OVER UP!!!");
			printf("\n NEXT BOWLER ON GROUND");
			printf("\n The total in this over is %d",over);
			b[c1]=over;
			printf("\n The bowler %d has given %d runs",c1+1,over);
			//printf("\n The runrate of this over is %d",over);
			sleep(2);
			over=0;
			c1++;
		}
		if(m==10)
		{
				printf("\n FIRST INNINGS OVER!!!");
				printf("\n YOUR TATGET IS   %d  ",(total+1));
				break;
		}
	}


		printf("\nThe total score of batsman %d is %d",m+1,s[m]);
		str=(100.0/(i))*s[m];
		printf("\n-----------------\n");
		printf("\nStrike rate  of the batsman %d is %f\n",m+1,str);
		printf("-----------------\n");

	printf("\n The total score of the match is %d",total);
	printf("\n YOUR TARGET IS %d",(++total));
	printf("\n%d",c);
	*count=c;
	return total;
}
int  run1(int t,int *w)
{

        int a[11],i,m=0,f=0,c=0,c1=0,f1=0,f2=0,choice;
        int n,s[11]={0},balls,overs,over=0,total=0,b[20]={0};
        float str,rrt;
        printf("\n Enter  the number of overs");
        scanf("%d",&overs);
        balls=overs*6;
        srand(time(NULL));
        for(i=1;i<=balls;i++)
        {
                n=rand()%8;
                switch(n)
                {
			case 0:printf("\nThe score is 0");
			       printf("\n\nIts a Dot ball");
			       break;	
			case 1:s[m]+=n;over+=n;total+=n;
                                printf("\n The score is 1");
			       	printf("\n\n A single on the mid...."); 
                                printf("\nBatsman two on strike");
                                //swap(s[m],s[m+1]);
                                break;
                        case 2:s[m]+=n;over+=n;total+=n;
                                printf("\n The  score is  2");
			        printf("\n\n Nice shot....two runs");
                                printf("\nStrike remains the same");
                                break;
                        case 3:s[m]+=n;over+=n;total+=n;
                               printf("\nThe score is 3");
			       printf("\n\n Long deep...nice running between the wickets...three runs");
                               printf("\nBatsman two on strike");
				    //swap(s[m],s[m+1]);
                               break;
                        case 4:s[m]+=n;over+=n;total+=n;
                               printf("\nThe score is 4");
			       printf("\n\n One pitch over the rope....four runs...");
                               printf("\nStrike remains the same");
                               break;
                        case 5:s[m]+=n;over+=n;total+=n;
                               printf("\nThe score is 5");
			       printf("\n\n A wide plus FOUR...gives five runs");
                               printf("\nBatsman two on strike");
                               //swap(s[m],s[m+1]);
                               break;
                        case 6:s[m]+=n;over+=n;total+=n;
                               printf("\n The score is 6");
			       printf("\n\nHUGE shot....out of the stadium...SIX runs...");
                               printf("\nStrike remains the same");
                               break;
                        case 7:printf("\n OOOPS!!!Its wicket");
                               printf("\n YOU CAN USE THIRD UMPIRE ONLY ONCE");
                                printf("\n DO YOU WANT TO GO FOR THIRD UMPIRE");
                                printf("\n 1.Yes\n2.No");
                                scanf("%d",&choice);
				sleep(2);
                                if(f2==1)
                                printf("\nNO!!!you cant play");
                                if(f2==0)
                                {
                                	if(choice==1)
                                	{
                                        	int x;
                                        	x=rand();
                                        		if(x%2==0)
                                        		{
                                                	printf("\n WICKET");
                                                	f=1;
                                                	c++;
                                        		}
                                        		else
                                        		{
                                                	printf("\n YOU CAN PLAY!!!!");
                                                	break;
                                        		}
                               		 f2=1;
                                	}
				}
				f=1;
                                c++;
                               break;
		}

			rrt=(s[m]/(i))*6.0;
                	printf("\nRunrate is %f\n",rrt);

                if(f==1)
                {
                        m++;
                        printf("\n The total score of the batsman %d is %d",m,s[m-1]);
                        str=(100.0/(i))*s[m-1];
                        printf("\n-----------------\n");
                        printf("\nStrike rate  of the batsman %d is %f\n",m,str);
                        printf("-----------------\n");
                        f=0;    
                }
                if(i%6==0)
                {

                        printf("\n OVER UP!!!");
                        printf("\n NEXT BOWLER ON GROUND");
                        printf("\n The total in this over is %d",over);
                        b[c1]=over;
                        printf("\n The bowler %d has given %d runs",c1+1,over);
                        printf("\n The runrate of this over is %d",over);
			sleep(2);
                        over=0;
                        c1++;
                }
                if(m==10)
                {
                                printf("\n FIRST INNINGS OVER!!!");
                                printf("\n YOUR TATGET IS   %d  ",(total+1));
                                break;
                }
		if(total>t)
		{
			printf("\nThe score of the batsman is %d is %d",m+1,s[m]);
			return total;
		}
		
			
        }
		printf("\nThe total score of batsman %d is %d",m+1,s[m]);
                str=(100.0/(i))*s[m];
                printf("\n-----------------\n");
                printf("\nStrike rate  of the batsman %d is %f\n",m+1,str);
                printf("-----------------\n");
		printf("\n The total score is %d",total);
		//printf("\n%d",c);
		*w=c;
		return total;
}



void main()
{
	int t[2]={0};
	int a,b;
	teams();
	struct player *s;
        int n,i;
        FILE *p;
        printf("\n Enter the number of players in a team");
        scanf("%d",&n);
        s=malloc(n*sizeof(struct player));
        p=fopen("bio.txt","r");
        if(p==NULL)
                printf("\nERROR!!!");
        else
        {
        printf("\nEnter the details of the players.....");
        for(i=0;i<n;i++)
        {
                printf("\nEnter the details of the player %d",i+1);
                printf("\nEnter the name of the player");scanf("%*c%s",s[i].name);
                printf("\nEnter  the jersy number of the player");scanf("%d",&s[i].n);
                printf("\nEnter the category of the player");scanf("%*c%s",s[i].cat);
                fwrite(s+i,sizeof(struct player),1,p);
        }
        }
        printf("\nThe details are saved");
        p=fopen("bio.txt","r"); 
        
                printf("\nThe details of the players are....");
                for(i=0;i<n;i++)
                {
                fread(s+i,sizeof(struct player),1,p);
                printf("\nThe detials of  the player %d",i+1 );
                printf("\nThe name of the  player is %s",s[i].name);
                printf("\nThe jersy no of player is %d",s[i].n);
                printf("\nThe category of the player is %s",s[i].cat);
                }
       

	printf("\n=========================================================================================================");
	printf("\n					GAME STARTS!!!!							    ");
	printf("\n==========================================================================================================");
	sleep(2);
	toss();
	sleep(2);
	printf("\n==========================================================================================================");
	printf("\n                              FIRST INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");

	t[0]=run(&a);
	printf("\nTeam 1 lost %d wickets",a);
	printf("\n=========================================================================================================");
        printf("\n                                      INNINGS BREAK                                                    ");
        printf("\n==========================================================================================================");
	sleep(3);
	printf("\n==========================================================================================================");
	printf("\n                              SECOND INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");
	
	t[1]=run1(t[0],&b);
	printf("\nTeam two lost %d wickets",b);
	printf("\n Total of team two is %d",t[1]); 
	if(t[1]>t[0])
		printf("\n team two won by %d wickets",(10-b));

	else if(t[0]>t[1])
		printf("\n team one  won by %d runs",t[0]-t[1]);
	else
		printf("\n its a draw match");

	
}
