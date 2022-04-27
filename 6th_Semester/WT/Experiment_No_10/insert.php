<?php
$server = "localhost";
$user = "root";
$pass = "";
$db = "dkte";
$conn = mysqli_connect("$server", "$user", "$pass", "$db");

$id = $_POST['id'];
$name = $_POST['name'];
$email = $_POST['email'];


$sql = "INSERT INTO `students`(`id`, `name`, `email`) VALUES
 ('$id','$name','$email')";

$res = mysqli_query($conn, $sql);

header("location:index.php");

mysqli_close($conn);
