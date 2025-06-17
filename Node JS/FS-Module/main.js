const { error } = require("console");
const fs = require("fs");

// console.log(fs);

console.log("Starting...");
// fs.writeFileSync("Kisu.txt", "Kisu is a good boy!");  // first it complete then goes next
fs.writeFile("Kisu2.txt", "Kisu still a good boy!", ()=>{
    console.log("Done");
    fs.readFile("Kisu.txt", (error, data)=>{
        console.log(error, data.toString());
    });
});

fs.appendFile("Kisu.txt", " Kisu GOD", (e,d)=>{
    console.log(d);
})

console.log("Ending...");