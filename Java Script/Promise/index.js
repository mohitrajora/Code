// let firstPromise = new Promise((resolve,reject) => {
//     // console.log("Kisu");
//     // // resolve(100);
//     // reject(new Error("Internal Server Error"));

//     setTimeout(function sayMyName(){
//         console.log("Kisu");
//     },20000);
// });

// let promise1 = new Promise((resolve,reject) => {
//     let sucess = false;
//     if(sucess){
//         resolve("The promise is fulfilled");
//     }
//     else{
//         reject("Promise is rejected");
//     }
// });

// promise1.then((message) => {
//     console.log("Message : "+message);
// }).catch((error) => {
//     console.log("Error : "+error);
// })

let promise1 = new Promise((resolve,reject) => {
    setTimeout(resolve, 5000,"first");
})
let promise2 = new Promise((resolve,reject) => {
    setTimeout(resolve, 5000,"second");
})
let promise3 = new Promise((resolve,reject) => {
    setTimeout(resolve, 5000,"third");
})

Promise.all([promise1,promise2,promise3])
.then(values => {
    console.log(values);
})