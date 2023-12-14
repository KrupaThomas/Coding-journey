#include<iostream>
#include<vector>
#include<list>
#include<map>

using namespace std;

int main()
{
    /*std::vector<int>my_vec = {65,78,10};
    //vector in vector
    std::vector<vector<int>>vec = {{1,2,3},{4,5,6},{7,8,9}};
    vec.push_back(my_vec);
    for(int i = 0;i<vec.size();i++)
    {
        for(int j = 0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";

        }
        cout<<endl;
    }

    //removing last element from row of vector in vector
    vec[0].pop_back();
    vec[1].pop_back();
    vec[2].pop_back();
    vec[3].pop_back();
    
     for(int i = 0;i<vec.size();i++)
    {
        for(int j = 0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";

        }
        cout<<endl;
    }*/



    //list in list
    /*std::list<int> l = {1,2,3};
    std::list<list<int>>l_list = {{4,5,6},{7,8,9},{2,3,7}};
    l_list.push_back(l);
    for(list<list<int>>::iterator i = l_list.begin();i!=l_list.end(); i++)
    {
        list<int> pi = *i;
        list<int>::iterator temp = pi.begin();
        for( ; temp!=pi.end(); temp++)
        {
            cout<<*temp;
        }
        cout<<endl;


    }*/

    //map inside map
    map<int, map<int,int>>m;
    map<int,int>mm = {1,2};
    mm.insert(pair<int,int>(4,5));
    m.insert(pair<int,map<int,int>>(0,mm));
    map<int,map<int,int>>::iterator i ;
    map<int,int>::iterator j;
    for(i = m.begin();i!=m.end();i++)
    {
        for(j = i->second.begin();j!= i->second.end();j++)
        {
            cout<<"Key 1 : "
        }
    }





    return 0;
}