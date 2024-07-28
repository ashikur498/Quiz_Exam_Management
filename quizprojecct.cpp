#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
struct student{
char name[20],id[20],department[20];
int marks,random;
};
student st;
void CSE(){
    system("CLS");
            cout<<"\t\tCSE Quiz"<<endl;
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<6){
            back:
    st.random=rand()%6;
    for(int j=0;j<=5;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }

arr[i]=st.random;
    switch(st.random){

    case 0:
    cout<<i+1<<")Which of the following is not a programming language?"<<endl;
    cout<<"A.Java  "<<endl;
    cout<<"B.Python "<<endl;
    cout<<"C.Basic "<<endl;
    cout<<"D. C++"<<endl;
    choice=getch();
    if(choice=='c'||choice=='C'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;
            }
            cout<<"\n\n\t"<<endl;
            break;
    case 1:
    cout<<i+1<<")Which ot the following type is provided by C++ but not C"<<endl;
    cout<<"A.double"<<endl;
    cout<<"B.float"<<endl;
    cout<<"C.int"<<endl;
    cout<<"D.bool"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;
            }
            break;
      case 2:
     cout<<i+1<<")which operator can not be overloaded?"<<endl;
    cout<<"A. ==(Equal equal)"<<endl;
    cout<<"B. ?:(Conditional operator)"<<endl;
    cout<<"C. +(Addition) "<<endl;
    cout<<"D. %(Modulus)"<<endl;
    choice=getch();
    if(choice=='B'||choice=='b'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is b"<<endl<<endl;
            }
    break;
    case 3:
 cout<<i+1<<")Which of the following is called address operator?"<<endl;
    cout<<"A. * "<<endl;
    cout<<"B. & "<<endl;
    cout<<"C. ! "<<endl;
    cout<<"D. @ "<<endl;
    choice=getch();
    if(choice=='B'||choice=='b'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is b"<<endl<<endl;
            }
    break;
    case 4:
  cout<<i+1<<")Who created C++?"<<endl;
    cout<<"A. Bjarne Stroustrup "<<endl;
    cout<<"B. Dennis Ritchie "<<endl;
    cout<<"C. Ken thompson "<<endl;
    cout<<"D. Brian kernighan "<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;
            }
    break;
    case 5:
    cout<<i+1<<")Which is the following user header file extenson used in C++ "<<endl;
    cout<<"A. hg "<<endl;
    cout<<"B. cpp"<<endl;
    cout<<"C. h "<<endl;
    cout<<"D. hf "<<endl;
    choice=getch();
    if(choice=='b'||choice=='B'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is b"<<endl<<endl;
            }
    break;
}
i++;
}

}
void English(){
    system("CLS");
    cout<<"\t\tEnglish"<<endl;
     cout<<"Fill in the blanks with appropiate words"<<endl<<endl;
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<6 ){
            back:
    st.random=rand()%6;
    for(int j=0;j<=5;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }

arr[i]=st.random;
    switch(st.random){
    case 0:
     cout<<i+1<<")My grandmother used to maker her children ___ up their beds every morning."<<endl;
    cout<<"A. make"<<endl;
    cout<<"B. to make"<<endl;
    cout<<"C. to do "<<endl;
    cout<<"D. made"<<endl;
    choice=getch();
    if(choice=='A'||choice=='a'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is a"<<endl<<endl;

            }
            break;
             case 1:
     cout<<i+1<<")Hang _____! I'll be there with you in an hour"<<endl;
    cout<<"A. a little"<<endl;
    cout<<"B. down there"<<endl;
     cout<<"C. in there "<<endl;
    cout<<"D. more "<<endl;
    choice=getch();
    if(choice=='C'||choice=='c'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;

            }
            break;
             case 2:
     cout<<i+1<<")When making beer,barley is ____ to bring out it's sweetness."<<endl;
    cout<<"A. germinated"<<endl;
    cout<<"B. malting "<<endl;
    cout<<"C. growing"<<endl;
    cout<<"D. produced "<<endl;
    choice=getch();
    if(choice=='a'||choice=='A'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is a"<<endl<<endl;

            }
            break;
             case 3:
     cout<<i+1<<")You _____ her with my son,He was with me all the time."<<endl;
    cout<<"A. may have seen"<<endl;
    cout<<"B. mustn't see"<<endl;
    cout<<"C. can't have seen "<<endl;
    cout<<"D. should see"<<endl;
    choice=getch();
    if(choice=='c'||choice=='C'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;

            }
            break;
             case 4:
     cout<<i+1<<")Children need to have their imagination _____"<<endl;
    cout<<"A. impacted"<<endl;
    cout<<"B. simulated "<<endl;
    cout<<"C. stimulated "<<endl;
    cout<<"D. feigned "<<endl;
    choice=getch();
    if(choice=='c'||choice=='C'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;
            }
            break;
             case 5:
     cout<<i+1<<")I got a _____ box for my birthday."<<endl;
    cout<<"A. white small wooden"<<endl;
    cout<<"B. small white wooden "<<endl;
    cout<<"C. small wooden white "<<endl;
    cout<<"D. wooden small white "<<endl;
    choice=getch();
    if(choice=='B'||choice=='b'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is b"<<endl<<endl;

            }
            break;

}
i++;
    }}
