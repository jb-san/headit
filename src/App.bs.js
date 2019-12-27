'use strict';

var React = require("react");

function App(Props) {
  return React.createElement("div", {
              className: "bg-gray-300"
            }, "hello");
}

var make = App;

exports.make = make;
/* react Not a pure module */
