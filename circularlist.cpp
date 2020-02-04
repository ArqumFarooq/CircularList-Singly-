#include<iostream>
#include"circularlist.h"
using namespace std;
circularlist::circularlist(){
	last=NULL;
	count=0;
}
bool circularlist::isempty(){
	if(last==NULL)
	  return true;
	  else
	    return last;
}

void circularlist::insert(int elem){
	t=new node(elem);
	if(last==NULL){
		last=t;
		last->next=last;
		count++;
	}
	
	else
	  atlast(elem);

	
}

int circularlist::getlength(){
	return count;
}

void circularlist::atbegin(int elem){

	
	t=new node(elem);
	t->next=last->next;
	last->next=t;
	count++;
	
	
	
}


void circularlist::atlast(int elem){
	t=new node(elem);
	t->next=last->next;
	last->next=t;
	last=t;
	count++;
	
}

void circularlist::inbetween(int indi,int dati){
	t=new node(dati);
	temp=last->next;
	int i=1;
	while(i<indi-1){
		temp=temp->next;
		i++;
	}
	t->next=temp->next;
	temp->next=t;
}


void circularlist::print(){

	
 temp=last->next;     //temp will point first node
 
do{
	cout<<temp->data<<endl;   // print frst node data
	temp=temp->next;      //move to next node
}while(temp!=last->next);   //first node condition get false and do while will run properly


	
}

bool circularlist::deletefirst(){
	if(isempty())
		return false;
	else{
		temp=last->next;
	last->next=temp->next;
	delete temp;
      return true;
	}
	
}

bool circularlist::deleteinbtw(int value){
	p=last->next;
	bool found=false;
	while(p->next!=last){
		if(p->next->data==value){
			temp=p->next;     //temp will point that node who have to be deleted
			p->next=temp->next;
			delete temp;
			found=true;
		}
		p=p->next;
	}
return found;	
}
bool circularlist::deletelast(){

 		p=last->next;
	
	while(p->next!=last){
		p=p->next;
	}
	
	temp=last;
	p->next=last->next;
	last=p;
	delete temp;
	return true;
	
  
   
	
	
}

