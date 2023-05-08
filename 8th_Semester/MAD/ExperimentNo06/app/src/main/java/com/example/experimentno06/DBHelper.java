package com.example.experimentno06;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import androidx.annotation.Nullable;

public class DBHelper extends SQLiteOpenHelper {

    final String TABLE="student";


    public DBHelper(Context context) {
        super(context, "STUD_DB", null, 1);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL("CREATE TABLE "+TABLE+"(prn VARCHAR(20) PRIMARY KEY, name VARCHAR(50))");
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {

    }

    public void insert(String prn, String name){
        ContentValues values=new ContentValues();
        values.put("prn",prn);
        values.put("name",name);
        getWritableDatabase().insert(TABLE,null,values);
    }

    public Cursor fetch(){
        Cursor cursor= getReadableDatabase().rawQuery("SELECT * FROM "+TABLE,null);
        return cursor;
    }

}
