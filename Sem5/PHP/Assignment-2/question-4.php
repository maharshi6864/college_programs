<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q4</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter day number to get the day !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      switch ($n) {
        case '1':
          echo "<h4>Today is  : <b>Sunday<b>.</h4>";
          break;
        
        case '2':
          echo "<h4>Today is  : <b>Monday<b>.</h4>";
          break;
        
        case '3':
          echo "<h4>Today is  : <b>Tuesday<b>.</h4>";
          break;
        
        case '4':
          echo "<h4>Today is  : <b>Wednesday<b>.</h4>";
          break;
        
        case '5':
          echo "<h4>Today is  : <b>Thursday<b>.</h4>";
          break;
        
        case '6':
          echo "<h4>Today is  : <b>Friday<b>.</h4>";
          break;
        
        case '7':
          echo "<h4>Today is  : <b>Saturday<b>.</h4>";
          break;
               
        default:
          echo "<h4>You have entered invalid number.</h4>";
          break;
      }
    }else{

    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>