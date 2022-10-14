

function squareDigits(num) {
    let numStr = num + ""; // this converts num to str;

    let total = ""; //This variable will contain the number after concatenating the squared digits.

    for(let i in numStr){//now we're looping through numStr;
        //Starting with what’s going on inside the parenthesis, we use parseInt() to convert each digit to an integer. Then we square it.
        total += (parseInt(numStr[i]) ** 2 + "");
        //  convert the number back to a string by concatenating it to an empty string.

        // wrapped that statement in parenthesis to let JavaScript know that we want to concatenate our squared digit to total.
    }
    return parseInt(total);//then by using parseInt that  string total is now a int and returning it will have no issue.
}