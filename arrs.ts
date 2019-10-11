function segregateOdds(arr) {
    let odds = [];
    let evens = [];

    arr.forEach(element => {
        if (element%2 == 0) {
            evens.push(element);
        } else {
            odds.push(element);
        }
    });

    return [odds, evens]
}

let arr = [1,2,3,4,5,6,7,8,9,10]
console.log(segregateOdds(arr));
