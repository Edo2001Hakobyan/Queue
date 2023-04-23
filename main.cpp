#include <iostream>
#include "queue.hpp"

int main()
{  
	Queue q;
	
	q.push(5);
	q.push(10);
        q.push(15);
        
        std::cout<<"Queue size: "<<q.get_size()<<"\n";
        std::cout<<"Front of queue: "<<q.get_front()<<"\n";

	q.pop(); 
	std::cout<<"Queue size: "<<q.get_size()<<"\n";
       	std::cout<<"Front of queue: "<<q.get_front()<<"\n";


	return 0;
}
