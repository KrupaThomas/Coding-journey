//given an array of points find the points which lie on the same line

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    vector<pair<int, int>> arr = {{0, 0}, {1, 1}, {2, 2}, {0, 4}, {5, 0}};
    int i = 0, j = 0;

    unordered_map<double, vector<pair<int, int>>> map1;
    
    for(i = 0; i < arr.size();i++)
    {   
        
        for(j = i+1; j < arr.size(); j++)
        {
            double slope = 0;
            if(arr[j].first - arr[i].first == 0)
            {
                slope = INFINITY;
            }

            else
            {
                slope = (double)(arr[j].second - arr[i].second)/(arr[j].first - arr[i].first);
            }

            map1[slope].push_back(arr[i]);
            map1[slope].push_back(arr[j]);

        }

    }
    int count = 0, max_count = 0;

    for(auto it : map1)
    {
        for(auto point : it.second)
        {
            count++;
            if(count>max_count)
            {
                max_count = count;
            }
        }
        count = 0;
    }

    cout<<"Maximum points belonging to a line is : "<<max_count/2<<endl;

    for(auto it : map1)
    {
        cout<<"Points with slope "<<it.first<<" are :";
        for(auto point : it.second)
        {
            cout<<"{"<<point.first<<","<<point.second<<"} ";
        }
        cout<<endl;
    }

    return 0;
}
