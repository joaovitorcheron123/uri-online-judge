var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
//
var values = input.split('\n');

var k;

while (k !== 0) { // enquanto a entrada k for diferente de 0
      //transforma os valores em inteiros, pega os valores de teste a partir da 2 linha de entrada
      k = parseInt(values.shift());
      var lnm = values.shift().split(" ");
      var n = parseInt(lnm.shift());
      var m = parseInt(lnm.shift());

      //pega as coordenadas x e y a partir da 3 linha de entrada
      for (var i = 0; i < k; i++ ) {
        var l3 = values.shift().split(" ");
        var x = parseInt(l3.shift());
        var y = parseInt(l3.shift());
        
        //verifica as coordenadas com os casos de teste
        if (x == n || x == m || y == n || y == m) {
          console.log("divisa");
        }
        else if (x > n && y > m) {
          console.log("NE");
        }
        else if (x < n && y > m) {
          console.log("NO");
        }
        else if (x < n && y < m) {
          console.log("SO");
        }
        else if (x > n && y < m) {
          console.log("SE");
        }
      }
}
