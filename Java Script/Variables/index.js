// console.log("Hello World");

// --------- var ---------

// function solve(){
//     var age=24;              it will print 24 because the age function inside the scope of the solve function
//     console.log(age);
// }
// solve();

// function solve(){
//     var age=24;             it will throw an error because the scope of age variable is limmited to the solve function not outside this 
// }
// console.log(age);

// var a=10;
// console.log(a);
// var a=20;                   we can re-declare a variable using var that creates multiple problmes
// console.log(a);

// ---------- let ----------

// {
//     let a=10;
// }                          it will thorw an error because the variable a is created by let and inside the brackets to the scope of variable a
// console.log(a);            will be inside the brackets it called blocked scoped

// {
//     let a=10;
//     console.log(a);
// }

// let a=10;
// console.log(a);          SyntaxError: Identifier 'a' has already been declared 
// let a=30;                so we cant redeclare a variable if we use let 
// console.log(a);

// let a=19;
// console.log(a);          we can manipulate the varible when we use let 
// a=48;
// console.log(a);

// let a=10;
// a="mohit";              let is a Dynamical Typed Language because the variables don't want a datatype to store a value 
// a=true;
// a=null;

// --------- const ----------

// const a=10;
// console.log(a);

// const a=10;
// console.log(a);        TypeError: Assignment to constant variable.
// a=24;                  we cant assign a new value to a variable when it created by const
// console.log(a);

// ------------ Datatypes -------------

// let marks=true;
// console.log(typeof(marks));  boolean

// let marks;
// console.log(typeof(marks));   undefined

// let marks=null;
// console.log(typeof(marks));   object