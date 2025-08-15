<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q5</title>
</head>
<body>
  <h3>Print Number Between 1 to 10 using "for" loop !!</h3>
  <br>
  <?php
    for ($i=0; $i < 10; $i++) { 
      echo "<span> ". $i+1 . "</span> ";
    }
  ?>
  <br><br>

  <h3>Print Number Between 1 to 10 using "while" loop !!</h3>
  <br><br>
  <?php
    $j=10;
    while($j>0)
    {
      echo "<span> ". 11 - $j . "</span>";
      $j --;
    }
  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>