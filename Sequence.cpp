#include "Sequence.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>
using namespace std;
Sequence::Sequence(const char* thefile)
:filename(thefile)
{
    ifstream thedna(filename,ios::in);
        while(!thedna.eof())
        {
           string linshidna;
	getline(thedna,linshidna);
	dna+=linshidna;
        }
    thedna.close();
        }
int Sequence::length()
{
    int len=0;
    len=dna.length();
    return len;
}
int Sequence::numberOf(char base)
{
    int num=0;
    for (int i=0;i<sizeof(dna);i++)
    {
        if (dna[i]==base)
        {       num+=1;}}
    return num;}
string Sequence::getdna()
{
    return dna;
}
string Sequence::longestConsecutive(){
 int i=0;
    string answer;
    while(i<dna.length())
    {
        string lstr;
        lstr=dna[i];
        for(int j=i;dna[j]==dna[j+1];j++)
        {
            lstr+=dna[j];
        }
        if(lstr.length()>answer.length())
        {
            answer=lstr;
        }
        i+=lstr.length();
        }
    return answer;
}
string Sequence::longestRepeated(){
    size_t a=dna.length();
    string fh[a]; //get substrs
    for(int i=0;i<a;i++)
        fh[i]=dna.substr(i);
    sort(fh,fh+a);
    int maxlen=0;
    string answer;
    for(size_t i=0;i+1<a;i++)
    {
        int lsmax=0;
        size_t j=0;
        string lsmaxstr;
if (j<fh[i].length()&&j<fh[i+1].length()){
        while(fh[i][j]==fh[i+1][j])
        {
            lsmax+=1;
            lsmaxstr+=fh[i][j];
            j+=1;
           }}
        if(lsmax>maxlen)
        {
            maxlen=lsmax;
            answer=lsmaxstr;
        }
    }
    return answer;
}

