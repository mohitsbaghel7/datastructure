#include "node.cpp"
template<class T>
class linklist{
		node<T> *head;
		node<T> *tail;
		int count=0;
	public:
		linklist():head(nullptr),tail(nullptr){};
		~linklist(){
		cout<<"Dtor called"<<endl;
		node<T> *t = NULL;
		while(head!=NULL){
			t = head;
			head= head->GetNext();
			delete t;
			}
		}
		void DeleteAtBegin(){
			node<T> *temp = head;
			head=head->GetNext();
			delete temp;
		}
		void DeleteAtEnd(){
			node<T>*temp = head;
			node<T> *temp1 = temp->GetNext();
			while(temp1!=tail){
				cout<<"Back delete"<<endl;
				temp=temp->GetNext();
				temp1=temp1->GetNext();
			}
			temp->SetNext(nullptr);
			tail=temp;
			delete temp1;
		}
				
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
			count++;
		}
		void AddAtBegin(T ele){
			node<T> *temp = new node<T>;
			temp->SetData(ele);
			temp->SetNext(nullptr);
			if(IsEmpty()){
				head=tail=temp;
			}
			else
			{
				temp->SetNext(head);
				head=temp;
			}
			count++;

		}
		void AddAtPosition(T ele){
			int a,b=0;		
			do{
			cout<<"Enter the position in which you want to store"<<endl;
			cin>>a;
			}while(a>count);

			node<T> *temp = new node<T>;
			temp->SetData(ele);
			temp->SetNext(nullptr);
			if(IsEmpty()){
				head=tail=temp;
			}
			else if(a==1){
				AddAtBegin(ele);
			}
			else if(a==count){
				AddAtEnd(ele);
			}

			else
			{
				node<T> *t = head;
				node<T> *t1 ;
				while(b!=a-1){
					t1= t;
					t=t->GetNext();
					a++;
				}
				temp->SetNext(t);
				t1->SetNext(temp);
			}
				
		}	
		void Reverse(){
			if(IsEmpty()){
				cout<<"Linked list is empty"<<endl;
			}
			else
			{
			node<T> *temp = head;
			node<T> *temp1=temp->GetNext();
			node<T> *temp2=temp1->GetNext();
			temp->SetNext(nullptr);
			tail=temp;
			while(temp2!=nullptr){
				temp1->SetNext(temp);
				temp=temp1;
				temp1=temp2;
				temp2=temp2->GetNext();
				
				}
			temp1->SetNext(temp);
			head=temp1;

		//	head=tail;
		//	tail=temp;
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
//	ll.AddAtBegin(33);
//	ll.AddAtBegin(44);

//	ll.AddAtPosition(103);
//	ll.AddAtEnd(55);
//	ll.AddAtEnd(66);
	ll.AddAtEnd(77);
//	ll.Display();
//	ll.Reverse();
//	ll.Display();
	ll.AddAtEnd(88);
//	ll.Reverse();
	ll.Display();
	ll.DeleteAtEnd();
	ll.Display();
	ll.DeleteAtBegin();
	ll.Display();
	return 0;
}
