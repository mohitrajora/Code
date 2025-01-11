// for(let a=0;a<10;a++){
//     console.log("hello ",a);
// }

// let a=12;
// while(a>0){
//     console.log("2"+a);
//     a--;
// }

// for(let i=0;i<8;i++){
//     if(i==4){
//         break;                   i=3 tk run hoga fir 4 pr break hoke bhar aa jayega...
//     }
//     else{
//         console.log(i);
//     }
// }

// for(let i=0;i<5;i++){
//     if(i==3){
//         continue;            jis itretion me continue ayega vo skip kr dega or agli itreation pr vhala jayega
//     }                        o/p ---> 0,1,2,4
//     else{
//         console.log(i);
//     }
// }
// let i=0;
// let a;
// for(i;i<5;a){
//     console.log(i);
//     a=i++;   
// }

//  do while

// let i=0;
// do{
//     console.log('mohit');
//     // updation
//     i++;
// }
// while(i<8)

// ---------- string ------------

// let firstName = 'Mohit';
// let lastName = 'Rajora';
// console.log(firstName + '',lastName);

// let name = "Mohit                we cant even if we use ' ' so the solution is..
//             Rajora"

// let name = `Mohit
// Rajora`;                         we can.......
// console.log(name);

// let name = new String("Mohit Rajora");
// console.log(name);


// ----------------- Operations on Strings -------------------

// let string1 = 'English';
// let string2 = 'Hindi'
// // let ans = string1 + string2;     it mearge the strings 
// // ans = `${string1}${string2}`;     we can use ${ } to acces the value of variables inside the backtik (``)
// // let ans=string1.length;
// // let ans=string2.length;
// // let ans = string1.toUpperCase();
// // let ans = string2.toLowerCase();

// console.log(ans); 

// let string1 = "HelloMohitRajora";
// // let ans = string1.substring(2);
// let ans = string1.substring(2,7);
// console.log(ans);

// let sentance = "Hello I Am Mohit Rajora";
// let ans = sentance.split(' ');               it gives us an array as output 
// console.log(ans);

// let string1="i am \"mohit rajora\" kisu";
// console.log(string1);

// let sentance = "Hello \\I \\Am \\Mohit \\Rajora";
// let ans = sentance.split("\\");
// console.log(ans.join(','));

