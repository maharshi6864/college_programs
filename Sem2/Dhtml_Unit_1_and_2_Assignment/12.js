function calculate() {
    let englishMarks = parseInt(document.getElementById("english").value);
    let mathsMarks = parseInt(document.getElementById("maths").value);
    let scienceMarks = parseInt(document.getElementById("sci").value);
    let ssMarks = parseInt(document.getElementById("ss").value);
    let hindiMarks = parseInt(document.getElementById("hindi").value);
    let total = englishMarks + mathsMarks + scienceMarks + ssMarks + hindiMarks;
    document.getElementById("marks").innerHTML = total + "/500";
    let per = total / 5;
    document.getElementById("per").innerHTML = per + "%";
    gradeCal(per);
}

function gradeCal(per) {
    if (per > 70 && per < 100) {
        document.getElementById("grade").innerHTML = "Distinction";
    } else if (per > 60 && per < 70) {
        document.getElementById("grade").innerHTML = "First Class";

    } else if (per > 50 && per < 60) {
        document.getElementById("grade").innerHTML = "Second Class";

    } else if (per > 35 && per < 50) {
        document.getElementById("grade").innerHTML = "Average";

    } else {
        document.getElementById("grade").innerHTML = "Fail";
    }
}