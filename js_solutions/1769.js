var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
//
var lines = input.split('\n');

if(lines[lines.length - 1] === ""){
  lines.pop();
}

var entry = lines.length,count = 0;
 
while(count < entry) { //guarda os digitos em um array dinamicamente
  count = count + 1;

  var arr = lines.shift(), chars = arr.split(""), intCpf = [];
  var b1 = 0, b2 = 0, exp1 = 1, exp2 = 9;

  var charsN = chars.length;
  for(var countN = 0; countN < charsN; countN++){ //guarda os digitos separadamente no array
    var arr2 = chars.shift();
    if (arr2 == "-") { //vai apenas até o traço
      break;
    }
    else if (arr2 != ".") { //faz os calculos de b1 e b2
      b1 = b1 + parseInt(arr2) * exp1, b2 = b2 + parseInt(arr2) * exp2;
      exp1++, exp2--; //vai incrementando o expoente 1, e decrementando expoente 2
    }
  }

  var n1 = parseInt(chars[0]), n2 = parseInt(chars[1]);
  intCpf[0] = n1,intCpf[1] = n2;
  var val1 = intCpf[0], val2 = intCpf[1];

  //se o resto da divisao por 11 for igual a 10, o valor de b1 ou b2 será igual a 0
  if (b1 % 11 === 10) {
    b1 = 0;
  }
  if (b2 % 11 === 10) {
    b2 = 0;
  }

  if (val1 === b1 % 11 && val2 === b2 % 11) {
    console.log("CPF valido");  
  }
  else {
    console.log("CPF invalido");
  }

}