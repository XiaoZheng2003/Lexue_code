#include<stdio.h>
//*---*:为修改原因 
void reverse(char *str,int i,int j){   
    char temp;
    if(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        reverse(str,i+1,j-1);
    }
    return;
}
int main()
{
    int n=0;
    char s[100];
    gets(s);
    while(s[n]!='\0')
        n++;
    //reverse(s,0,n);
    reverse(s,0,n-1);	//*传入的字符串应不含末位'\0'*
    puts(s);
    return 0;
}
