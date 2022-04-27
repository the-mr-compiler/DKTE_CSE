<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous"></script>
</head>

<body>

    <?php
    $server = "localhost";
    $user = "root";
    $pass = "";
    $db = "dkte";
    $conn = mysqli_connect("$server", "$user", "$pass", "$db");
    $result = $conn->query('select * from students');

    if ($result->num_rows > 0) { ?>
        <table class="table table-hover table-inverse table-responsive">
            <thead class="thead-inverse">
                <tr>
                    <th>Roll No</th>
                    <th>Name</th>
                    <th>Email</th>
                </tr>
            </thead>
            <tbody>
                <?php while ($row = $result->fetch_assoc()) { ?>
                    <tr>
                        <td scope='row'><?php echo $row['id']; ?></td>
                        <td><?php echo $row['name']; ?></td>
                        <td><?php echo $row['email']; ?></td>
                    </tr>
                <?php } ?>

            </tbody>
        </table>
    <?php }

    ?>


    <form style="margin-left: 40px; width: 400px;" action="insert.php" method="post" class="form">
        <fieldset class="border p-2 ">
            <legend class="float-none w-auto p-2">Form insert</legend>
            <label>id</label>
            <input type="text" name="id" placeholder="Enter id"><br>
            <label>name</label>
            <input type="text" name="name" placeholder="Enter name"><br>
            <label>email</label>
            <input type="email" name="email" placeholder="Enter email"><br>
            <input type="submit" value="Submit" name="sub"><br>
        </fieldset>
    </form>


</body>

</html>