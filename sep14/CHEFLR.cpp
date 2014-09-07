#include"stdio.h"
#include"stdlib.h"
#include"string.h"

#define MOD 1000000007

int main(){
    int T;
    char* str = (char*) malloc( sizeof(char)*100000 );
    scanf( "%d", &T );
    for( int i=0;i<T;i++ ){
        scanf( "%s", str );
        int length = strlen(str), retVal =0;
        for( int i=0;i<length;i++ ){
            if( str[i] == 'l' ) 
                retVal = ( 2*retVal + 1 ) % MOD;
            else
                retVal = ( 2*retVal + 2 ) % MOD;

        }
        retVal++;
        printf( "%d\n", retVal );
    }
}

