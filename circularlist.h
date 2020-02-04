#include<iostream>
#include"node.cpp"
class circularlist{
	public:
		circularlist();
		bool isempty();
		int getlength();
		void insert(int a);
		void atbegin(int b);
		void atlast(int c);
		void inbetween(int index,int data);
		bool deletefirst();
		bool deleteinbtw(int element);
		bool deletelast();
		void print();
		
		
		protected:
			node *last,*t,*temp,*p;
			int count;
};
