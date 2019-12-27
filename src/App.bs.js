'use strict';

var React = require("react");
var Table$ReasonReactExamples = require("./components/Table/Table.bs.js");
var Header$ReasonReactExamples = require("./components/Header/Header.bs.js");

function App(Props) {
  var match = React.useState((function () {
          return "";
        }));
  return React.createElement("div", {
              className: "",
              style: {
                width: "700px"
              }
            }, React.createElement(Header$ReasonReactExamples.make, {
                  setSearch: match[1],
                  searchValue: match[0]
                }), React.createElement(Table$ReasonReactExamples.make, { }));
}

var make = App;

exports.make = make;
/* react Not a pure module */
