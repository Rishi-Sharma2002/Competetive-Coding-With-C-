const prompt = require('prompt-sync')();
if(require.main == module){
  var n = prompt("Enter the size of array: ");
  var a = 1;
  console.log("Enter the elements: ");
  for(var i=1; i<=n; i++)
    {a[i] = prompt("E");}
  for(var i=1; i<=n; i++)
    {console.log(a);}
  }
