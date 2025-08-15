<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q2</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter a your age !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      if ($n>=18) {
        echo "<h4>You are eligible for voting.</h4>";
      }else{
        echo "<h4>You are not eligible for voting.</h4>";
      }
    }else{

    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>