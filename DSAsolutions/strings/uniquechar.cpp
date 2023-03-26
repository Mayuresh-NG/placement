#include<iostream>
using namespace std;

int main()
{
  int freq[26];
  int count =0;
  string sr = "mayuu";
  for(int i=0;i<26;i++)
  {
      freq[i]=0;
  }

  for(int j=0;j<sr.size();j++)
  {
      freq[sr[j]-'a']++;
  }


  for(int i=0;i<26;i++)
  {
      if(freq[i]==1)
      {
        count++;
        cout<<freq[i]<<" ";
      }
  }
  cout<<count;
  return 0;
}
