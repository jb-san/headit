[@react.component]
let make = (~onChange, ~value) => {
  let handleChange = event => {
    onChange(ReactEvent.Form.target(event)##value);
  };
  <input
    className="w-1/2 block px-2"
    onChange=handleChange
    value
    placeholder="Search all headers and comments"
  />;
};