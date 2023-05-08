const express = require("express");

const app = express();
const router = express.Router();
app.get("/", function (req, res, next) {
  res.send("Hello World");
});

app.listen(3000);
