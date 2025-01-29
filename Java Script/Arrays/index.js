// let arr = [1,2,3];
// so the data 1,2,3 will store in heap memory and the variable arr will store in stack memory the arr is refrence to the data

// --------------------- Object -----------------------

// let obj = {
//     name: "Mohit Rajora",
//     height: 5.11,
//     greet: function(){
//         console.log("Hello Sirrrrrrr");
//     }
// }
// console.log(obj);
// obj.greet();
// console.log(typeof(obj));

// let obj2=obj; // this is shallo copy in this the data is same in the heap memory but the reference variable in stack memory is new
// here there are two reference variable that point the same object

// ---------------- Arrays ---------------------
// Collection of items 
// Syntax 1. [ ] 2. array constructor

// let arr = [1,2,3,4,5];
// console.log(arr);

// array constructor
// let brr = new Array ('kisu',1432,'kiwii');
// console.log(brr);
// console.log(typeof(brr));

// Built in methods

// let arr = [1,2,3,4,5];
// arr.push("Mohit");               add value at right most side (end)
// console.log(arr);
// arr.pop();                        remove the value at end
// console.log(arr);

// arr.shift();                      remove the first value at left most side (front)
// arr.unshift("kisu");             add the value at front
// console.log(arr.slice(2,5));      it will slice a part from index 2 to 5 but it exclude the index 5

// arr.splice(1,2,'kiwii');          index 1 ke baad 2 value remove kr do and kiwii add kr do
// arr.splice(1,0,'kiwii');            index 1 ke baad kuch remove mt kro but kiwii add kr do
// console.log(arr);

// ---------------- map ----------------
// map apne andr ek function rakhta he jo values i/p leta he or function ke accordnig o/p deta he

// let arr = [10,20,30];
// let ansArr = arr.map((Number) => {
//     return Number*Number;
// })

// console.log(ansArr);

// arr.map((number,index) => {
//         console.log(number);
//         console.log(index);
// })

// Filter

// let arr = [10,20,30,54,23,643,356];
// let evenArr = arr.filter((number) => {
//     return number % 2 === 0;
//     // if(number % 2 === 0){
//     //     return true;
//     // }
//     // else{
//     //     return false;
//     // }
// })

// console.log(evenArr);

// Reduce
// reduce me do variable hote he accumalator and current agr hm accumalator ki value dete he tb to array ka first element current ho jata he
// agr accumalator ki value nhi dete he tb array ka first element accumalator bn jata he and second eleement current bn jata he

let arr = [10,20,30,40];
let ans = arr.reduce((accumalator,current) => {
    return accumalator+current;
},0)  // this value is assigned to accumalator 

console.log(ans);