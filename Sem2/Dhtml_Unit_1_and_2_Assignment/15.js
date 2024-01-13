var studentInfo = {
    firstname: "",
    lastname: "",
    rollno: 0,
    marks1: 0,
    marks2: 0,
    marks3: 0
}

function setStudentInfo() {

    studentInfo.firstname = document.getElementById("firstname").value;
    studentInfo.lastname = document.getElementById("lastname").value;
    studentInfo.rollno = parseInt(document.getElementById("rollno").value);
    studentInfo.marks1 = parseInt(document.getElementById("marks1").value);
    studentInfo.marks2 = parseInt(document.getElementById("marks2").value);
    studentInfo.marks3 = parseInt(document.getElementById("marks3").value);
    console.log(studentInfo)
}


