

function filter_list(l) {
    const myStr = l;

    return myStr.filter(function(e) {
        return typeof e == 'number';
    });
}