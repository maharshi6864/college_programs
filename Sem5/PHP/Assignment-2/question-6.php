<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q6</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter any number !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      echo "<h3>Printing multiplication table of ". $n ." !!</h3>";
       for ($i=0; $i < 10; $i++) { 
      echo "<span> ". $n . " X ". $i+1 . " = ". ($i+1) * $n . "</span> <br>";
    }
    }else{

    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>