#include<iostream>
#include<map>
#include<string>

using namespace std;

map<int,char> tape;
map<int,char>::iterator itr;

int header;

void L(int n=1)
{
	
}
void R(int n=1)
{
	
}
void sigma(char symbol)
{
	
}
void Left2(char x)
{
	
}
void Right2(char x)
{
	
}
void Left2comp(char x)
{
	
}
void Right2comp(char x)
{
	
}

void insertInTape(int i,char c)
{
	itr=tape.find(i);
	if(itr!=tape.end())
	{
		tape.erase(i);
		tape.insert(pair<int,char>(i,c));
	}
	else
	{
		tape.insert(pair<int,char>(i,c));
	}
}

void initTape(char *a,char *b)
{
	/*for(int i= -18; i<=11; i++)
	{
		//cout<<i<<" ";
		insertInTape( i,' ');
	}*/
	
	insertInTape(-9,':');
	insertInTape(-0,'@');
	insertInTape(2,':');
	
	/*for(int i=-17;i<=-10;i++)
	{
		insertInTape(i,a[i+17]);
		insertInTape(i+9,b[i+17]);
	}*/
}


char read()
{
	
}

void print()
{
	for(itr=tape.begin();itr!=tape.end();++itr)
	{
		//cout<<endl<<itr->first<<" ";
		cout<<itr->second;
	}
}

int main()
{
	char A[8];
	char B[8];
	cout<<"A= ";cin>>A;
	cout<<"B= ";cin>>B;
	
	cout<<A<<endl;
	cout<<B<<endl;
		
	initTape(A,B);
	print();
	
	cout<<endl;
	system("pause");
	return 0;
}

