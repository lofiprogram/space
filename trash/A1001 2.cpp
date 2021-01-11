
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c<0) cout<<'-';
    c=abs(c);
    char s[20];
    sprintf(s,"%d",c);
    int len=strlen(s);
    //if(len<=3) {cout<<s;return 0;}
    int m=len/3,n=len%3,start=0;
    //cout<<"m="<<m<<' '<<"n="<<n<<endl;
    if(n==0) {cout<<s[0]<<s[1]<<s[2];start=3;m--;}
    else if(n==1) {cout<<s[0];start=1;}
    else if(n==2) {cout<<s[0]<<s[1];start=2;}
    while(m!=0){
        cout<<',';
        cout<<s[start]<<s[start+1]<<s[start+2];
        start+=3;
        m--;
    }
    return 0;
}



#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c<0){cout<<'-';c=-c;}
    if(c>=1000000){
        printf("%d,%03d,%03d",c/1000000,c%1000000/1000,c%1000);
    }else if(c>=1000){
        printf("%d,%03d",c/1000,c%1000);
    }else{
        printf("%d",c);
    }
    return 0;
}


/*

方法一：通用方法，把两数和作为字符串处理。
方法二：针对本题最多七位数的情况，写个特别的。
https://blog.csdn.net/qq_27474589/article/details/76425596?utm_medium=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromBaidu-1.control&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromBaidu-1.control

*/

