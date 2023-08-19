#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "utilities.h"

int moves=0;
int ranges[][2]={10,100,101,300,301,700,700,1200,1201,
2000,2001,3000,3001,4500,4501,6000,6001,8000,8001,10000};

void solve(){
    int arr[10],tmp[10],table[sz(ranges)][3],n=10,m=10;
    printf("Range,Quick,Sort,Merger Sort,Heap Sort\n");
    f(i,0,sz(ranges)){
        table[i][0]=table[i][1]=table[i][2]=0;
        f(j,0,m){
            generate(arr,ranges[i][0],ranges[i][1],n);
            moves=0;
            cpy(tmp,arr);
            quickSort(tmp,0,n-1);
            table[i][0]+=moves;
            cpy(tmp,arr);
            mergeSort(tmp,0,n-1);
            table[i][1]+=moves;
            cpy(tmp,arr);
            heapSort(tmp,n-1);
            table[i][2]+=moves;
        }
        table[i][0]/=m;
        table[i][1]/=m;
        table[i][2]/=m;
        printf("%d-%d,%d,%d,%d\n",ranges[i][0],ranges[i][1],table[i][0],table[i][1],table[i][2]);
    }
}
int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    solve();
    // int a[10],b[10];
    // generate(a,0,100,10);
    // dbg(a);
    // cpy(b,a);
    // printf("\n");
    // dbg(b);
    // printf("%d",(sz(ranges)));
    return 0;
}