#include <iostream>
#include <string>

using namespace std;

int lth;
int n1,n2,n3,n4;
int p1,p2,p3,p4;

void split(int n);
void translate(int n, int p);



int main()
{
    cout << "Type a number!" << endl;
    cin>>lth;
    if(lth<0){
        cout<<"minus ";
        lth = lth*(-1);}
    split(lth);
    if(n4!=0){
    translate(n4,p4);
    cout<<"billion ";
    }
    if(n3!=0){
    translate(n3,p3);
    cout<<"million ";
    }
    if(n2!=0){
    translate(n2,p2);
    cout<<"thousand ";
    }
    if(n1!=0){
    translate(n1,p1);
    //cout<<"(units)";
    }





    return 0;
}


void split(int n){
n1=n%1000;
p1=n%100;
n =n/1000;//Hundred

n2=n%1000;
p2=n%100;
n =n/1000;//Thousand

n3=n%1000;
p3=n%100;
n =n/1000;//Million

n4=n%1000;
p4=n%100;
n =n/1000;//Billion

/*cout<<"N1 = "<<n1<<endl;
cout<<"P1 = "<<p1<<endl;
cout<<"N2 = "<<n2<<endl;
cout<<"P2 = "<<p2<<endl;
cout<<"N3 = "<<n3<<endl;
cout<<"P3 = "<<p3<<endl;
cout<<"N4 = "<<n4<<endl;
cout<<"P4 = "<<p4<<endl;*/
}


void translate(int n,int p){
    int tempvar = n/100;
    switch(tempvar){
    case 1://Firts digit
        cout<<"one ";
        break;
    case 2:
        cout<<"two ";
        break;
    case 3:
        cout<<"three ";
        break;
    case 4:
        cout<<"four ";
        break;
    case 5:
        cout<<"five ";
        break;
    case 6:
        cout<<"six ";
        break;
    case 7:
        cout<<"seven ";
        break;
    case 8:
        cout<<"eight ";
        break;
    case 9:
        cout<<"nine ";
        break;}
    if(n>=100){
    cout<<"hundred ";}
    if(p>=20){//Second Digit if >=20
        switch(p/10){
    case 1:
        cout<<"one ";
        break;
    case 2:
        cout<<"twenty ";
        break;
    case 3:
        cout<<"thirty ";
        break;
    case 4:
        cout<<"fourty ";
        break;
    case 5:
        cout<<"fifty ";
        break;
    case 6:
        cout<<"sixty ";
        break;
    case 7:
        cout<<"seventy ";
        break;
    case 8:
        cout<<"eighty ";
        break;
    case 9:
        cout<<"ninety ";
        break;}

       switch(p%10){//Third Digit if >=20
    case 1:
        cout<<"one ";
        break;
    case 2:
        cout<<"two ";
        break;
    case 3:
        cout<<"three ";
        break;
    case 4:
        cout<<"four ";
        break;
    case 5:
        cout<<"five ";
        break;
    case 6:
        cout<<"six ";
        break;
    case 7:
        cout<<"seven ";
        break;
    case 8:
        cout<<"eight ";
        break;
    case 9:
        cout<<"nine ";
        break;}


    }else{
        switch(p){
    case 1:
        cout<<"one ";
        break;
    case 2:
        cout<<"two ";
        break;
    case 3:
        cout<<"three ";
        break;
    case 4:
        cout<<"four ";
        break;
    case 5:
        cout<<"five ";
        break;
    case 6:
        cout<<"six ";
        break;
    case 7:
        cout<<"seven ";
        break;
    case 8:
        cout<<"eight ";
        break;
    case 9:
        cout<<"nine ";
        break;
    case 10:
        cout<<"ten ";
        break;
    case 11:
        cout<<"eleven ";
        break;
    case 12:
        cout<<"twelve ";
        break;
     case 13:
        cout<<"thirteen ";
        break;
    case 14:
        cout<<"fourteen ";
        break;
    case 15:
        cout<<"fifteen ";
        break;
    case 16:
        cout<<"sixteen ";
        break;
    case 17:
        cout<<"seventeen ";
        break;
    case 18:
        cout<<"eighteen ";
        break;
    case 19:
        cout<<"nineteen ";
        break;}



        }



}
