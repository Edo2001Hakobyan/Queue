#include <iostream>
#include "queue.hpp"

Node::Node(int value)
{
	data = value;
	next = nullptr;
}

Queue::Queue()
{
	m_front = nullptr;
	m_rear = nullptr;
	m_size = 0;
}

Queue::~Queue()
{
	while(!is_empty())
	{
		pop();
	}
}

int Queue::get_size()
{
	return m_size;
}

bool Queue::is_empty()
{
	return (m_front == nullptr && m_rear == nullptr);
}

int Queue::get_front()
{
	if(is_empty())
	{
		std::cout<<"Queue is empty\n";
		return -1;
	}
	return m_front->data;
}

void Queue::push(int value)
{
	Node* new_node = new Node(value);

	if(is_empty())
	{
		m_front = m_rear = new_node;
	}
	else
	{
		m_rear->next = new_node;
		m_rear = new_node;
	}
	m_size++;
}

void Queue::pop()
{
	if(is_empty())
	{
		std::cout<<"Queue is empty\n";
		return;
	}

	Node* temp = m_front;
	if(m_front == m_rear)
	{
	m_front = m_rear = nullptr;
	}
        else
	{
		m_front = m_front->next;
	}
	delete temp;
	m_size--;
}


