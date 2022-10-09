

function repeatStr(n, s) {
    let string = "";//1. create a empty string that will host the repeated strings;
    while (n > 0) {//2. Set the While loop with (n > 0) as the condition to check
        string += s;//// Same as string = string + s;
        n--;//same as n = n - 1;

        /* While loop logic
                      Condition       T/F       repeatedString += string      repeatedString        times
    First iteration    (3 > 0)        true            "" + "abc"                  "abc"               2
    Second iteration   (2 > 0)        true           "abc" + "abc"               "abcabc"             1
    Third iteration    (1 > 0)        true          "abcabc" + "abc"            "abcabcabc"           0
    Fourth iteration   (0 > 0)        false
    }
  */
    }
    return string;//3.return it;
}