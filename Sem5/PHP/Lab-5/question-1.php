<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>L5Q1</title>
  <style>
    table,
    td,
    th {
      border: 1px solid black;
      border-collapse: collapse;
    }

    td,
    th {
      padding: 5px;
      font-size: 20px;
    }
  </style>
</head>

<body>
  <h1 style="font-size: 30px;">Product Catalog</h1>
  <?php
    $products=[
      ["Wireless Mouse",350,"Electronics"],
      ["Bluetooth Speaker",1200,"Electronics"],
      ["NoteBook",80,"Stationery"],
      ["Pen Drive 64GB",700,"Electronics"],
      ["Water Bottle",150,"Home & Kitchen"],
      ["Desk Lamp",950,"Home & Kitchen"],
    ];

    // Printing the first table, displaying all the items.
    echo "<table><tr><th>Name</th><th>Price</th><th>Category</th></tr>";
    for($i=0;$i<count($products);$i++)
    {
      echo "<tr>";
      for($j=0;$j<count($products[$i]);$j++)
      {
        echo "<td>" . $products[$i][$j] . "</td>";
      }  
      echo "</tr>";
    }

    echo "</table>";
  ?>

  <h1 style="font-size: 30px;">Products with price > 500</h1>

  <?php
   
    // Printing the first table, displaying all the items.
    echo "<table><tr><th>Name</th><th>Price</th><th>Category</th></tr>";
    for($i=0;$i<count($products);$i++)
    {
      echo "<tr>";
      if($products[$i][1]>500)
      {
        for($j=0;$j<count($products[$i]);$j++)
      {
        echo "<td>" . $products[$i][$j] . "</td>";
      }
      }  
      echo "</tr>";
    }

    echo "</table>";
  ?>
<br><br>
  <a href="navigatefile.php">Go Back</a>
</body>

</html>