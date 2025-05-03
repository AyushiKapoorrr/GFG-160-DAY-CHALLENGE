void rotateArr(int arr[], int n, int d) {
    void reverse(int arr[],int start,int end){
        int temp;
        while (start<end){
            temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;}
            
        }
    
   d=d%n;
   if(d==0||n==0)
   return;
   
   reverse(arr,0,d-1);
   reverse(arr,d,n-1);
   reverse(arr,0,n-1);
}
