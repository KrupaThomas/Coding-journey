#include<iostream>
using namespace std;


class Box
{
	private:
	int length;
	int height;
	int breadth;
	static int count = 0;

	
	public:

	
	//Box() = default;
	
	Box(int  a, int b, int c)
	{
		length = a;
		breadth = b;
		height = c;
		
	}

	static void show_count(Box b)
	{
		//Box box2(6,7,8);
		count++;
		b.length = 0;
		b.breadth = 0;
		cout<<"count : "<<count<<endl;
				
	}

	int find_vol()
	{
		
		return length*breadth*height;
	}

	void show_vol()
	{
		cout<<"Volume is : "<<find_vol()<<endl;
	}


};

// class custombox : public class
// {

// };

int main()
{
	Box box1(4,5,6);
	Box obj(3,4,5);
	// obj.find_vol();
	// obj.show_vol();
	//box1.show_count(box1);
	//Box::show_count(box1);
	//obj.show_count();

	return 0;
}