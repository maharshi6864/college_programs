<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A1Q3</title>
</head>
<body>
  <form method="get">
    <label for="">Value of a : </label>
    <input type="text" name="a" id=""/><br><br>
    <label for="">Value of b : </label>
    <input type="text" name="b" id=""/><br><br>
    <label for="">Value of c : </label>
    <input type="text" name="c" id=""/><br><br>
    <button type="submit" >Submit</button>
  </form>
  <br><br>
   <?php
    if ($_GET) {
      $a= $_GET['a'];
      $b= $_GET['b'];
      $c= $_GET['c'];
      echo "<h3>This is a Concated string from a,b and c \"" . $a . " " . $b ." ". $c . "\"   </h3>";
       
    }else{
      echo "123123";
    }

   
  ?>
</body>
</html>