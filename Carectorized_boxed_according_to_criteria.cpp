class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
    long long int volume=length*width*height;
        int flag=0,flag1=0;
        if(length>=10000||width>=10000||height>=10000||volume>=1000000000)
                flag=1;   
         if(mass>=100)
            flag1=1;
         if(flag==0&&flag1==0)
             return "Neither";
          else if(flag==1&&flag1==1)  
              return "Both";
            else if(flag>flag1)
                return "Bulky";
            else 
                return "Heavy";
    }
};