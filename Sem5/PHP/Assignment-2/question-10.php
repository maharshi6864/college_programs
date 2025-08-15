<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q10</title>
</head>
<body>
  <form  method="GET">
    <input type="text" name="n" placeholder="Enter a String !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      echo "<h3>Printing the Original String : " . $n ."</h3> ";
      echo "<h3>Printing the Length of the String : ". strlen($n) ."</h3>";
      echo "<h3>Printing the String in Lower Case : ". strtolower($n) ."</h3>";
      echo "<h3>Printing the Reverse of the String : ". strrev($n) ."</h3>";
      echo "<h3>Number of words in the String  : ". str_word_count($n) ."</h3>";
    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>