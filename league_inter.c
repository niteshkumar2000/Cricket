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
