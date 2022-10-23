

function descendingOrder(n){
    let convertedNtoString = String(n);
    let stringNumArr = convertedNtoString.split("");
    let stringNumArrSorted = stringNumArr.sort(function(a, b){
            return a - b;
        });
    stringNumArrSorted = stringNumArrSorted.reverse();
    convertedNtoString = stringNumArrSorted.join("");
    return parseInt(convertedNtoString);
}