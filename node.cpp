#include<iostream>
using namespace std;
template <class T>
class node{
	private:
		node *prev;
		T data;
		node *next;
	public:
		void SetData(T ele){
			data=ele;
		}

		T GetData(){
			return data;
		}
		
		void SetPrev(node* temp){
		prev = temp;
		}

		void SetNext(node* temp){
			next=temp;
		}
		node* GetNext(){
			return next;
		}
		node* GetPrev(){
			return prev;
		}

};
