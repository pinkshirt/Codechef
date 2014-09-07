#include"stdio.h"
#include"stdlib.h"

int main(){
    int t,n,k, num;
    scanf( "%d", &t );
    for( int i=0; i<t; i++ ){
        scanf( "%d%d", &n,&k );
        int count =0;
        for( int j=0; j<n; j++){
            scanf( "%d", &num );
            if( num%2 == 0 ) count++;
        }
        if( count>=k ) 
            printf("YES\n");
        else 
            printf( "NO\n" );
    }
}
