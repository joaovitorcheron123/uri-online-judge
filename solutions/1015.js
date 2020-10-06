var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
var lines = input.split('\n');

///
var l1 = lines.shift().split(" ");
var l2 = lines.shift().split(" ");

var x1 = parseFloat(l1.shift());
var y1 = parseFloat(l1.shift());
var x2 = parseFloat(l2.shift());
var y2 = parseFloat(l2.shift());

var pow1 = Math.pow(x2-x1, 2);
var pow2 = Math.pow(y2-y1, 2);
var sum = pow1+pow2;

var calc = Math.sqrt(sum);
console.log(calc.toFixed(4));



