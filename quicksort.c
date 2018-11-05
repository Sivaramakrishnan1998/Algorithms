  #include<stdio.h>

  #define  MAX_LEVELS  300


  void quickSort(int *arr, int elements) {

    int  piv, beg[MAX_LEVELS], end[MAX_LEVELS], i=0, L, R, swap ;

    beg[0]=0; end[0]=elements;
    while (i>=0) {
      L=beg[i]; R=end[i]-1;
      if (L<R) {
        piv=arr[L];
        while (L<R) {
          while (arr[R]>=piv && L<R) R--; if (L<R) arr[L++]=arr[R];
          while (arr[L]<=piv && L<R) L++; if (L<R) arr[R--]=arr[L]; }
        arr[L]=piv; beg[i+1]=L+1; end[i+1]=end[i]; end[i++]=L;
        if (end[i]-beg[i]>end[i-1]-beg[i-1]) {
          swap=beg[i]; beg[i]=beg[i-1]; beg[i-1]=swap;
          swap=end[i]; end[i]=end[i-1]; end[i-1]=swap; }}
      else {
        i--; }
      }
    }
  int main()
  {
    int A[] = {1, 4, 45, 6, 10, -8},i;
    int n = 16;
    int arr_size = 6;

    quickSort(&A[0],6);

    for(i=0;i<6;i++){
      printf("%d\n",*(A+i) );
    }
    //
    //  * Example calls:
    //    quickSort(&myArray[0],5); // sorts elements 0, 1, 2, 3, and 4
    //    quickSort(&myArray[3],5); // sorts elements 3, 4, 5, 6, and 7


  }
