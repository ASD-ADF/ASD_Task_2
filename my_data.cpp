#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data()
{
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Student ID    : ";
    cin>>d.stdntid;
    cout<<"Student Name  : ";
    cin>>d.stdntname;
    cout<<"Student Class : ";
    cin>>d.stdntclass;
    cout<<"Student GPA   : ";
    cin>>d.stdntgpa;
    cout<<endl;
    // ===========================
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Student ID    : "<<d.stdntid<<endl;
    cout<<"Student Name  : "<<d.stdntname<<endl;
    cout<<"Student Class : "<<d.stdntclass<<endl;
    cout<<"Student GPA   : "<<d.stdntgpa<<endl;
    // ===========================
}


void edit_data(mytype &d)
{
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Student ID    : ";
    cin>>d.stdntid;
    cout<<"Student Name  : ";
    cin>>d.stdntname;
    cout<<"Student Class : ";
    cin>>d.stdntclass;
    cout<<"Student GPA   : ";
    cin>>d.stdntgpa;
    cout<<endl;
    // ===========================
}
