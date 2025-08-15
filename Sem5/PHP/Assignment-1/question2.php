<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A1Q2</title>
</head>
<body>
  <form method="get">
    <label for="">Value of a : </label>
    <input type="text" name="a" id=""/><br><br>
    <label for="">Value of b : </label>
    <input type="text" name="b" id=""/><br><br>
    <button type="submit" >Submit</button>
  </form>
  <br><br>
   <?php
    if ($_GET) {
      $a= $_GET['a'];
      $b= $_GET['b'];
       echo "<h3>Addition of a and b is :". $a + $b ."  </h3>";
       echo "<h3>Subtraction of a and b is : ".$a - $b." </h3>";
       echo "<h3>Multiplication of a and b is :  ".$a * $b."  </h3>";
       echo "<h3>Division of a and b is :  ".$a / $b."  </h3>";
       echo "<h3>Modulus of a and b is :  ".$a % $b."  </h3>";  
    }else{
    }

   
  ?>
</body>
</html>