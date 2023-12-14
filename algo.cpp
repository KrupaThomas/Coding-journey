//use algorithm in stl
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> vec1 = {10,45,23,67,89};

    for(vector<int>::iterator i = vec1.begin(); i!=vec1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;


    //sort the vector
    sort(vec1.begin(),vec1.end());
    cout<<"After sorting : "<<endl;
    for(vector<int>::iterator i = vec1.begin(); i!=vec1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //after reversing
    // reverse(vec1.begin(),vec1.end());
    // cout<<"After reversing : "<<endl;
    // for(vector<int>::iterator i = vec1.begin(); i!=vec1.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    //find max element
    cout<<"Max elements is : "<<*max_element(vec1.begin(),vec1.end())<<endl;

    //find min element
    cout<<"Min elements is : "<<*min_element(vec1.begin(),vec1.end())<<endl;

    //binary search algorith
    //can only be used on a sorted sequence or range
    cout<<"The element 45 is found (0/1): "<<binary_search(vec1.begin(),vec1.end(),45)<<endl;

    std::vector<int>vec2 = {10,20,20,20,30,20,67,80};
    sort(vec2.begin(),vec2.end());
    vector<int>::iterator i,j;
    i = upper_bound(vec2.begin(),vec2.end(),20);
    j = lower_bound(vec2.begin(),vec2.end(),20);

    //to use upper and lower sort the sequence first
    cout<<"Upper bound of 20 is : "<<*upper_bound(vec2.begin(),vec2.end(),20)<<endl;
    cout<<"Lower bound of 20 is : "<<*lower_bound(vec2.begin(),vec2.end(),20)<<endl;

    cout<<"Upper bound of 20 is : "<<i-vec2.begin()<<endl;
    cout<<"Lower bound of 20 is : "<<j-vec2.begin()<<endl;

    //count
    cout<<"The no of times 20 appears is : "<<count(vec2.begin(),vec2.end(),20)<<endl;

    //swap
    swap(vec1,vec2);
    cout<<"In vec1 : ";
    for(vector<int>::iterator i = vec1.begin(); i!=vec1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"In vec2 : ";
    for(vector<int>::iterator i = vec2.begin(); i!=vec2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    
    // //copy
    std::vector<int>vec3(vec1.size());
    copy(vec1.begin(),vec1.end(),vec3.begin());
    cout<<"In vec3 : ";
    for(vector<int>::iterator i = vec3.begin(); i!=vec3.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //unique

return 0;
}