void EEE(){
     system("CLS");
     cout<<"\t\tEEE Quiz"<<endl;
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<6 ){
            back:
    st.random=rand()%6;
    for(int j=0;j<=6;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }

arr[i]=st.random;
    switch(st.random){
     case 0:
     cout<<i+1<<")The reciprocal of resistance is : ?"<<endl;
    cout<<"A. Voltage"<<endl;
    cout<<"B. Current"<<endl;
    cout<<"C. Conductance "<<endl;
    cout<<"D. Coulombs"<<endl;
    choice=getch();
    if(choice=='C'||choice=='c'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;

            }
            break;
             case 1:
    cout<<i+1<<")Capacitance is measured in : ?"<<endl;
    cout<<"A. Coulombs "<<endl;
    cout<<"B. Joules"<<endl;
    cout<<"C. Henrys"<<endl;
    cout<<"D. Farads"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;

            }
            break;
             case 2:
     cout<<i+1<<")An RC circuit has R=2 ohm and C=4F,what's the time constant?"<<endl;
    cout<<"A. 0.5 s"<<endl;
    cout<<"B. 2 s"<<endl;
    cout<<"C. 4 s"<<endl;
    cout<<"D. 8 s"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;

            }
            break;
             case 3:
     cout<<i+1<<")The imaginary part of impedence is called : ?"<<endl;
    cout<<"A. resistance "<<endl;
    cout<<"B. conductance"<<endl;
    cout<<"C. reactance "<<endl;
    cout<<"D. admittance"<<endl;
    choice=getch();
    if(choice=='C'||choice=='c'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;

            }
            break;
             case 4:
     cout<<i+1<<")The two input terminals of an op amp are labeled as : "<<endl;
    cout<<"A. high and low"<<endl;
    cout<<"B. positive and negative "<<endl;
    cout<<"C. inverting and non inverting "<<endl;
    cout<<"D. differential and nondifferential"<<endl;
    choice=getch();
    if(choice=='c'||choice=='C'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is c"<<endl<<endl;

            }
            break;
             case 5:
     cout<<i+1<<")Which of these amplifiers is used in a digital to analog converter ?"<<endl;
    cout<<"A. noninverter"<<endl;
    cout<<"B. voltage follower"<<endl;
    cout<<"C. summer"<<endl;
    cout<<"D. difference amplifier"<<endl;
    choice=getch();
    if(choice=='D'||choice=='d'){
       cout<<"Your answer is correct"<<endl<<endl;
        st.marks++;
    }
    else{
        cout<<"Your answer is incorrect"<<endl;
        cout<<"The correct answer is d"<<endl<<endl;

            }
            break;


}
i++;
    }
}
void result(){
float percentage=0;
cout<<"\n\n\t\t*********"<<endl;
        cout<<"\t\t Student Quiz's Result"<<endl;
        cout<<"\t\t*********"<<endl;
cout<<"Student's name: "<<st.name<<endl;
cout<<"Student's id: "<<st.id<<endl;
cout<<"Student's department: "<<st.department<<endl;
cout<<"Student's obtained marks: "<<st.marks<<" out of 6"<<endl;
percentage=100*st.marks/6;
cout<<"percentage: "<<percentage<<"%"<<endl;
if(percentage>=50){
    cout<<"Status: Passed"<<endl;
}
else{
    cout<<"Status: Failed"<<endl;
}
}
int main(){
char press,select;
do{
        system("CLS");
        cout<<"\n\n\t\t*********"<<endl;
        cout<<"\t\t Student Quiz "<<endl;
        cout<<"\t\t*********"<<endl;
        cout<<"\t\tEnter student name: ";
        gets(st.name);
        cout<<"\t\tEnter roll no: ";
        gets(st.id);
        cout<<"\t\tEnter department name: ";
        gets(st.department);
        system("CLS");
        cout<<"\t\tMarks less than 50% will be considered as fail"<<endl<<endl;
        cout<<"Select which subject you want to take a quiz on"<<endl;
        cout<<"1) CSE"<<endl;
        cout<<"2) English"<<endl;
        cout<<"3) EEE"<<endl;
        select=getch();
        switch(select){
    case '1':
        CSE();
        result();
        break;
    case '2':
        English();
        result();
        break;
    case '3':
        EEE();
        result();
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
        }
    cout<<"Press C to continue or any key to terminate"<<endl;
    press=getch();
    system("CLS");

}while(press=='c'||press=='C');
}
