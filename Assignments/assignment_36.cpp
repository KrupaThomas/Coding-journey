//Implement the TimeMap class: TimeMap() Initializes the trie object. void set(String key, String value, int 
//timestamp) String get(String key, int timestamp)

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class TimeMap
{
    private:
    unordered_map<string,unordered_map<int,string>> data;
;
    public:

    TimeMap(){};

    void set(string key, string value, int timestamp)
    {
        data[key][timestamp] = value;
    }

    string get(string key, int timestamp)
    {
        return data[key][timestamp];
    }
};

int main()
{
    TimeMap Map;
    Map.set("hello","4",12345);
    cout<<Map.get("hello",12345)<<endl;
    Map.set("hello","8",146778);
    cout<<Map.get("hello",146778)<<endl;

    return 0;
}


