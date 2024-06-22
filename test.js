let otp1 = '1';
let otp2 = '2';
let otp3 = '3';
let otp4 = '4';
let otp5 = '5';
let otp6 = '6';
let otp = 133456;
let userotp = [otp1,otp2,otp3,otp4,otp5,otp6]
otp = String(otp)
let c = 0
for(var i=0;i<6;i++){
    if(otp[i]===userotp[i]){
        c++;
    }
}
console.log(c)