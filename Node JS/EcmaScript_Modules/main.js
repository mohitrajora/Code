// // server.mjs
// import { createServer } from 'node:http';

// const server = createServer((req, res) => {
//   res.writeHead(200, { 'Content-Type': 'text/html' }); // Determine the output
//   res.end('<h1>Hello World!\n</h1>');
// });

// // starts a simple http server locally on port 3000
// server.listen(3000, '127.0.0.1', () => {
//   console.log('Listening on 127.0.0.1:3000');
// });

// // run with `node server.mjs`

// import {c , e} from "./mymodule.js"
// console.log(c,e);

// import obj from "./mymodule.js"  // you can replace obj with anything
// console.log(obj); default export 

// import kisu from "./mymodule.js"
// console.log(kisu);   

// kuch bhii likho dega default value hi

const a = require("./mymodule2.js");
console.log(a, __dirname, __filename);