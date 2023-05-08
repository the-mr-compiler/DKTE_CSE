package com.example.experimentno03;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;

public class SecondActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        Button btn=findViewById(R.id.btnPrevious);

        String a=this.getIntent().getStringExtra("var");
        Toast.makeText(this,a,Toast.LENGTH_SHORT).show();

        btn.setOnClickListener(view->{
            finish();
        });
    }
}