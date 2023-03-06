// E -> TE'
// E'-> +TE'/e
// T->FT'
// T'->*FT'/e
// F->(E)/id
#include <stdio.h>
#include <string.h>
#define MAX 100
int i=0;

void E(char input[]){
    T(input);
    E_dash(input);
}
void E_dash(char input[]){
    if(input[i]=='+'){
        i++;
        T(input);
        E_dash(input);
    }
}
void T(char input[]){
    F(input);
    T_dash(input);
}
void T_dash(char input[]){
     if(input[i]=='*'){
        i++;
        F(input);
        T_dash(input);
}
}
void F(char input[]){

  if(input[i]=='(')
  {
        i++;
        E(input);
         if(input[i]==')')
         {
        i++;
    }

    else{
        printf("ERROR");
    }

}
else if(input[i]=="i")
{
        i++;


   }

    else{
        printf("ERROR");
    }



}

int main(){

char input[MAX];

fgets(input,MAX,stdin);
int p= strlen(input);
E(input);
if((p-1)==i){
    printf("accepted");
}
else{
    printf("\n Not Accepted");
}
}
