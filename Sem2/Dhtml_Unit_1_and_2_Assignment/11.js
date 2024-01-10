function check() {
    let age = document.getElementById("age").value;
    let firstname = document.getElementById("fname").value;
    let lastname = document.getElementById("lname").value;
    age >= 18
        ? (document.getElementById(
            "ans"
        ).innerHTML = `${lastname.toUpperCase()} ${firstname.toUpperCase()} you are eligible for voting`)
        : (document.getElementById(
            "ans"
        ).innerHTML = `${lastname.toUpperCase()} ${firstname.toUpperCase()} you are not eligible for voting`);
}
