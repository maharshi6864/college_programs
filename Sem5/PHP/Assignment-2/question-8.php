<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q8</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter value of a !">
    <br><br>
    <input type="number" name="m" placeholder="Enter value of b !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $a=$_GET['n'];
      $b=$_GET['m'];
      addition($a,$b);
    }

  function addition($c,$d)
  {
    echo "<h4>Addition of a and b is :". $c + $d . " </h4>";
  }

  greet();
  greet();greet();greet();greet();
  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>