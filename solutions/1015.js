var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
//
var values = input.split('\n');

//guarda as duas linhas
var l1 = values.shift().split(" ");
var l2 = values.shift().split(" ");

//pega os valores das 2 linhas separadamente
var x1 = parseFloat(l1.shift());
var y1 = parseFloat(l1.shift());
var x2 = parseFloat(l2.shift());
var y2 = parseFloat(l2.shift());

//formula da distancia
var pow1 = Math.pow(x2-x1, 2);
var pow2 = Math.pow(y2-y1, 2);
var sum = pow1+pow2;

//calculo final
var calc = Math.sqrt(sum);
console.log(calc.toFixed(4));



