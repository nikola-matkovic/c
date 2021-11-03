var broj= 256
var s="";
var niz=[]
while(broj>0){
    if(broj % 2 ==0){
        niz.push(0)
    }
    else{
        niz.push(1)
    }
    broj=Math.floor(broj/2)
}
var i=  niz.length-1;
for(i; i>=0; i--){
    s+=niz[i]
}
console.log(s);