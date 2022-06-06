#include <iostream>
using namespace std;
int main(){
    int c1,c2,c3,c4,c5,c6,c7,c8,c9;
    c1=c2=c3=c4=c5=c6=c7=c8=c9=0; //counter to check that 2 inputs are not taken for same place.
    int z=0;
    char i; //i is either x or o.
    char x[3][3]; // array is char type because elements are x or o.
    int n,m; //x and y axis
    while(true){
        z++;
        if(z%2==0){
            i='x';
        }else{
            i='o';
        }

        cout<<"chance is of: "<<i<<endl; //displayng the chance, whether x or o.

        cout<<"(axis starts from 0,0)";
        cout<<"\nenter x axis: ";
        cin>>n;
        cout<<"enter y axis: ";
        cin>>m;

        if(c1!=0 || c2!=0 || c3!=0 || c4!=0 || c5!=0 || c6!=0 || c7!=0 || c8!=0 || c9!=0){
            cout<<"the element you chose to enter your "<<i<<" in is already filled! choose another element that is empty!"<<endl;
            z--; //will set the value of z back to what it was before starting the loop which triggered this "if" statement.
            continue; // shifts the control of loop to the condition, means, loop will start again.
        }

        if(n==0 && m==0){
            c1++;
        }else if(n==0 && m==1){
            c2++;
        }else if(n==0 && m==2){
            c3++;
        }else if(n==1 && m==0){
            c4++;
        }else if(n==1 && m==1){
            c5++;
        }else if(n==1 && m==2){
            c6++;
        }else if(n==2 && m==0){
            c7++;
        }else if(n==2 && m==1){
            c8++;
        }else if(n==2 && m==2){
            c9++;
        }



        x[n][m]=i; //i is input in x or o. so placing either x or o as elements in matrix.

        if(z==9){
            break;
        }
        if(x[0][0]==x[0][1]==x[0][2]){
            break;
            cout<<i<<" won!"<<endl;
        }else if(x[1][0]==x[1][1]==x[1][2]){
            break;
            cout<<i<<" won!"<<endl;
        }else if(x[2][0]==x[2][1]==x[2][2]){
            break;
            cout<<i<<" won!"<<endl;
        } // 3 rows done.
        
        else if(x[0][0]==x[1][0]==x[2][0]){
            break;
            cout<<i<<" won!"<<endl;
        }else if(x[0][1]==x[1][1]==x[2][1]){
            break;
            cout<<i<<" won!"<<endl;
        }else if(x[0][2]==x[1][2]==x[2][2]){
            break;
            cout<<i<<" won!"<<endl;
        } // 3 columns done.

        else if(x[0][0]==x[1][1]==x[2][2]){
            break;
            cout<<i<<" won!"<<endl;
        }else if(x[0][2]==x[1][1]==x[2][0]){
            break;
            cout<<i<<" won!"<<endl;
        } // 2 diagonals done.
        


    }


    return 0;
}