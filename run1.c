#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include"league_inter.c"
/*void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/
int  run(int *count)
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
				if(f2==0)
				{
			        printf("\n DO YOU WANT TO GO FOR THIRD UMPIRE");
			       	printf("\n 1.Yes\n2.No");
			       	scanf("%d",&choice);
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
				
				}
				f2=1;
				}
				f=1;
				c++;
			       	break;
		}
		 rrt=(s[m]/(i))*6.0;
		prif(choice==1)
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

                                }
                                f2=1;
                                }ntf("\nRunrate is %f\n",rrt);

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
	*count=c;
	return total;
}
int  run1(int t,int *w)
{

        int a[11],i,m=0,f=0,c=0,c1=0,f1=0;
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
                               	#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"league_inter.c"
/*void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/
int  run(int *count)
{

	int a[11],i,m=0,f=0,c=0,c1=0,f1=0;
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
	*count=c;
	return total;
}
int  run1(int t,int *w)
{

        int a[11],i,m=0,f=0,c=0,c1=0,f1=0;
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
		printf("\n%d",c);
		*w=c;
		return total;
}



void main()
{
	int t[2]={0};
	int a,b;
	teams();
	printf("\n==========================================================================================================");
	printf("\n                              FIRST INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");

	t[0]=run(&a);
	printf("\n%d",a);

	printf("\n==========================================================================================================");
	printf("\n                              SECOND INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");
	
	t[1]=run1(t[0],&b);
	printf("\n%d",b);
	printf("\n Total of team two is %d",t[1]); 
	if(t[1]>t[0])
		printf("\n team two won by %d wickets",(11-b));

	else if(t[0]>t[1])
		printf("\n team one  won by %d runs",t[0]-t[1]);
	else
		printf("\n its a draw match");

	
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
		printf("\n%d",c);
		*w=c;
		return total;
}



void main()
{
	int t[2]={0};
	int a,b;
	//teams();
	printf("\n==========================================================================================================");
	printf("\n                              FIRST INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");

	t[0]=run(&a);
	printf("\n%d",a);

	printf("\n==========================================================================================================");
	printf("\n                              SECOND INNINGS STARTS!!!!                                                       ");
	printf("\n==========================================================================================================\n");
	
	t[1]=run1(t[0],&b);
	printf("\n%d",b);
	printf("\n Total of team two is %d",t[1]); 
	if(t[1]>t[0])
		printf("\n team two won by %d wickets",(10-b));

	else if(t[0]>t[1])
		printf("\n team one  won by %d runs",t[0]-t[1]);
	else
		printf("\n its a draw match");

	
}



