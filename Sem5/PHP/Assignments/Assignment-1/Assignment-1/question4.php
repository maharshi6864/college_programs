<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A1Q4</title>
  <style>
    table,table td{
      border: 1px solid black;
      border-collapse:collapse;
      margin-top:10px
    }

    td{
      padding:2px
    }
  </style>
</head>
<body>
  <form method="get">
    <label for="">Value of a : </label>
    <input type="text" name="a" id=""/><br><br>
    <label for="">Value of b : </label>
    <input type="text" name="b" id=""/><br><br>
    <label for="">Value of c : </label>
    <input type="text" name="c" id=""/><br><br>
    <label for="">Value of d : </label>
    <input type="text" name="d" id=""/><br><br>
    <label for="">Value of e : </label>
    <input type="text" name="e" id=""/><br><br>

    <button type="submit" >Submit</button>
  </form>
  <br><br>
   <?php
    if ($_GET) {
      $a= $_GET['a'];
      $b= $_GET['b'];
      $c= $_GET['c'];
      $d= $_GET['d'];
      $e= $_GET['e'];
      echo "<h3>This is a Concated string : \"" . $a . " " . $b ." ". $c . " " . $d ." ". $e . "\"   </h3>";
      echo "<h3> Showing 5 strings individually </h3>";
      echo  $a . "<br>";
      echo  $b . "<br>";
      echo  $c . "<br>";
      echo  $d . "<br>";
      echo  $e . "<br>";

      echo "<table>";    
      echo "<tr><td><h3>This is an example showing the sentences in table.</h3></tr></td>";  
      echo "<tr><td>". $a . "</tr></td>";
      echo "<tr><td>". $b . "</tr></td>";
      echo "<tr><td>". $c . "</tr></td>";
      echo "<tr><td>". $d . "</tr></td>";
      echo "<tr><td>". $e . "</tr></td>";
      echo "</table>";
    }else{
      echo "123123";
    }

   
  ?>
</body>
</html>