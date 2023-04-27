//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *lists[], int K)
    {
           if(K==0) return  NULL;
        // Min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<K; i++){
            // individual list me traverse krke usko heap me store krna hai
            Node* head = lists[i];
            while(head!=NULL){
                pq.push(head->data);
                head=head->next;
            }
        }
        // while(!pq.empty()) {
        //     cout<<pq.top()<<endl;
        //     pq.pop();
        // }

        // 'start' list ka head return krega & 'end' traverse krne me help
        Node* start = NULL;
        Node* end = NULL;

        while(!pq.empty()){
            // start null hai agar to first element usme store kr lo & start hi list ka head hoga
            if(start==NULL){
                start=new Node(pq.top());
                end=start;
                pq.pop();
            }
            // start null nhi hai, to ab end pointer ke help se baki elements ko store krte jao list me
            else {
                end->next = new Node(pq.top());
                pq.pop();
                end=end->next;
            }

        }
        // start list ka head hai to ab usse return krwa do
        return start;
    }
};



//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

// } Driver Code Ends