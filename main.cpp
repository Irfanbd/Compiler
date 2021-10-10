#include <iostream>
#include<fstream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    ifstream inputfile("E:\\input.txt");
    ofstream outputfile ("E:\\output.txt");
    string line,ar;
    int flag=0;
    if(inputfile.is_open())
    {
        while(getline(inputfile,line))
        {
            char* newline = new char [line.length()+1];
            strcpy(newline,line.c_str());
            for (int i=0;i<line.length();i++)
            {
                if(newline[i]=='/'&& newline[i+1]=='/')
                {
                    break;
                }
                else if(newline[i]=='/'&& newline[i+1]=='*')
                {
                    flag=1;
                }
                else if(newline[i]=='*'&& newline[i+1]=='/')
                {
                    flag=0;
                    i=i+1;
                }
                else if(flag==0)
                {
                    outputfile<<newline[i];
                }
            }
            outputfile<<"\n";


            string temp="",p="",variable="";
            for(int i=0;i<line.length();i++)
            {
                if(newline[i]==' ')
                {
                     if(p=="int"||p=="if"||p=="void"||p=="long"||p=="else"||p=="return"||p=="char"||
                        p=="break"||p=="float"||p=="continue"|| p=="for" ||p=="do"||p=="if"||p=="double"||p=="while")
                       {
                           ar+=p+" ";
                       }
                      for(int k=i;k<line.length();k++)
                       {
                           variable+=newline[k];
                       }
                }
                else
                {
                    p+=newline[i];
                }
            }
            outputfile<<"\n";


             for (int i=0;i<line.length();i++)
             {
                 if(newline[i]=='#')
                 {
                     outputfile<<"Hash";
                 }
                 if(newline[i]=='<')
                 {
                     outputfile<<"Less Than";
                 }
                 if(newline[i]=='>')
                 {
                     outputfile<<"Greater Than";
                 }
                 if(newline[i]=='(')
                 {
                     outputfile<<"Opening 1st-Bracket";
                 }
                 if(newline[i]==')')
                 {
                     outputfile<<"Closing 1st-Bracket";
                 }
                 if(newline[i]==',')
                 {
                     outputfile<<"Comma";
                 }
                 if(newline[i]==';')
                 {
                     outputfile<<"Semicolon";
                 }
             }
        }
        outputfile<<ar;
    }
    return 0;
}

