import React, { useState } from "react";

export default function App() {
  const [name, setName] = useState("");

  return (
    <form
      onSubmit={(e) => {
        e.preventDefault();
        alert(`Submitting Name ${name}`);
      }}

      style={{display:"flex",flexDirection:"column",alignItems:"center"}}
    >
      <label htmlFor="name" style={{color:"red",fontSize:"30px"}}> Name: </label>
      <input
        id="name"
        type="text"
        value={name}
        onChange={(e) => setName(e.target.value)}
      />
      <button type="submit">Submit</button>
    </form>
  );
}
