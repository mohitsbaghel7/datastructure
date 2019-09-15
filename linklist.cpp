#include "node.cpp"
template<class T>
class linklist{
		node<T> *head;
		node<T> *tail;
	public:
		linklist():head(nullptr),tail(nullptr){};
		void AddAtEnd(T ele){
			node<T> *temp = new node<T>;
				temp->SetData(ele);
				temp->SetNext(nullptr);
			if(IsEmpty()){
				head=tail=temp;
			}
			else
			{
				tail->SetNext(temp);
				tail=temp;
			}
		}
		bool IsEmpty(){
			return (head==nullptr&&tail==nullptr);
		}

		void Display(){
			node<T> *t= head;
			cout<<"\n";	
				while(t!=nullptr){
					cout<<t->GetData()<<"-->";
					t=t->GetNext();
				}
				cout<<"NULL"<<endl;
			
		
		}

};
int main(){
	linklist<int> ll;
	ll.AddAtEnd(11);
	ll.AddAtEnd(22);
	ll.AddAtEnd(33);
	ll.AddAtEnd(44);
	ll.AddAtEnd(55);
	ll.AddAtEnd(66);
	ll.AddAtEnd(77);
	ll.Display();
	return 0;
}

