#include<iostream>
#define size 5
using namespace std;
class Dqueue{
	int front;
	int rear;
	int a[size];
	public:
	Dqueue():front(0),rear(0){}
	
	bool IsEmpty(){
		return ((front==0 &&rear==0)||(front==rear));
	}
	bool IsFull(){
		return ((front+1==rear)||(rear==4&&front==0));
	}
	void AddAtFront(int ele){
		if(IsFull()){
			cout<<"Queue is full"<<endl;
			}
		
		else
		{
			if(front==0)
				front=size;
			
			front--;
			a[front]=ele;
			cout<<ele<<" Added"<<endl;
			
		}
	}
	void AddAtEnd(int ele){
		if(IsFull()){
			cout<<"Queue is full"<<endl;
		}
		else
		{	if(rear==size-1)
				rear=0;
			rear++;
			a[rear]=ele;
			cout<<ele<<" Added"<<endl;
		}
	}
	void DeleteAtFront(){
		if(IsEmpty()){
			cout<<"Queue is empty"<<endl;
			}
		else
		{
			front++;
		}
	}
	void DeleteAtRear(){
		if(IsEmpty()){
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			rear--;
		}
	}
	void Display(){
		int temp =0;
		cout<<front;
		cout<<rear;
	/*	while(temp!=rear){
			cout<<a[temp]<<"-->";
			temp++;
	*/	}
	

};
int main(){
	Dqueue d;
	d.AddAtFront(11);
	d.AddAtEnd(22);
//	d.AddAtFront(33);
//	d.AddAtFront(44);
	d.Display();
	return 0;
}

	
	
	


			
