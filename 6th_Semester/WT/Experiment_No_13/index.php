<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Email Example</title>
</head>

<body>

    <form action="send_mail.php" method="post">
        <label for="email">To </label>
        <input type="email" id="email" name="email" placeholder="Enter email"><br>
        <label for="subject">Subject</label>
        <input type="text" id="subject" name="subject" placeholder="Enter Subject"><br>
        <label for="message">Message</label>
        <textarea name="message" id="" cols="30" rows="10" placeholder=""></textarea><br>
        <input type="submit" value="Send">

    </form>

</body>

</html>