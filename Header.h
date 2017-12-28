#pragma once
#include <iostream>
#include <string>

using namespace std;

struct student{
  int id;
  string name ;
  float mark1 ;
  float mark2;
  float mark3 ;
  student* next ;
  student* prev;
};

void toUpper(string &text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] <= 'z' && text[i] >= 'a')
			{
				text[i] -= ('a' - 'A');
			}
		}
}

class StudentArray{
  student* head ;
  student* last ;
public:
  StudentArray():head(NULL),last(NULL){
  }
    void insert(){
    student* s = new student ;
    student* temp =head ;
    string name ;
    float m1 ;float m2 ; float m3 ;
    cout<<"Enter the ID of student   :"<<endl ;
    cin>>s->id;
    cin.ignore();
    cout<<"Enter the name of student :"<<endl ;
    getline(cin,name);
    toUpper(name);
    s->name= name ;
    cout<<"Enter the marks of student :"<<endl ;
    cin>>m1>>m2>>m3 ;
    cin.ignore();
    s->mark1=m1 ; s->mark2=m2; s->mark3=m3 ;
		s->next = NULL;
		s->prev = NULL;
		if (head == NULL)
		{
			s->next = head;
			head = s;
			last = s;
			return;
		}
		else if (s->id < temp->id) {
			temp->prev = s;
			s->next = temp;
			head = s;
			return;
		}
		while (temp->next != NULL) {
			if (s->id > temp->next->id)
				temp = temp->next;
			else {
				s->next = temp->next;
				s->prev = temp;
				temp->next->prev = s;
				temp->next = s;
				temp = s;
				s = temp->next;
				return;
			}
		}
		s->prev = temp->next;
		temp->next = s;
		last = s;

  cout<<"Student has been added  ."<<endl ;
}

void print()
  {
  	student *temp = head;
  	if (head != NULL) {
  		while (temp->next != NULL) {
        cout<<"ID :"<<temp->id<<' '<<"Name :"<<temp->name<<" "<<"Mark1 :"<<temp->mark1<<' '<<"Mark2 :"<<temp->mark2<<' '<<"Mark3 :"<<temp->mark3<<endl;
  			temp = temp->next;
  		}
      cout<<"ID :"<<temp->id<<' '<<"Name :"<<temp->name<<" "<<"Mark1 :"<<temp->mark1<<' '<<"Mark2 :"<<temp->mark2<<' '<<"Mark3 :"<<temp->mark3<<endl;
  }
 }
void total(){
 if (head != 0) {
		string name;
		cout << "Name:";
		cin.ignore();
		getline(cin,name);
    toUpper(name);
		student * temp;
		student * prev;

		if (head->name == name) {
			cout << "Total Mark = " << head->mark1 + head->mark2 + head->mark3 << endl;
		}

		else {
			temp = head;
			while (temp != 0) {
				if (temp->name == name)
				{
					cout << "Total Mark = " << temp->mark1 + temp->mark2 + temp->mark3 << endl;
					temp = temp->next;
				}
				else
					temp = temp->next;

			}
		}
	}
}
// bad_ip:
//    char x;
//    cout<<"Do you wanna try again ? (Y/N)"<<endl ;
//    cin.get(x);
//    cin.ignore();
//    if  (x=='Y' || x=='y')
//     goto Again ;
//     else if(x=='N' || x=='n')
//     return  ;
//     else goto bad_ip;

 void Delete_s(){
   int id ;
   student* temp = head ;
   cout<<"Enter the id of the student :: "<<endl ;
   cin.ignore();
   cin>>id ;

  while(temp){
    if (temp->id == id ) {
      /* code */
      student* prev = temp->prev;
      prev->next=temp->next;
      delete[] temp;
      cout<<"The student has been deleted "<<endl ;
      return ;
    }
    temp=temp->next ;
  }

cout<<"The Id doesn't exist  "<<endl ;
 }
 void Delete_All( ){
   while(head != NULL){
     student* temp=head;
  head =head->next ;
temp=NULL;   }
   cout<<"The list is empty "<<endl ;
 }

};
