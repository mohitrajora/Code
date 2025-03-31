// function changeText(event){
//     console.log(event);
//     let fpara = document.getElementById("fpara");
//     fpara.textContent = "Hello Mohit"
// }
// let fpara = document.getElementById("fpara");
// fpara.addEventListener('click',changeText)

// // fpara.removeEventListener('click',changeText)

function changeText(event){
    console.log(event);
    let link = document.getElementById("link");
    event.preventDefault();
    link.textContent = "click done"
}
let link = document.getElementById("link");
link.addEventListener("click",changeText);