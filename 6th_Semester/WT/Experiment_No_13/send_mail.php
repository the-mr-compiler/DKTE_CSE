<?php

if (isset($_POST['email']) && isset($_POST['subject']) && isset($_POST['message'])) {
    $to = $_POST['email'];
    $subject = $_POST['subject'];
    $message = $_POST['message'];
    $headers = "From: msoftsoftwares21@gmail.com";
    if (mail($to, $subject, $message, $headers)) {
        echo "Email sent successfully";
    } else {
        echo "Email sending failed";
    }
}
