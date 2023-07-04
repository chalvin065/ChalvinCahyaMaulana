class Node{
	public:
		int value;
		Node *next;
		
		Node(){
			next=NULL;
		}
};
class Queue{
	public:
	Node *back;
	Node *front;
	
	void enqueue(int);
	void dequeue();
	
	void printAll();
	
	Queue(){
		back=front=NULL;
	}
};