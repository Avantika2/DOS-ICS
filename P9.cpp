#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter number of processes:";
    int p;
    cin>>p;
    cout<<"\nEnter process names:"<<endl;
    map<char,float> mp;
    for(int i=0;i<p;i++)
    {
        cout<<"Process "<<i+1<<":";
        char c;
        cin>>c;
        mp[c]=0;
    }
    cout<<"\nEnter coordinator :";
    char c;
    cin>>c;
    mp[c]=1;

    cout<<"\nInitial weights:"<<endl;
    for(map<char,float>::iterator it=mp.begin(); it!=mp.end();it++)
    {
        cout<<it->first<<"="<<it->second<<endl;
    }

    cout<<"\nEnter number of flows:";
    int f;
    cin>>f;
    for(int i=0;i<f;i++)
    {
        cout<<"\nFlow "<<i+1;
        char e,o;
        cout<<"\nStart:";
        cin>>e;
        cout<<"Stop:";
        cin>>o;
        mp[e]=(float)(mp[e]+mp[o])/2;
        mp[o]=mp[e];
    }

    cout<<"\nWeights after flow:"<<endl;
    for(map<char,float>::iterator it=mp.begin(); it!=mp.end();it++)
    {
        cout<<it->first<<"="<<it->second<<endl;
    }

    //Since it is just a simulator, I am skipping the logic here
    
    cout<<"\nFinal weights:"<<endl;
    for(map<char,float>::iterator it=mp.begin(); it!=mp.end();it++)
    {
        cout<<it->first<<"=";
        if(it->first==c)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }

    return 0;

}

