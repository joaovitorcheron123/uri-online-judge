var input = require('fs').readFileSync('./dev/stdin/file.txt','utf8');
var lines = input.split('\n');

///
var k;

while(k != 0){
      k = parseInt(lines.shift());
      k1 = k;
      var lnm = lines.shift().split(" ");
      var n = parseInt(lnm.shift());
      var m = parseInt(lnm.shift());

      for(var i = 0; i < k1; i++ ){
        var l3 = lines.shift().split(" ");
        var x = parseInt(l3.shift());
        var y = parseInt(l3.shift());

        if(x==n || x==m || y==n || y==m){
          console.log("divisa");
        }
        else if(x>n && y>m) {
          console.log("NE");
        }
        else if(x<n && y>m) {
          console.log("NO");
        }
        else if(x<n && y<m){
          console.log("SO");
        }
        else if(x>n && y<m){
          console.log("SE");
        }
      }
}
