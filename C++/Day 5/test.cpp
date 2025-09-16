#include<iostream>
using namespace std;

class test{
    int marks;
    public:
    void accept(){
        cout<<"Enter marks: ";
        cin>>marks;
    }
    int getMarks(){
        return marks;
    }
    public:
    void process(test &t){
    cout<<"Marks: "<<t.getMarks()<<endl;
}

};

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    test* p_marks = new test[n];

    for(int i=0;i<n;i++){
    (p_marks+i)->accept();
    (p_marks+i)-> process(p_marks[i]);
    }

    delete[] p_marks;
}