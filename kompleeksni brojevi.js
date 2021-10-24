z="";
var x;
const readline  = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  })

  readline.question(`Unesite  kompleksni broj Z=`, name => {
    z=name;
    readline.close()
    nastavi()
  })
function nastavi(){
	console.log("radim");
    if(proveriIspravnost()){
		izracunaj_xy();
		izracunaj_Re()
		izracunaj_Im()
		izracunaj_r();
		moduo()
		konjugacija()
		trigonometrijski();
		ispisi()
	}
}

function proveriIspravnost(){
	reg=/^[0-9i+-]*$/
	if(!reg.test(z) || z.indexOf("++")!=-1 ||
	 	z.indexOf("ii")!=-1 || z.indexOf("--")!=-1 ||  z.indexOf("-+")!=-1 ||
		z.indexOf("+-")!=-1 || z.slice(-1)=="+" | z.slice(-1)=="-" )
	{
		console.log("Neispravan unos")
		return 0;
	}
}
//funkcija za izračunavanje realnog i imaginarnog dela:
// ukoliko  NEMA i, onda ima samo realan deo.
// ukoliko ima i, a dužina je jedaka 1, onda je 
// function izracunaj_xy(){
// 	if(z.indexOf("i")==-1){
// 		x=eval(z);
// 		console.log("Broj nema imaginarni deo", x)
// 	}
// 	else if(z.indexOf("+")==-1){
// 		console.log("Broj nema realan deo");
// 		if(z.lenght=1){
// 			if(z.indexOf("-")-1){

// 			}
// 		}
// 	}
// }
function izracunaj_Re(){
	if(z.indexOf("i")==-1){
		x=eval(z);
	}
}
function izracunaj_Im(){
	
}
function izracunaj_r(){

}
function moduo(){

}
function konjugacija(){

}
function trigonometrijski(){

}
function ispisi(){}

