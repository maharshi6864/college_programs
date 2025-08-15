<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q9</title>
</head>
<body>
  <h2>Pass by value and Pass By reference</h2>
  <br><br>
  <h3>Pass By Value</h3>
  <p>Definition: A copy of the variable’s value is passed to the function.</p>
  <p>Effect: Changes inside the function do not affect the original variable.</p>
  <br><br>
  <?php
  $x=100;
  function passValue($d)
  {
    $d=90;
  }
  passValue($x);
  echo $x;
  ?>
  <br><br>
  <h3>Pass By Reference</h3>
  <p>Definition: You pass the variable’s memory reference (using &).</p>
  <p>Effect: Changes inside the function do affect the original variable.</p>
  <br><br>
  <?php
  $y=100;
  function passReference(&$d)
  {
    $d=90;
  }
  passReference($y);
  echo $y;
  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>