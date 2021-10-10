#include <iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
    ofstream file;
    ifstream inputfile("D:\input.txt");
    ofstream outputfile("D:\output.txt");
    string line,newline                                                                                                                   ;
    int n=line.length();
    string temp = " ";
    int a=0;
    if(inputfile.is_open())
    {
        while(getline(inputfile,line))
        {
            char* newline = new char[line.length()+1];
            strcpy(newline,line.c_str());
            for(int i=0;i<line.length();i++)
            {
                if(newline[i]=='/'  &&  newline[i+1]=='/')
                {
                    break;
                }
                else if(newline[i]=='/'  &&  newline[i+1]=='*')
                {
                    a=1;
                    break;
                }
                else if(newline[i]=='*'  &&  newline[i+1]=='/')
                {
                    a=0;
                    i=i+1;
                    continue;
                }
                else if(a==0){
                    outputfile<<newline[i];
                }

           }

            outputfile<<"\n";

          for(int i=0;i<line.length();i++)
        {
            if(newline[i]==' ')
            {
                if(temp=="const"||temp=="continue"||temp=="default"||temp=="double"||temp=="else"||temp=="enum"||temp=="float"||temp=="for"||temp=="goto"||temp=="int"||temp=="long"||temp=="register"||temp=="auto"||temp=="break"||temp=="case"||temp=="char"||temp=="do"||temp=="extern"||temp=="if"||temp=="return"||temp=="short"||temp=="signed"||temp=="sizeof"||temp=="static"||temp=="struct"||temp=="switch"||temp=="typedef"||temp=="union"||temp=="unsigned"||temp=="void"||temp=="volatile"||temp=="while")
                {
                   // outputfile<<"keyword list"<<endl;
                    //outputfile<<temp;

                }

            else
            {
                temp+=newline[i];
                //outputfile<<"keyword list"<<endl;
                   // outputfile<<temp;

            }


}        }



      for(int i=0;i<line.length();i++)
    {


         if(newline[i]=='(')
               outputfile<<" (  First Bracket Start"<<endl<<endl;

         else if(newline[i]==')')
               outputfile<<" )  First Bracket Close"<<endl;

        else if(newline[i]=='{')
               outputfile<<" {  Second Bracket start"<<endl;

        else if(newline[i]=='}')
        outputfile<<" }  second Bracket Close"<<endl;

       else if(newline[i]=='[')
        outputfile<<" [  third Bracket start"<<endl;

        else if(newline[i]==']')
        outputfile<<" ]  third Bracket Close"<<endl;

        else if(newline[i]=='+')
        outputfile<<" +  Plus Sign"<<endl;

        else if(newline[i]=='-')
        outputfile<<" -  minus Sign"<<endl;

        else if(newline[i]=='*')
        outputfile<<" *  Multiple Sign"<<endl;

        else if(newline[i]=='=')
        outputfile<<" =  Equal Sign"<<endl;

        else if(newline[i]=='/')
        outputfile<<" /  division Sign"<<endl;

        else if(newline[i]== '!')
        outputfile<<" ! = not Sign"<<endl;

        else if(newline[i]=='>')
        outputfile<<" > Greater than Sign"<<endl;

        else if(newline[i]=='<')
        outputfile<<" < less than Sign"<<endl;

        else if(newline[i]==';')
        outputfile<<" ;  semicolon Sign"<<endl;

        else if(newline[i]=='#')
        outputfile<<" #  Hash Sign"<<endl;

        else if(newline[i]=='.')
        outputfile<<" .  dot Sign"<<endl;

        else if(newline[i]=='_')
        outputfile<<" _  Under Score Sign"<<endl;

        else if(newline[i]=='?')
        outputfile<<" ?  What Sign"<<endl;


    }


    }
    }

}
