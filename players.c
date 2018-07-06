struct player
{
		char name[20];
		int n;
		char cat[10];
		int score;
		float str;
};

void input()
{
	struct player *s;
	int n,i;
	FILE *p;
	printf("\n Enter the number of players in a team");
	scanf("%d",&n);
	s=malloc(n*sizeof(struct player));
	p=fopen("bio.txt","r");
	if(p==NULL)
		printf("\nERROR!!!");
	/*else
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
	printf("\nThe details are saved");*/
	else
	{
		printf("\nThe details of the players are....");
		for(i=0;i<n;i++)
		{
		fread(s+i,sizeof(struct player),1,p);
		printf("\nThe detials of  the player %d",i+1 );
		printf("\nThe name of the  player is %s",s[i].name);
		printf("\nThe jersy no of player is %d",s[i].n);
		printf("\nThe category of the player is %s",s[i].cat);
		}
	}
}
