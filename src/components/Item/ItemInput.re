[@react.component]
let make = (~onChange, ~value, ~placeholder, ~parity) => {
  let handleOnChange = event => {
    onChange(ReactEvent.Form.target(event)##value);
  };

  switch (parity) {
  | "odd" =>
    <div
      className="bg-gray-200 border-r border-gray-500 text-xs font-bold px-2 py-2">
      <input
        className="w-full block bg-gray-200"
        onChange=handleOnChange
        value
        placeholder
      />
    </div>
  | "even" =>
    <div
      className="bg-gray-100 border-r border-gray-500 text-xs font-bold px-2 py-2">
      <input
        className="w-full block bg-gray-100"
        onChange=handleOnChange
        value
        placeholder
      />
    </div>
  | _ =>
    <div
      className="bg-gray-200 border-r border-gray-500 text-xs font-bold px-2 py-2">
      <input
        className="w-full block bg-gray-200"
        onChange=handleOnChange
        value
        placeholder
      />
    </div>
  };
};