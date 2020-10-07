var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
//
var values = input.split('\n');

var cpf = [];

for (var arr of values) { //iterar o vetor aux
    var toString = arr.split("");

    var b1 = 0, b2 = 0;
    var div1 = 1, div2 = 9;    

    for(var arr of toString){    
        
        if(arr === '-'){
            break;            
        }
        if((arr !== '.' && arr !== '\r')){            
            cpf.push(parseInt(arr),10);

            b1 += parseInt(arr) * div1;
            b2 += parseInt(arr) * div2;
            
            div1++;
            div2--;            
        }           
    }       

    //transforma os ultimos digitos em inteiros, devolve os 2 valores
    toString[12] = parseInt(toString[12]),10;
    toString[13] = parseInt(toString[13]),10;

    var dig1 = toString[12], dig2 = toString[13];

    //b1, b2 resto divisao
    if (b1 % 11 === 10) {
        b1 = 0;
    }
    if (b2 % 11 === 10) {
        b2 = 0;
    }

    if (dig1 === b1 % 11 && dig2 === b2 % 11) {
        console.log('CPF valido');
    }
    else {
        console.log('CPF invalido');
    }
}