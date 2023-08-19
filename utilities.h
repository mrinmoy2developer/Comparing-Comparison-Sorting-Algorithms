#ifndef UTILITIES_H
#define UTILITIES_H
//macros
#define e 1E-6     //value of epsilon to ignore errors in floats
#define LIMIT 1e6
#define f(i,a,b) for(int i=a;i<b;i++)
#define new(a,b) (a*)calloc(b,sizeof(a));
#define del(p,r) for(int i=0;i<r;i++)free(p[i]);free(p)
#define sz(s) (sizeof(s)/sizeof(s[0]))
#define dbg(s) f(i,0,sz(s))printf("%d,",s[i])
#define cpy(a,b) f(i,0,sz(b))a[i]=b[i]
//prototypes
void swap(int *a, int *b);
void mergeSort(int arr[], int left, int right);
void heapSort(int arr[], int n);
void quickSort(int arr[], int low, int high);
void generate(int arr[], int lower, int upper, int count);
//variables
extern int moves;
extern int ranges[][2];
#endif