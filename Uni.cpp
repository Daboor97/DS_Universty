
#include"Header.h"


int main()
{
int op ;
int Exit ;
StudentArray* S =new StudentArray;
Menu:
cout<<"**********************************************"<<endl ;
cout<<"*Choose an operation :                       *"<<endl ;
cout<<"*1-Add a student     :                       *"<<endl ;
cout<<"*2-List all students :                       *"<<endl ;
cout<<"*3-Get marks of student :                    *"<<endl ;
cout<<"*4-Delete a student  :                       *"<<endl ;
cout<<"*5-Delete all        :                       *"<<endl ;
cout<<"**********************************************"<<endl ;
cin>> op ;
switch(op){
  case 1:{S->insert();
    exit_lable:
    cout<<"Please Enter 0 to terminate the program or 1 to back to menu ."<<endl;
    cin>>Exit ;
    if (Exit==1) {
      goto Menu;
    }
      if (Exit==2) {
        break ;
      }
      else {
        cout<<"Worng input choose again ; "<<endl;
        goto exit_lable;
      }
  }
  case 2:{
    S->print();
    cout<<"Please Enter 0 to terminate the program or 1 to back to menu ."<<endl;
    cin>>Exit ;
    if (Exit==1) {
      goto Menu;
    }
      if (Exit==2) {
        break ;
      }
      else {
        cout<<"Worng input choose again ; "<<endl;
        goto exit_lable;
      }
  }
  case 3:{
     S->total();
    cout<<"Please Enter 0 to terminate the program or 1 to back to menu ."<<endl;
    cin>>Exit ;
    cin.ignore();
    if (Exit==1) {
      goto Menu;
    }
      if (Exit==2) {
        break ;
      }
      else {
        cout<<"Worng input choose again ; "<<endl;
        goto exit_lable;
      }
  }
  case 4:{
            S->Delete_s();
    cout<<"Please Enter 0 to terminate the program or 1 to back to menu ."<<endl;
    cin>>Exit ;
    if (Exit==1) {
      goto Menu;
    }
      if (Exit==2) {
        break ;
      }
      else {
        cout<<"Worng input choose again ; "<<endl;
        goto exit_lable;
      }
  }
  case 5:{
    S->Delete_All();
    cout<<"Please Enter 0 to terminate the program or 1 to back to menu ."<<endl;
    cin>>Exit ;
    if (Exit==1) {
      goto Menu;
    }
      if (Exit==2) {
        break ;
      }
      else {
        cout<<"Worng input choose again ; "<<endl;
        goto exit_lable;
      }
  }
}
}
