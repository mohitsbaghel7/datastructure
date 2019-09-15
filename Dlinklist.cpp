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
				temp->SetPrev(nullptr);
				head=tail=temp;
			}
			else
			{
				tail->SetNext(temp);
				temp->SetPrev(tail);
				tail=temp;
			}
		}
		void AddAtBegin(T ele){
			node<T> *temp = new node<T>;
				temp->SetData(ele);
				temp->SetPrev(nullptr);
				if(IsEmpty()){
					temp->SetNext(nullptr);
					head=tail=temp;
				}
				else
				{
					temp->SetNext(head);
					head->SetPrev(temp);
					head=temp;
				}
		}

		bool IsEmpty(){
			return (head==nullptr&&tail==nullptr);	
		}

		void FrontDisplay(){
			node<T> *t= head;
			cout<<"\n";	
				while(t!=nullptr)
				{
					cout<<t->GetData()<<"-->";
					t=t->GetNext();
				}	
			cout<<"NULL"<<endl;
			
		
		}

			void BackDisplay(){
			node<T> *t = tail;
			cout<<"\n";
			while(t!=nullptr){
					cout<<t->GetData()<<"-->";
					t=t->GetPrev();
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
	ll.AddAtBegin(10);
//cout<<"done"<<endl;
	ll.FrontDisplay();
	ll.BackDisplay();
//	ll.Display();
	return 0;
}

