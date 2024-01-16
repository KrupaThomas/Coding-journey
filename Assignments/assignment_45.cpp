
//Write a program to find if there is any repetition of number in an array of integer. 
/*#include<iostream>

using namespace std;

int main()
{
    int n, arr[50],count = 0,num;;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    for(int i = 1; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter number : "<<endl;
    cin>>num;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    if(count) 
        cout<<"Repetition present"<<endl;
    else
        cout<<"No repetition"<<endl;


    return 0;
}*/


//Write a program to multiply two matrixes (general matrix, can be square or rectangular)

/*#include<iostream>
using namespace std;

int main()
{
    int n,m,p,q;
    cout<<"Enter row and column size of matrix 1 : "<<endl;
    cin>>n>>m;

    int arr1[n][m];

    cout<<"Enter row and column size of matrix 2 : "<<endl;
    cin>>p>>q;

    int arr2[p][q];

    cout<<"Enter the elements of matrix 1 : "<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the elements of matrix 2 : "<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int arr[n][q];
    if(m == p)
    {
        for(int i = 0; i < n ; i++)// till row matrix1
        {
            for(int j = 0; j < q; j++)// till col matrix 2
            {
                arr[i][j] = 0;  
                for(int k = 0; k < m; k++)//till col matrix 1
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }

    cout<<"The resultant matrix is : "<<endl;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//---------------------------------------------------------------------------------------------------------------------------------------

//reverse a linked list

/*#include<iostream>
#include<stack>

using namespace std;

struct node {
    int data;
    node* next;
    node(int d): data(d), next(NULL) {}
};

node* create_list() {
    node* root = NULL;
    node* tail = NULL;

    int data;
    cout << "Enter data (-1 to end): " << endl;
    
    while (true) {
        cin >> data;

        if (data == -1) {
            break;
        }

        node* newNode = new node(data);

        if (!root) {
            root = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return root;
}

void print_list(node* root) {
    while (root) {
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}

node* reverse_list(node* root) {
    stack<node*> s;

    // Push all nodes onto the stack
    while (root) {
        s.push(root);
        root = root->next;
    }

    // Pop elements from the stack to reverse the list
    node* newRoot = s.top();
    s.pop();
    node* current = newRoot;

    while (!s.empty()) {
        current->next = s.top();
        s.pop();
        current = current->next;
    }

    current->next = NULL;

    return newRoot;
}

int main() {
    node* root = create_list();

    cout << "Original linked list: ";
    print_list(root);

    node* reversedRoot = reverse_list(root);

    cout << "Reversed linked list: ";
    print_list(reversedRoot);

    return 0;
}*/

//----------------------------------------------------------------------------------------------------------------------------------
//"The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, 
//and the median is the mean of the two middle values. For example, for arr = [2,3,4] , the median is 3 For example,
//for arr = [2,3] , the median is (2 + 3) / 2 = 2.5


#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

int main()
{
    int arr[50],n;
    float median;
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    for(int i = 0 ;i < n; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int mid = n/2;

    if(n % 2 == 0)
    {
       
        median = (float)(arr[mid]+arr[mid-1])/2;
    }
    else
        median = arr[mid];

    cout<<"Median is : "<<median<<endl;

    return 0;
}
