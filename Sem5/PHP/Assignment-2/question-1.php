<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q1</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter a number !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      if ($n%2==0) {
        echo "<h4>Number ". $n ." is an even number.</h4>";
      }else{
        echo "<h4>Number ". $n ." is an odd number.</h4>";
      }
    }else{
      echo "Without number";
    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>