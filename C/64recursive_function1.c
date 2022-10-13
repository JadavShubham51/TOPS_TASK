//64recursive_function1.c

int print_1to10(int x)
{
	if(x<=10) //x=10
	{
		printf("%d\n",x);
		print_1to10(x+1); //1 2 3 4 5 ... 10
	}
}

int main()
{
	print_1to10(1); // 1 to start 
	return 0;
}