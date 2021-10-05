//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
//Kadane's Algorithm

    long long maxSubarraySum(int arr[], int n){
        long long msf,meh; meh=0; msf=INT_MIN;
        for(int i=0;i<n;i++){
            meh+=arr[i];
            if(msf<meh){
                msf=meh;
            }
            if(meh<0){
                meh=0;
            }
        }
        return msf;
    }
