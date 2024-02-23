var email = "f@gmail.co"
// var pass = document.getElementById("pass");
// var confpass = document.getElementById("confpass");
// console.log(email.lastIndexOf(".") < email.lastIndexOf("@") + 2);
// console.log(email.length - email.lastIndexOf("."));
// console.log(email.indexOf("@") < 1);

console.log(email.lastIndexOf("."));
console.log(email.lastIndexOf("@") + 2);
if (
  email.length - email.lastIndexOf(".") < 3 ||
  email.indexOf("@") < 1 ||
  email.lastIndexOf(".") < email.lastIndexOf("@") + 2
) {
  console.log("true");
}