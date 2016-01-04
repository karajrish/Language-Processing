#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<stdio.h>
using namespace std;
void process();
void getkey();
void input();
void testprint();
vector<char>terminals;		//this vector contains set of terminals
vector<char>nonterminals;	//this vector contains set of non-terminals
map<string,vector<string> > nt_productionset;  //this map contains all productions deriving non-terminals
map<string,vector<string> > t_productionset;   //this map contains all productions derivingf terminals
vector<vector<string> >matrix;			//final matrix
string test_string;
int main(){
	
	input();
	testprint();
	testprint();
	
}
void input()
{
		cout<<"Enter the set of terminals"<<endl;
	char opt;
	while(opt!='#')
	{
		cin>>opt;
		if(opt=='#'){
			break;
		}
		terminals.push_back(opt);
	}
	cout<<"Printing elements of terminals"<<endl;
	for(int i=0;i<terminals.size();i++){
		cout<<terminals[i]<<" ";
	}
	cout<<"\nEnter the set of non-terminals"<<endl;
	opt='r';
	while(opt!='#')
	{
		cin>>opt;
		if(opt=='#'){
			break;
		}
		nonterminals.push_back(opt);
	}
	cout<<"Enter the productions"<<endl;
	vector<string> productions;
	
	//S->AB/BC
	productions.push_back("AB");
	productions.push_back("BC");
	nt_productionset.insert(pair<string,vector<string> >("S",productions));
	productions.clear();
	
	//A->BA
	productions.push_back("BA");
	nt_productionset.insert(pair<string,vector<string> >("A",productions));
	productions.clear();
	
	//B->CC
	productions.push_back("CC");
	nt_productionset.insert(pair<string,vector<string> >("B",productions));
	productions.clear();
	
	//C->AB
	productions.push_back("AB");
	nt_productionset.insert(pair<string,vector<string> >("C",productions));
	productions.clear();
	
	//pushing terminal productions
	
	
	//A->a
	productions.push_back("a");
	t_productionset.insert(pair<string, vector<string> >("A",productions));
	productions.clear();
	
	//B->c
	productions.push_back("c");
	t_productionset.insert(pair<string, vector<string> >("B",productions));
	productions.clear();
	
	//C->a
	productions.push_back("a");
	t_productionset.insert(pair<string, vector<string> >("C",productions));
	productions.clear();
	
	//take the input of the string
//	string test_string;
//	cout<<"Enter the string to process"<<endl;
//	cin.getline(test_string);
//	
//	int matrix_size = strlen(test_string);
//	cout<<"Size of matrix = "<<matrix_size<<endl;
	
	//initializing matrix
	//matrix.size()=matrix_size;
}

void testprint()
{
	map<string, vector<string> >::iterator it = nt_productionset.begin();
	cout<<"contents of non terminal production set"<<endl;
	for(;it!=nt_productionset.end();it++)
	{
		cout<<it->first<<" : ";
		for(int i=0;i<it->second.size();i++)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"contents of terminal production set"<<endl;
	map<string, vector<string> >::iterator it1 = t_productionset.begin();
	
	for(;it1!=t_productionset.end();it1++)
	{
		cout<<it1->first<<" : ";
		for(int i=0;i<it1->second.size();i++)
		{
			cout<<it1->second[i]<<" ";
		}
		cout<<endl;
	}
}

void process()
{
	
		map<string, vector<string> >::iterator it = t_productionset.begin();
	cout<<"finding productions of terminals"<<endl;
	for(;it!=t_productionset.end();it++)
	{
		if(it->second=="a")
		{
			
		}
		cout<<it->first<<" : ";
		for(int i=0;i<it->second.size();i++)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
	
	//manually form the length 1 row
	int i,j,k;
	for(int i=2;i<test_string.size();i++)
	{
		vector<string> B;
		matrix.push_back(B);
		for(int j=2;j<test_string.size()-i+2;j++)
		{
			
		}
		
	}
	
	
}



//void scan(map<string,vector<string>> productions){
//	
//	map<string,vector<string>>::iterator it = productions.begin();
//	for()
//	
//}
