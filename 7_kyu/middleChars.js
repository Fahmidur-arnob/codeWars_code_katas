
function getMiddle(s){
    let halfLenOfS = Math.floor(s.length/2);

    let result = s[halfLenOfS];

    if(s.length % 2 == 0 && halfLenOfS > 0){
        result = s[halfLenOfS - 1] + result;
    }
    return result;
}