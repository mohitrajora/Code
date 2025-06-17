import fs from "fs/promises";

let a = await fs.readFile("Kisu.txt");

// let b = await fs.writeFile("Kisu2.txt", "\nKisu is still GOD");

let b = await fs.appendFile("Kisu2.txt", "\nKisu is still GOD");
console.log(b);