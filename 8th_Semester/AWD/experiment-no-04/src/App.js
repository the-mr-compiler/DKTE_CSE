import Greeting from "./Greeting";

function App() {
  const greet = function () {
    alert("Hello Vaibhav");
  };

  return (
    <>
      <Greeting name={"Vaibhav"} />
      <button onClick={greet}>Greet</button>
    </>
  );
}

export default App;
