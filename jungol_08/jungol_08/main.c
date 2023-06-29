//
//  main.c
//
//
//
//

/*#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a='*';
    for(int i=0;i<3;i++){
        for(int k=0;k<i+1;k++){
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}*/

// 634
/*
#include<stdio.h>
int main(){
    int n;
    char c='*';
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int k=0;k<i+1;k++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
*/

// 9057
/*
#include <stdio.h>

int main(){
    char c='*';
    
    for(int i=0;i<3;i++){
        for(int k=0;k<i+1;k++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(int j=0;j<3;j++){
        for(int q=3;q>j;q--){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
*/

//550
/*
#include <stdio.h>

int main(){
    int n;
    char c='*';
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            printf("%c",c);
        }
        printf("\n");
    }
    for(int j=0;j<n;j++){
        for(int q=0;q<j+1;q++){
            printf("%c",c);
        }
        printf("\n");
    }
    
    return 0;
}
*/

//9058
/*
#include<stdio.h>

int main(){
    
    int n;
    char c='*';
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int k=1;k<n-i;k++){
            printf(" ");
        }
        for(int q=0;q<=i;q++){
            printf("%c",c);
        }
    
        printf("\n");
    }
    return 0;
}
*/

//551
/*
#include<stdio.h>

int main(){
    int n;
    char c='*';
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("%c",c);
        }
        printf("\n");
        for(int k=i+1;k>0;k--){
            printf(" ");
        }
    }
    
    return 0;
}
*/

//9059  공부 다시하기

/*#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int k=i;k<=3;k++){
            printf(" ");
        }
        for(int q=0;q<=(i*2);q++){
            printf("*");
        }
        printf("\n");
    }
    return  0;
}
 */

//552

/*#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int q=0;q<(n-i)*2-1;q++){
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}

*/

// 9061

/*#include<stdio.h>

int main(){
    int n;
    int num=1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
*/

//553

/*#include<stdio.h>

int main(){
    int n;
    char c='A';
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int k=0;k<i;k++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}
*/

//9062  스스로 맞췄다!
/*
 #include<stdio.h>

int main(){
    char c='a';
    int a=1;
    for(int i=0;i<4;i++){
        for(int k=0;k<=i;k++){
            printf("%c ",c);
            c++;
        }
        for(int q=i+1;q<=4;q++){
            printf("%d ",a);
            a++;
        }
        printf("\n");

    }
    return 0;
}
*/
//554  스스로 풀었다! 좀 더 간단한 방법이 없을까?

/*#include <stdio.h>

int main(){
    int n,a=1;
    char c ='A';
    
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int k=n;k>i-1;k--){
            printf("%d ",a);
            a++;
        }
        for(int q=0;q<i;q++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
        
    }
    return 0;
}
*/

//140
/*
#include <stdio.h>

int main(){
    int sum=0;
    int a,count=0;
    
    for(int i=0;i<20;i++){
        scanf("%d",&a);
        if(a==0){ break;}
        sum+=a;
        count++;
       
    }
    printf("%d %d",sum,sum/count);
    return 0;
    
}
*/

//141
/*
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    for(int i=a;i<=100;i=i+a){
        printf("%d ",i);
        if(a*i%10==0){
            break;
        }
    }
    
    return 0;
}
*/

//142

#include<stdio.h>

int main(){
    int a;
    char c='*';
    
    scanf("%d",&a);
    
    for(int i=0;i<a-1;i++){
        for(int k=0;k<=i;k++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(int q=0;q<a;q++){
        for(int j=a;j>q;j--){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
