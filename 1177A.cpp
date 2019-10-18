#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sstream>
#include<iostream>
using namespace std;
template<typename T>
string itos(T i)
{stringstream s;
 s<<i;
 return s.str();
 }
int main()
{long int l;
 string ss;
 cin>>l;
 long int i;
 string c;
 if(l<=10000)
  for(i=1;i<=l;i++)
 { ss=itos(i);
  c= c+ss;
 }
 else
 for(i=1;i<=(l/3);i++)
 { ss=itos(i);
  c= c+ss;
 }
 cout<<(c[l-1]-'0');
 return 0;
}
