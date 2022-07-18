let a = [1,2,3,4,5];
let b = [4,5,6,7,8];
let A = new Set([...a, ...b])
let presek = a.filter(number =>  b.indexOf(number) != -1 )
let razlika = a.filter(number => {   
   if(! b.some( num => num == number )){
        return number; 
   }
})
let razlikaB = b.filter(number => {   
    if(! a.some( num => num == number )){
         return number; 
    }
})
console.log(A);
console.log(presek);
console.log(razlika)
console.log(razlikaB);