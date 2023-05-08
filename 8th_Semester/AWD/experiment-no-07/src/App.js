import React, { useState } from "react";

export default function App() {
  const [value, setValue] = useState(1);
  return (
    <div>
      <div>Current Value {value}</div>
      <button onClick={() => setValue(value + 1)}>Add</button>
    </div>
  );
}
