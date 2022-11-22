#include <iostream>

using namespace std;


class Node {
public:
    int roll;
    string Name;
    string Dept;
    int Marks;
    Node* next;
};

//Node(int roll, string Name,string Dept, int Marks);
class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }


    void createNewNode(int roll,string Name,
                   string Dept, int Marks){
        Node *temp = new Node();
        temp->roll = roll;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }



    void ShowList(){
        while(head->roll != NULL){
            cout<<head->roll<< " ";
            head = head->next;
        }
    }
};

int main()
{

   LinkedList *myList = new LinkedList();
   //Insert_Record(Roll, Name, Course, Marks);

   myList->createNewNode(20, "Hasebul","CSE",30);
  /* myList->createNewNode(50);
   myList->createNewNode(70);
   myList->createNewNode(10);
   myList->createNewNode(90);
   myList->ShowList();
*/
    return 0;
}

