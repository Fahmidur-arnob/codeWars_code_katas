

function isIsogram(str) {
    str = str.toLowerCase();
    let lenOfStr = str.length();

    let arr = str.split('');

    arr.sort();

    for(let i = 0; i < lenOfStr - 1; i++){
        if(arr[i] == arr[i + 1])
            return false;
    }
    return true;
}