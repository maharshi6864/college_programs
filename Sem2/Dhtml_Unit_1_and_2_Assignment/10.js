function celToF() {
    let a = document.querySelector("#number1").value;
    document.querySelector("#number2").value = (a * 9.0) / 5.0 + 32.0;
}
function fToCel() {
    let a = document.querySelector("#number2").value;
    document.querySelector("#number1").value = ((a - 32.0) * 5.0) / 9.0;
}