#include<iostream>
#include<map>
#include<string>

using namespace std;

typedef map<int,char> TAPE;
typedef map<int,char>::iterator ITR;

TAPE tape;
ITR itr;

int header=0;

void print()
{
	cout<<endl;
	for(itr=tape.begin();itr!=tape.end();++itr)
	{
		if(header==itr->first) cout<<'.';
		
		cout<<itr->second;
	}
}

char read()
{
	return tape[header];
}

void L(int n=1)
{
 	header=header-n;
}
void R(int n=1)
{
	header=header+n;
}

void sigma(char symbol)
{
	tape[header]=symbol;
}

void Left2(char x)
{
	do
	{
		L();
	}while(read()!=x);
}
void Right2(char x)
{
	do
	{
		R();
	}while(read()!=x);
}

void Left2comp(char x)
{
	do
	{
		L();
	}while(read()==x);
}
void Right2comp(char x)
{
	do
	{
		R();
	}while(read()==x);
}

void initTape()
{
	for(int i= -18; i<=11; i++)
	{
		header=i;
		sigma(' ');
	}
	header=0;
}

int main()
{
	char A[8];
	char B[8];
	cout<<"A= ";cin>>A;
	cout<<"B= ";cin>>B;
	cout<<endl;
		
	initTape();
	
	L(17);
	
	for(int i=0;i<8;i++)
	{
		sigma(A[i]);
		R();
	}
	
	R();
	
	for(int i=0;i<8;i++)
	{
		sigma(B[i]);
		R();
	}
	
	sigma('@');
	R();sigma('0');
	R();sigma(':');
	L(11);sigma(':');
	
	Left2(' ');R();
	
	print();	
////////////////////////////////////////////////////////////////////////////////////////////////////
	Right2(':');L();print();
	if(read()=='1'||read()=='0')
	{
		loop:
		print();
		R();L();
		if(read()=='1')
		{
			print();
			R(9);
			if(read()=='1')
			{
				print();
				Right2('@');R();
				if(read()=='1')
				{
					print();
					sigma('1');R(10);Left2(' ');sigma('1');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
				else if(read()=='0')
				{
					print();
					sigma('1');R(10);Left2(' ');sigma('0');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
			}
			else if(read()=='0')
			{
				print();
				Right2('@');R();
				if(read()=='1')
				{
					print();
					sigma('1');R(10);Left2(' ');sigma('0');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
				else if(read()=='0')
				{
					print();
					sigma('0');R(10);Left2(' ');sigma('1');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
			}
		}
		else if(read()=='0')
		{
			print();
			R(9);
			if(read()=='1')
			{
				print();
				Right2('@');R();
				if(read()=='1')
				{
					print();
					sigma('1');R(10);Left2(' ');sigma('0');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
				else if(read()=='0')
				{
					print();
					sigma('0');R(10);Left2(' ');sigma('1');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
			}
			else if(read()=='0')
			{
				print();
				Right2('@');R();
				if(read()=='1')
				{
					print();
					sigma('0');R(10);Left2(' ');sigma('1');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
				else if(read()=='0')
				{
					print();
					sigma('0');R(10);Left2(' ');sigma('0');L(21);
					if(read()=='1'||read()=='0')
					{
						goto loop;
					}
					else if(read()==' ')
					{
						print();
						R();
					}
				}
			}
		}	
	}
	print();

	
	cout<<endl<<endl;
	system("pause");
	return 0;
}

