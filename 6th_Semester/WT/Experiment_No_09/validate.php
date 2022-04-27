
<?php

if ($_POST['name']) {
    $name = $_POST['name'];
    $email = $_POST['email'];
    $mobile = $_POST['mobile'];
    $name = htmlspecialchars($name);
    $email = htmlspecialchars($email);
    $mobile = htmlspecialchars($mobile);
    if ($name == '' || !preg_match('/^[a-zA-Z ]*$/', $name)) {
        $error[] = 'Please enter valid name : ' . $name;
    }
    if ($email == '' || !preg_match("/^([a-z0-9\+_\-]+)(\.[a-z0-9\+_\-]+)*@([a-z0-9\-]+\.)+[a-z]{2,6}$/ix", $email)) {
        $error[] = 'Please enter valid email : ' . $email;
    }
    if ($mobile == '' || !preg_match("/^[0-9]{10}$/", $mobile)) {
        $error[] = 'Please enter valid mobile : ' . $mobile;
    }

    if (!isset($error)) {
        $message = "Name: $name<br>
                    Email: $email<br>
                    Mobile: $mobile";
        echo $message;
    } else {
        foreach ($error as $err) {
            echo $err . '<br>';
        }
        echo "<a href='index.html'><button>Try Again</button></a>";
    }
}
