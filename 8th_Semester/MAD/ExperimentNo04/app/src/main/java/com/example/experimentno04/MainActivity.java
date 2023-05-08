package com.example.experimentno04;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    Button btnSubmit;
    EditText txtName;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnSubmit=findViewById(R.id.btnSubmit);
        txtName=findViewById(R.id.txtName);
        btnSubmit.setOnClickListener(view->{
            String name=txtName.getText().toString();
            Toast.makeText(MainActivity.this,"Hello, "+name,Toast.LENGTH_SHORT).show();
        });
    }
}