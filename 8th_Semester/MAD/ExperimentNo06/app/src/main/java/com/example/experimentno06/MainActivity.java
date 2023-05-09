package com.example.experimentno06;

import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TableLayout;
import android.widget.TableRow;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    DBHelper helper;
    TableLayout table;
    EditText txtPrn, txtName;
    Button btnAdd;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        helper = new DBHelper(this);
        txtName = findViewById(R.id.txtName);
        txtPrn = findViewById(R.id.txtPrn);
        btnAdd = findViewById(R.id.btnAdd);
        table = findViewById(R.id.table);
        fetchAll();
        btnAdd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = txtName.getText().toString();
                String prn = txtPrn.getText().toString();
                helper.insert(prn, name);
                fetchLast();
            }
        });
    }


    private void fetchAll() {
        table.removeAllViews();
        Cursor cursor = helper.fetch();
        while (cursor.moveToNext()) {
            TableRow row = new TableRow(getApplicationContext());
            TextView t1 = new TextView(getApplicationContext());
            TextView t2 = new TextView(getApplicationContext());
            t1.setText(cursor.getString(0));
            t2.setText(cursor.getString(1));
            row.addView(t1);
            row.addView(t2);
            table.addView(row);
        }
    }

    private void fetchLast() {
        Cursor cursor = helper.fetch();
        cursor.moveToLast();
        TableRow row = new TableRow(getApplicationContext());
        TextView t1 = new TextView(getApplicationContext());
        TextView t2 = new TextView(getApplicationContext());
        t1.setText(cursor.getString(0));
        t2.setText(cursor.getString(1));
        row.addView(t1);
        row.addView(t2);
        table.addView(row);

    }
}