function arrayFormatter(arr) {
    for (let index = 0; index < arr.length; index++) {
        let temp = arr[index];
        for (let jindex = 0; jindex < temp.length; jindex++) {
            if (temp[jindex] === 0) {
                temp.splice([jindex], 1);
                jindex--; // temp just got shorter, so jindex follows
            }            
        }
        arr[index] = temp;
    }
    return arr.sort(function(a, b) {
        return b.length - b.length;
    });
}

var arr = [[1,2,4,0,0,3,9],[2,2,3,0,0,87,7],[1,2],[0,0]]

console.log(arrayFormatter(arr))

