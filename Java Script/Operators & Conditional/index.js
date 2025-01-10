// ---------- Arthmetic Operators --------------

// let a=8;
// let b=4;
// console.log(a+b);
// console.log(a-b);
// console.log(a*b);
// console.log(a/b);
// console.log(a%b);
// console.log(a**b);

// -------------- Unary Op -----------------

// let a=7;
// console.log("Before increment: ",a);
// ++a;
// console.log("After increment: ",a);

// -------------- Assigment Op -----------------

// let a=5;

// -------------- Comparision Op -----------------

// console.log(17>5);                  true
// console.log(17<5);                  false
// console.log(17>=5);                 true
// console.log(17<=5);                 false
// console.log(17==5);                 false
// console.log(17===5);                false
// console.log(17!=5);                 true
// console.log(17!==5);                true

// Strict equality and Loose equality   
// Strict equality denoted by '===' and it check the data type and value of the variables 
// Loose equality denoted by '==' and it only check value of the variable
// console.log('5' == 5);                 true
// console.log('5' === 5);                false

// console.log('5'!==5);                     true    strict equality
// console.log('5'!=5);                      false   loose equality

// -------------- Ternary Op -----------------
// let age= 2;
// console.log(age>=18?"You can Vote":"You cant Vote");
// Syntax ----> (Condition)?true:false

// -------------- Logical Op -----------------

// AND(&&)
// console.log(true && true && true);
// console.log(true && false && true);

// OR(||)
// console.log(true || true || true);
// console.log(true || false || true);

// NOT(!)
// console.log(!true);

// Truthy and Falsy Concepts
// Falsy: undefined, null, 0, false, NaN, 'string' 
// Truthy: antything which is not falsy

// console.log(false && 'mohit');          false
// console.log(true || 6);                 true
// console.log(true && 'mohit');           mohit  true aayega to mohit print ho jayega

// short circuting 
// (false||true||true||flase)
//  then the op OR only check till he found a true 
// console.log(false || 7 || 75 || 34);   will give 7

// -------------- Bitwise Op -----------------

// console.log(2&5);                0
// console.log(2|5);                7

// console.log(~(0));     -1 the output is -1 because when we not 0 all bits converts into 1 and the MSB(most significant bit) is 1 so it will 
//                         be in minus(-) and when we add 1 in ones complement it will give us 1 so the result is -1

// console.log(10>>1);     5 because number>>x the result is number/2^x
// console.log(5<<2);      20 because number << x the result is number*2^x

// -------------- Conditional -----------------

// if-else

// let age=3;
// if(age>=18){
//     console.log("Can Vote!!");
// }
// else{
//     console.log("Cant Vote!!");
// }

// the next is switch and you already know what it is.......