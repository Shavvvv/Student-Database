//
//  main.cpp
//  Unit 1 -Reading Assignment
//
//  Created by Shav G on 9/16/24.
//

#import <iostream>
using namespace std;

void menu();
void line();
int main() {
    
    
    int choice;
    cout<< "This program is focused on collecting student records. \n";
    while(true){
        menu();
        cin>>choice;
        switch (choice) {
            case 1:
                line();
                cout<<"Add a Student\n";
                line();
                break;
            case 2:
                line();
                cout<<"Drop a Student\n";
                line();
                break;
            case 3:
                line();
                cout<<"Grade a Student\n";
                line();
            case 4:
                line();
                cout<<"View all Students, past and present\n";
                line();
                break;
            case 5:
                line();
                cout<<"View all current Students\n";
                line();
                break;
            case 6:
                line();
                cout<<"View all dropped Students\n";
                line();
                break;
            case 0:
                return 0;
            default:
                break;
        }
        
    }
    return 0;
}

/*
 Create a system similar to the Employee Records system in the textbook, however, this is a Student Records system. You will need to:

 Add a student - use string_views where appropriate!
 Drop a student
 Grade a student
 View all students, past and present
 View all current students
 View all dropped students
 You will need an implementation of the Database class from the textbook to implement the testing program.

 The default for a student's starting grade is either 0 or 4, depending on your philosophy (start at the bottom (0) or the top (4), depending on your philosophy).

 Comment your code, name your methods and your variables appropriately using the style pointers given in the textbook.

 REMEMBER: you have the textbook code (look in the General Information section!)
 */

void menu(){
    cout<< "Student Database\n";
    cout<<"---------------\n";
    cout<<"1) Add a Student\n";
    cout<<"2) Drop a Student\n";
    cout<<"3) Grade a Student\n";
    cout<<"4) View all Students, past and present\n";
    cout<<"5) View all current Students\n";
    cout<<"6) View all dropped Students\n";
    
}

void line(){
    cout<<"*******************"<<endl;
}
