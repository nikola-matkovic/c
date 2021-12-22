//Node.js readline
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (answer) => {
  console.log(`hello, ${answer}`);
  rl.close();
});