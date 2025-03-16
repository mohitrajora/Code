// Function Hosting basically when the function shifts on the op the scope.
// like agr use calling baad me kiya gya he fir bhii vo top of the scope yaani sbse phle chala jayegaa

// console.log(age);   it didnt give us error it will give us undefined because it doesn't include the value of age variable.
// var age = 20;        var keywords se variable ki declaretion scope me top pr move kr jaati he (variable hosting)


// sayMyName("Kisu");              yha function call phle hua and declaretion baad me huaa fir bhii run ho gyaaa because jab bhiii apn function
// function sayMyName(finalName){  declare krte he to vo scope me sbse uppr move ho jata he
//     console.log(finalName);        isse hiii function hosting bolte he (in plain function declaretion)
// }

// Variable hosting only var keyword me hii hoti he const and let me nhiii

// function hosting using function expression

// hello();
// let hello = function(){
//     console.log("kisu");  it will give error because function hosting only work in plain function declaretion
// }

// const object1 = new Human();
// class Human{                     this will also give error because class hosting isn't possible
// }

// Function Call Stake
// Function calls ko ek stake me rakhte he jisse pta rhe ki kb konsa function call hua he ye LIFO pr work krta he

// Function ko first class citizen kyu bolte he???
// beacause function ko as argument, as variable, or return kr skte he etc 

// function greetme(greet,name){
//     console.log("Hello",name);
//     greet();
// }
// function greet(){
//     console.log("Greetings of the day");
// }
// greetme(greet,'kisu');



// function solve(number){
//     return function(number){
//         return number*number;
//     }
// }
// let ans = solve(6);         yha pr ans variable ke andr hii solve function aa gyaaa 
// let finalans = ans(10);      yha final ans me ans function jo phle bnaa use call kiyaaa
// console.log(finalans); 

// var is not a block scope means block ke bhar bhiii accessable hoga

// In JavaScript, the Temporal Dead Zone (TDZ) is a period within a scope where variables declared with let or const are inaccessible,
//  even though they exist, until their declaration is reached during execution, causing a ReferenceError