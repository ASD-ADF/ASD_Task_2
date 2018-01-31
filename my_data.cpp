
#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : YOGA AJITAMA
    STUDENT ID : 1301170471
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    cout<<"Insert Name  : ";
    cin>>d.name;
    cout<<"Insert ID    : ";
    cin>>d.id;
    cout<<"Insert Class : ";
    cin>>d.cls;
    cout<<"Insert Score : ";
    cin>>d.score;
    cout<<endl;

    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */
 cout<<"Name  : "<<d.name<<" "<<endl;
 cout<<"ID    : "<<d.id<<" "<<endl;
 cout<<"Class : "<<d.cls<<" "<<endl;
 cout<<"Score : "<<d.score<<" "<<endl<<endl;


}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

   cout<<"Insert Name   : ";
    cin>>d.name;
    cout<<"Insert Class : ";
    cin>>d.cls;
    cout<<"Insert score : ";
    cin>>d.score;
    cout<<endl;
}

