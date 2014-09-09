#include"stdio.h"
#include"stdlib.h"
//#include <string>

using namespace std;

int main(){
    int num,m,startPtr=0,dist,i;
    char type[5];
    char* str = (char*)malloc(sizeof(char)*100);
    scanf("%d%d",&num,&m);
    int* arr = (int*) malloc(sizeof(int)*num);

    for(i=0;i<num;i++){
        scanf("%d", arr+i);
    }
    for(i=0;i<m;i++){
        scanf("%s%d", type, &dist  );
        switch(type[0]){
            case('C'):{
                startPtr += dist;
                startPtr %= num;
                break;
            }

            case('A'):{
                startPtr -= dist;
                startPtr += num;
                startPtr %=num;
                break;
            }

            case('R'):{
                int index = (startPtr+dist-1)%num;                
                printf("%d\n", arr[index]);
                break;
            }
        }
    }
}
