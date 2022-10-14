

function highAndLow(numbers) {
    let strArr = numbers.split(' ');
    let creds = strArr.reduce((acc, val) => {
        let {greatest, smallest} = acc;
        greatest = Math.max(val, greatest);
        smallest = Math.min(val, smallest);
        return {greatest, smallest};
    },{
        greatest: -Infinity,
        smallest: Infinity
    });
    return `${creds.greatest} ${creds.smallest}`;
}

// const str = '5 57 23 23 7 2 78 6';
// const pickGreatestAndSmallest = (str = '') => {
//    const strArr = str.split(' ');
//    let creds = strArr.reduce((acc, val) => {
//    let { greatest, smallest } = acc;
//    greatest = Math.max(val, greatest);
//    smallest = Math.min(val, smallest);
//    return { greatest, smallest };
// }, {
//       greatest: -Infinity,
//       smallest: Infinity
//    });
//    return `${creds.greatest} ${creds.smallest}`;
// };
// console.log(pickGreatestAndSmallest(str));
//got the above code from tutorailsPoint and made some modifications