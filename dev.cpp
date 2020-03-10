{\rtf1\ansi\ansicpg1252\cocoartf1671\cocoasubrtf600
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red26\green26\blue26;\red255\green255\blue255;\red117\green117\blue117;
}
{\*\expandedcolortbl;;\cssrgb\c13333\c13333\c13333;\cssrgb\c100000\c100000\c100000;\cssrgb\c53333\c53333\c53333;
}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26\fsmilli13200 \cf2 \cb3 \expnd0\expndtw0\kerning0
#include<iostream>\cb1 \
\cb3 using namespace std ;\cb1 \
\cb3 int main()\{\cb1 \
\cb3  int n,i,num,mcd,r;\cb1 \
\cb3  do\{\cb1 \
\cb3 \'a0 cout<<"Entrez le nombre de chiffres"<<endl;\cb1 \
\cb3 \'a0 cin>>n;\cb1 \
\cb3  \}while(n<=0);\cb1 \
\cb3  for(int i=0;i<n;i++)\{\cb1 \
\cb3 \'a0 do\{\cb1 \
\cb3 \'a0\'a0 cout<<\'93Entrez un nombre\'94<<i+1<<" : "<<endl;\cb1 \
\cb3 \'a0\'a0 cin>>num;\cb1 \
\cb3 \'a0 \}while(num<0);\cb1 \
\cb3 \'a0 if(i==0)\{\cb1 \
\cb3 \'a0\'a0 mcd=num;\cb1 \
\cb3 \'a0 \}\cb1 \
\cb3 \'a0 do\{\cb1 \
\cb3 \'a0\'a0 r=mcd%num;\cb1 \
\cb3 \'a0\'a0 mcd=num;\cb1 \
\cb3 \'a0\'a0 num=r;\cb1 \
\cb3 \'a0 \}while(r!=0);\cb1 \
\cb3  \}\cb1 \
\cb3  cout<<"El PGCD est :"<<mcd;\cb1 \
\cb3  return 0;\cb1 \
\cb3 \}
\fs26 \'a0\'a0\cf4 \cb1 \
}