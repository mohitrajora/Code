// // code 1

// let t1 = performance.now();
// for(let i=1;i<=100;i++){
//     let para = document.createElement('p');
//     para.textContent='this is para ' +i;
//     document.body.appendChild(para);
// }
// let t2 = performance.now();

// console.log("Total time taken by code1 : "+(t2-t1));

// // code 1 slow he because we are adding the text in the document body every time the loop run.
// // so code 1 ko 100 times repaint and reflow krna padegaa

// // code 2

// let t3 = performance.now();
// let mydiv = document.createElement('div');
// for(let j=1;j<=100;j++){
//     let para = document.createElement('para');
//     para.textContent ='this is para ' +j;
//     mydiv.appendChild(para);
// }
// document.body.appendChild(mydiv);
// let t4 = performance.now();

// console.log("Total time taken by code2 : "+(t4-t3));

// code 2 fast he because phle 100 para ko ek div me add kr rhe he each time jb loop run ho rha he and then last me ek baar
// us div ko document body me add kiya he to sirf ek baar repaint and reflow hoga.

// Document Fregment

// it is a light weight document object.
// isme element append(add) krne pr na to reflow krta he na hii repaint krta he

// best code
// let fregment = document.createDocumentFragment();
// for(let i=1;i<100;i++){
//     let para = document.createElement('p');
//     para.textContent = "this is para "+i;
//     // the below line doesn't contain any repaint and reflow
//     fregment.appendChild(para);
// }
// // the below line take 1 reflow and 1 repaint
// document.body.appendChild(fregment);



// for event loop please visit loupe website