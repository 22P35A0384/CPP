var x = 'Peddakka@123';
let c = 0;
var sp = "~@`!#$%^&*+=-[]\\\';,/{}|\":<>?";
for(let i=0;i<x.length;i++){
    if(x[i]===x[i].toUpperCase() && isNaN(x[i]) && !(sp.includes(x[i]))){
        console.log('upper');
        c++;
    }else if(x[i]===x[i].toLowerCase() && isNaN(x[i]) && !(sp.includes(x[i]))){
        console.log('lower')
    }else if(sp.includes(x[i])){
        console.log('sp')
    }else{
        console.log('num')
    }
}
console.log(c)
// var x = 'a'
// console.log(typeof(eval(x)))