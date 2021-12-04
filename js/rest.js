const niz1 = [1,2, 3] ;
const niz2 = [ ... niz1, 4] ;
//console.log(niz2);

function findSum(...numbers){
    var sum = 0;
    numbers.forEach(function(number)
    {
        sum += number;     
    });
    return sum;
}

console.log(findSum(1, 2, 3));    // 6