class Solution {
    void pushZerosToEnd(int[] arr) {
        int n=arr.length;
        int nonzeropos=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[nonzeropos++]=arr[i];
            }
        }
        while(nonzeropos<n){
            arr[nonzeropos++]=0;
        }
        
    }
