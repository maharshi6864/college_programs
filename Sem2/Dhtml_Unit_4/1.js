

function validate() {
  var firstname = document.getElementById("firstname").value;
  var lastname = document.getElementById("lastname").value;
  var email = document.getElementById("email").value;
  var password = document.getElementById("password").value;
  var screenName = document.getElementById("screen-name").value;
  var gender = document.getElementsByName("gender");
  var country = document.getElementById("country").value;
  var conf = document.getElementById("confirm").value;
  var phone = document.getElementById("phone").value;
  var term = document.getElementById("term");
  var date = document.getElementById("date-of-b").value;
  console.log(firstname);
  if (
    firstname == "" || !isNaN(firstname)

  ) {
    alert("Please enter valid firstname!!");
  } else if (lastname == "" || !isNaN(lastname)) {
    alert("Please enter valid lastname!!")
  } else if (screenName == "") {
    alert("Please enter valid screen name!!");
  } else if (date == "") {
    alert("Please Enter Valid Date of birth !")
  } else if (!gender[0].checked && !gender[1].checked) {
    alert("Please enter valid gender");
  } else if (
    password == "") {
    alert("Please enter valid password!!");
  } else if (country == "") {
    alert("Please enter valid country");
  } else if (
    phone == "" || phone.length != 10) {
    alert("Please enter valid phone");
  } else if (email == "" ||
    email.length - email.lastIndexOf(".") < 3 ||
    email.indexOf("@") < 1 ||
    email.lastIndexOf(".") < email.lastIndexOf("@") + 2
  ) {
    alert("Please enter valid email address.");
  } else if (!term.checked) {
    alert("please agree to the terms and conditions");
  } else {
    details()
  }
  return false;
}

function details() {
  var firstname = document.getElementById("firstname").value;
  var lastname = document.getElementById("lastname").value;
  var email = document.getElementById("email").value;
  var password = document.getElementById("password").value;
  var screenName = document.getElementById("screen-name").value;
  var gender = document.getElementsByName("gender");
  var country = document.getElementById("country").value;
  var conf = document.getElementById("confirm").value;
  var phone = document.getElementById("phone").value;
  var term = document.getElementById("term");
  var date = document.getElementById("date-of-b").value;
  document.getElementById("ans").innerHTML = `<div class="ans-div"> Answers : <br>First Name: ${firstname}<br> Last Name: ${lastname}<br> Email: ${email}<br> Password: ${password}<br>Screen Number: ${screenName}<br>Email Address:${email}<br>Date:${date}<br>Gender: ${gender[0].checked ? gender[0].value : gender[1].value}<br>Country: ${country}<br>Phone: ${phone}</div>`
}