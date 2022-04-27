<?php

session_start();
if (isset($_SESSION['user'])) {
    header('location:index.php');
}

if (isset($_POST['username'])) {
    $username = $_POST['username'];
    $password = $_POST['password'];
    if ($username == 'admin' && $password == 'admin') {
        $_SESSION['user'] = $username;
        header('location:index.php');
    } else {
        echo '<script>alert("Wrong username or password!")</script>';
    }
}

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="login.php" method="post">
        <input type="text" name="username" placeholder="username"><br>
        <input type="password" name="password" placeholder="password"><br>
        <input type="submit" value="Login">
    </form>
</body>

</html>