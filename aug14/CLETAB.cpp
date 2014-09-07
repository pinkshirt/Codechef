#include"stdio.h"
#include"stdlib.h"

bool contains(int* arr, int size, int val){
    for( int i=0; i<size; i++){
        if( arr[i] == val ) return true;
    }
    return false;
}

void printTables( int* arr, int size ){
    printf( "Tables:\n" );
    for( int i=0;i<size;i++ ){
        printf( "%d,", arr[i] );
    }
    printf( "\n" );
}

int main(){
    int t,n,m,table[200],count[400],stream[400];
    scanf( "%d", &t );
    for( int i=0;i<t;i++ ){
        scanf( "%d%d", &n, &m );
        for( int j=0;j<n;j++ ) table[j] = -1;
        for( int j=0; j<m; j++){
            scanf( "%d", stream+j );
        }

        int tableIndex = 0;
        int cleans = 0;
        for( int j=0;j<m;j++ ){
            if( contains( table, tableIndex, stream[j] ) ){
//                printf( "found %d in tables", stream[j] );
//                printTables( table, tableIndex );
                continue;
            }

            cleans++;
            if( tableIndex<n ){
                table[tableIndex++] = stream[j];
            }
            else{
                int max=0;
                int index;
                for( int k=0;k<n;k++ ){
//                    printf( "currentMin:%d, candidate:%d, count of candidate:%d\n", min, table[k], count[table[k]] );
                    int l;
                    for( l=j+1; l<m; l++ ){
                        if( stream[l] == table[k] ) break;
                    }
                    if( l==m ){
                        index = k;
                        break;
                    }
                    if( l > max ){
                        max = l;
                        index = k;
                    }
                }
                table[index] = stream[j];
            }
//            printTables( table, tableIndex );

        }
        printf( "%d\n", cleans );
    }

    
}
