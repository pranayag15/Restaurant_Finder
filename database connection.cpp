#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{

	//
		ofstream fout,pfout;
		char username[100];
	/*	fout.open("username");
		fout.close();
		pfout.open("checker_for_same_username",ios::in);
		pfout.close();*/
		tryagain:
		cout<<"enter username allowed upto 8 characters only\n";
		cin>>username;
		cout<<"enter password\n";
		char password[80];
		cin>>password;
		strcat(username,password);
		//fout<<username;
	//	fout.close();
		ifstream fin,pfin;
		fin.open("username",ios::in);
		int check=0;
		char check_username[100];
		int i=0;
		//cout<<username;
		while(fin)
		{
			fin.getline(check_username,10000);
			check=0;
			i=0;
		//	cout<<check_username;
					while(1)
			       {
					//cout<<a[i]<<b[i];
			        if(username[i]!=check_username[i])
			            check=1;
			            if(username[i]=='\0')
			            break;
			            i++;
			       }
				   if(check==0)
				   break;	
		}	
		fin.close();
		if(check==1)
		{
			char answer;
			cout<<"\n\nSorry user not found,do you want to register\n\n\n\n";
			cin>>answer;
			if(answer=='n')
			goto tryagain;
			cout<<"new to zomato iiit\n";
			cout<<"\nPlease register here\n";
			imp:
			cout<<"enter username\n";
			cin>>username;
			pfin.open("checker_for_same_username",ios::in);
			char checker[100];
			while(pfin)
			{
				pfin.getline(checker,1000);
				if(strcmp(checker,username)==0)
				{
					cout<<"user already exist\n\n";
					pfin.close();
					goto imp;
				}
			}
			fout.open("username",ios::app);
			pfin.close();
			pfout.open("checker_for_same_username",ios::app);
			cout<<"enter password\n";
			cin>>password;
			fout<<username;
			pfout<<username;
			pfout<<endl;
			pfout.close();
			fout<<password;
			fout<<endl;
			cout<<"Hurray you are a customer of zomato iiit ";
			fout.close();
		}
		else
		{
			cout<<"\n----user found----\n";
		}
	
}
	//this file opening is for connection with files
	//one by one 
	//and this file doesn't allow us to update
	//our contents but 
	// if a file with that name exists then erases it
	
	//code
	
	
	/*
	ofstream outf("new");
	char name[255];
	cin>>name;
	outf<<name<<"\n";
	cout<<"enter item cost";
	float cost;
	cin>>cost;
	outf<<cost;
	outf.close();
	ifstream inf("new");
	inf>>name;
	inf>>cost;
	cout<<"\n";
	cout<<"item name = "<<name;
	cout<<"\nitem cost = "<<cost;
	return 0;*/
	//now the below is a program that opens several files one by one 
	//the command used is open
	//ofstream outfie;
	//outfile.open("new");
	//outfile.close();
	//outfile.open("new1");
	//outfile.close();
	//
	/*ofstream fout;
	fout.open("country");
	fout<<"USA\n";
	fout<<"INDIA\n";
	fout<<"CHINA\n";
	fout.close();
	fout.open("capitals");
	fout<<" WASHINGTON\n";
	fout<<"DELHI\n";
	fout<<"SHENGHAI\n";
	fout.close();
	//reading the files
	char line[20];
	ifstream fin;
	fin.open("country");
	cout<<"country names\n";
	cout<<" ";
	while(fin)
	{
		fin.getline(line,20);
		cout<<line<<" ";
	}
	cout<<endl;
	fin.close();
	fin.open("capitals");
	while(fin)
	{
		fin.getline(line,20);
		cout<<line<<" ";
	}
	fin.close();
	return 0;*/
	//ios::app
	//ios::ate
	//ios::in
	//ios::out
