import React from "react";
import { Link, Outlet } from "react-router-dom";

export default function Header() {
  return (
    <>
      <div>
        <Link to={"/"}>Home</Link>
        <Link to={"/about"}>About</Link>
        <Link to={"/contact"}>Contact</Link>
      </div>
    </>
  );
}
