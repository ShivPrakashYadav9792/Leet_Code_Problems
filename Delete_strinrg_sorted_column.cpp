int n=strs.size();
    if(n<=1) 
    {
        return 0;
    }
    int count=0;

    for(int i=0;i<strs[0].size();i++) 
    {
        for(int j=0;j<n-1;j++)
        {
            if(strs[j][i]>strs[j+1][i])
            {
                count++;
                break;
            }
        }
    }
    return count;
}