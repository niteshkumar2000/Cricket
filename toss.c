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
