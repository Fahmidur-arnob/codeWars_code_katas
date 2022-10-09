function positiveSum(arr) {
    let sum = 0;
    for(let i = 0; i < arr.length; i++){
        if(arr[i] > 0 && arr.length > 0){
            sum += arr[i];
        }
    }
    if(sum > 0){
        return sum;
    }
    return 0
}