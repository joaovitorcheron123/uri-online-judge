var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
//
var lines = input.split('\n');

//guarda as duas linhas
var l1 = lines.shift().split(" "), l2 = lines.shift().split(" ");
//pega os valores das 2 linhas separadamente
var x1 = parseFloat(l1.shift()), y1 = parseFloat(l1.shift()),x2 = parseFloat(l2.shift()),y2 = parseFloat(l2.shift());

//formula da distancia
var pow1 = Math.pow(x2-x1, 2), pow2 = Math.pow(y2-y1, 2), sum = pow1+pow2;

//calculo final
var calc = Math.sqrt(sum);
console.log(calc.toFixed(4));



