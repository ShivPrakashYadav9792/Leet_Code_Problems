class Solution {
public:
    string predictPartyVictory(string senate) {
        string temp;
  int dire=0,radiant=0;
  while(1)
  {
      for(int i=0;i<senate.size();i++)
      {
          if(senate[i]=='R')
          {
              if(dire==0)
              {
                  temp.push_back('R');
                  radiant++;

              }
              else
              dire--;
          }
          else
          {
              if(radiant==0)
              {
                  temp.push_back('D');
                  dire++;
              }
              else
              radiant--;
          }
      }
      if(temp.length()==senate.length())
      {
          if(dire!=0)
          return "Dire";
          else
          return "Radiant";
      }
      else
      {
          senate=temp;
          temp.clear();
      }
  }
  return temp;
    }
};