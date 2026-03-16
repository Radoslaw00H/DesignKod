const inputOne = document.getElementById("NO-ONE")
const inputTwo = document.getElementById("NO-TWO")
const output = document.getElementById("OUTPUT")
const button = document.getElementById("BUTTON-C")

button.addEventListener("click", calculate)

function calculate() {

    let sum = parseFloat(inputOne.value) + parseFloat(inputTwo.value)

    output.textContent = "The sum is: " + sum
}