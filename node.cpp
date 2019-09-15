#include<iostream>
using namespace std;
template <class T>
class node{
	private:
		T data;
		node *next;
	public:
		void SetData(T ele){
			data=ele;
		}

		T GetData(){
			return data;
		}
		
		void SetNext(node* temp){
			next=temp;
		}
		node* GetNext(){
			return next;
		}
};
