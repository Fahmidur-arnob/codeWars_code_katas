

function getCount(str) {
    let vowels = 0;

    const vowelsArray = ['a', 'e', 'i', 'o', 'u'];

    for(let char of str){
        if(vowelsArray.includes(char)){
            vowels++;
        }
    }
    return vowels;
}