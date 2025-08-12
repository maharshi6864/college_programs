<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>A1Q5</title>
  <style>
    body{
      background-color:yellow
    }
  </style>
</head>
<body>
  
   <?php
    $hobbies = <<<HOBBY
      <h3>
      So, basically this is my hobbies : 
      <br>
      1.Eat<br>
      2.Sleep<br>
      3.Eat again<br>
      4.Sleep again<br>
      </h3>
    HOBBY;

    echo "What i say about my hobbies : " . $hobbies;
  ?>
</body>
</html>