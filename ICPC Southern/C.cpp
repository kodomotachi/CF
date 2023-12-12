#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data; // can contain others struct in this 
	struct node *next; // link
};

typedef struct node node;

node* makeNode(int x)
{
	// node *newNode = (node*)malloc(sizeof(node));
	node *newNode = new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void process(node *head)
{

	while (head != NULL)
		cout << head->data << " ", head = head->next;
	
}

int count(node *head)
{
	int cnt = 0;
	while(head != NULL)
		++cnt, head = head->next;
	return cnt;
}

// use for both C and C++
void pushFront(node **head, int x)
{
	node *newNode = makeNode(x);
	newNode->next = (*head); // address of head
	(*head) = newNode;
}

// better for C++
void pushFront2(node *&head, int x)
{
	node *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}

void pushBack(node *&head, int x)
{
	node *temp = head;
	node *newNode = makeNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	node *head = NULL;
	for (int i = 10; i <= 20; i++)
		pushFront2(head, i);
	process(head);
	return 0;
}