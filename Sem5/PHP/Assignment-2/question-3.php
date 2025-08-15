<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A2Q3</title>
</head>
<body>
  <form  method="GET">
    <input type="number" name="n" placeholder="Enter your percentage !">
    <br><br>
    <button type="submit">Submit</button>
  </form>
  <br><br>
  <?php
    if($_GET)
    {
      $n = $_GET['n'];
      if ($n>=0 && $n<=100) {
        if ($n>50) {
          if ($n>74) {
            if ($n>89) {
              echo "<h4>You Grade for this examination is : <b>A<b>.</h4>";
            }
            else{
              echo "<h4>You Grade for this examination is : <b>B<b>.</h4>";
            }
          }
          else{
            echo "<h4>You Grade for this examination is : <b>C<b>.</h4>";
          }  
        }
        else{
          echo "<h4>You are Failed in the examination.</h4>";
        }
      }else{
        echo "<h4>You have entered invalid marks.</h4>";
      }
    }else{

    }

  ?>
  <br><br>
  <a href="navigatefile.php">Go Back</a>
</body>
</html>