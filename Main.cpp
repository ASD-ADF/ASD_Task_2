#include "array_based.h"

void menu();

mytype database[10];
int n_data = 0;         // integer to trach the number of data inside database array


int main() {
    cout<<"Test My Data"<<endl;
    mytype d;
    d = create_data();
    cout<<endl;

    cout<<"Test View My New Data"<<endl;
    view_data(d);
    cout<<endl;

    cout<<"Test Edit My New Data"<<endl;
    edit_data(d);
    cout<<"edit result"<<endl;
    view_data(d);
    cout<<endl;
    cout<<"is the data really edited? "<<endl;
    cout<<"make sure it can actually edit your data"<<endl;
    cout<<endl<<"press enter to continue"<<endl;
    cin.get();
    cin.get();
    cout<<endl;

    n_data = 0;
    cout<<"Test Add Data to Database, Twice"<<endl;
    d = create_data();
    add_new_data(database, n_data, d);
    d = create_data();
    add_new_data(database, n_data, d);
    cout<<endl;
    cout<<"Test View Database"<<endl;
    view_data(database, n_data);
    cout<<endl;

    cout<<"Test Add Priority Data to Database, Twice"<<endl;
    d = create_data();
    add_new_priority_data(database, n_data, d);
    d = create_data();
    add_new_priority_data(database, n_data, d);
    cout<<endl;
    cout<<"Test View Database"<<endl;
    view_data(database, n_data);
    cout<<endl;
    cin.get();
    cout<<endl;

    cout<<"Test Array Based Application Data"<<endl;
    menu();
    return 0;
}

void menu() {
    mytype d;
    int idx;
    int ch;
    int id_to_find;
    int id_to_remove;
    do {
        cout<<"MENU"<<endl;
        cout<<"1. add new data to the end of database"<<endl;
        cout<<"2. add new data to the front of database"<<endl;
        cout<<"3. view all data from database"<<endl;
        cout<<"4. find and view a data based on its ID"<<endl;
        cout<<"5. find and edit a data based on its ID"<<endl;
        cout<<"6. remove a data based on its ID"<<endl;
        cout<<"7. sort data based on its float variable"<<endl;
        cout<<"0. exit aplication"<<endl;
        cout<<"input choice:";
        cin>>ch;
        switch(ch) {
        case 1:
            d = create_data();
            add_new_data(database, n_data, d);
            break;
        case 2:
            d = create_data();
            add_new_priority_data(database, n_data, d);
            break;
        case 3:
            view_data( database,  n_data);
            break;
        case 4:
            cout<<"insert ID to find: ";
            cin>>id_to_find;
            idx = find_data( database,  n_data,  id_to_find);
            if(idx!=-1) {
                view_data(database[idx]);
            } else {
                cout<<"data not found"<<endl;
            }
            break;
        case 5:
            cout<<"insert ID to edit: ";
            cin>>id_to_find;
            idx = find_data( database,  n_data,  id_to_find);
            if(idx!=-1) {
                edit_data(database[idx]);
            } else {
                cout<<"data not found"<<endl;
            }
            break;
        case 6:
            cout<<"insert ID to remove: ";
            cin>>id_to_remove;
            remove_data( database,  n_data,  id_to_remove);
            break;
        case 7:
            sort_data( database,  n_data);
            cout<<"Data Sorted"<<endl;
            break;
        case 0:
            cout<<"Thank You"<<endl;
            break;
        default:
            cout<<"Wrong Input"<<endl;
            break;
        }
    } while (ch!=0);
}
