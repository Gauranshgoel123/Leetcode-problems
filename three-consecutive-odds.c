bool threeConsecutiveOdds(int* arr, int arrSize){
int odd = 0;
for(int i=0;i<arrSize;i++){
    if(arr[i]%2==0){
        odd=0;
    }else{
        odd++;
    }
    if(odd==3){
        return true;
    }
}
return false;
}
