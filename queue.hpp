class Node
{
	public:
		int data;
		Node* next;
                
		//Constructor that to built new node with given data
		Node(int value);
};

class Queue
{
	public:
		Node* m_front;
		Node* m_rear;
		int m_size;

		//Constructor
		Queue();

		//Destructor
		~Queue();
                
		//Return the size of the queue
		int get_size();
                
		//Return true if the queue is empty,false otherwise
		bool is_empty();
                
		//Return the value of the front node of the queue without removing it
		int get_front();
                
	        //Ads a new node with the given value to the rear of the queue	
		void push(int value);
                
		//Removes the front node from the queue
		void pop();

};
