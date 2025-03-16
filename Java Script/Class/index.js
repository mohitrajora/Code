// Class is a blue print of object
// A blue print of house before construction is class and after construction the house is ready this called object

// class Human{
//     // properties
//     age = 23;           // publiuc members
//     #wt = 65;           // private 
//     ht = 180;

//     constructor(newAge, newWt, newHt){
//         this.age = newAge;
//         this.#wt = newWt;
//         this.ht = newHt;
//     }
//     // functionalities
//     #walking(){
//         console.log("I am walking" ,this.#wt);  // this keyword using for show current obj
//     }

//     running(){
//         console.log("I am Running");
//     }

//     get showWt(){
//         return this.#wt;    // this is we can access private memeber outside the class
//     }

//     set modiftWt(num){
//         this.#wt=num;
//     }
// }

// let obj = new Human(24,50,239);
// console.log(obj.age, obj.showWt, obj.ht);
// // obj.walking();


// Default Parameter

function sayMyName(myName = 'Kisu'){  // default case me kisu print hoga
    console.log(myName);
}

sayMyName('mohit');