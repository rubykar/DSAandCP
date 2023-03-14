#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    string S;
    int flag = 0, j = 0;
    cin >> S;
    if(S.size() == 1){
        cout<<1<<endl;
        exit(4);
    }
    if(S.size() == 0){
        cout<<0<<endl;
        exit(4);
    }
    string res = "";
    string result = "";
    for (int k = 0; k < S.size(); k++)
    {
        res = "";
        res.push_back(S[k]);
        for (int i = k+1; i < S.size(); i++)
        {
            for (int j = 0; j < res.size(); j++)
            {
                if (S[i] != res[j])
                {
                   flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                res.push_back(S[i]);
                if(i == S.size()-1 and res.size()>result.size()){
                    cout<<res<<endl;
                    cout<<res.size()<<endl;
                    exit(3);
                }
            }
            else if (flag == 0)
            {
                
                if (result.size() < res.size())
                {
                    result = res;
                }
                cout<<res<<endl;
                break;   
            }
            
        } 
          
    }
    if (res.size() > result.size())
    {
        cout<<res<<endl;
        cout << res.size() << endl;
    }
    else
    {
        cout<<result<<endl;
        cout << result.size() << endl;
    }

    return 0;
}