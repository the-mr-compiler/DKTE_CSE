<?php

if (isset($_FILES['file'])) {
    $file = $_FILES['file'];
    $file_name = $file['name'];
    $file_tmp_name = $file['tmp_name'];
    $file_size = $file['size'];
    $file_error = $file['error'];
    $file_type = $file['type'];
    $file_ext = explode('.', $file_name);

    echo $file_name . '<br>';
    echo $file_tmp_name . '<br>';
    echo $file_size . '<br>';
    echo $file_error . '<br>';
    echo $file_type . '<br>';
    echo $file_ext[1] . '<br>';

    save_file($file_tmp_name, $file_name);
}

function save_file($file_tmp_name, $file_name)
{
    $file_path = 'uploads/' . $file_name;
    move_uploaded_file($file_tmp_name, $file_path);
    echo '<img src="' . $file_path . '" width="200px">';
}
