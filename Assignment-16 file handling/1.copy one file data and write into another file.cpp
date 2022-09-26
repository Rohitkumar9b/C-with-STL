#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void writing1();
void reading();
void writing(char);
int main()
{
   writing1();
   reading();
   getch();


}void writing1()
{

   ofstream fout;
   fout.open("filename.txt",ios::out);
   fout<<"mysirg education services";
   fout.close();
}
void writing(char k)
{

   ofstream fout;
   fout.open("filename.txt",ios::out);
   fout<<k;
   fout.close();
}
void reading()
{
    char ch;
    ifstream fin;
    fin.open("filename.txt");
    if(!fin)
        cout<<"file not found";
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            writing(ch);
            ch=fin.get();
        }
    }
    fin.close();
}
