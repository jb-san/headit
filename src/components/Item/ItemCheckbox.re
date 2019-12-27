[@react.component]
let make = (~onChange, ~value, ~parity) => {
  let handleOnChange = _event => {
    onChange(!value);
  };
  switch (parity) {
  | "odd" =>
    <div
      className="bg-gray-200 border-r border-l border-gray-500 text-xs font-bold px-2 py-4 flex items-center">
      <input
        className="w-full block bg-gray-200"
        type_="checkbox"
        checked=value
        onChange=handleOnChange
      />
    </div>
  | "even" =>
    <div
      className="bg-gray-100 border-r border-l border-gray-500 text-xs font-bold px-2 py-4 flex items-center">
      <input
        className="w-full block bg-gray-100"
        type_="checkbox"
        checked=value
        onChange=handleOnChange
      />
    </div>
  | _ =>
    <div
      className="bg-gray-200 border-r border-l border-gray-500 text-xs font-bold px-2 py-4 flex items-center">
      <input
        className="w-full block bg-gray-200"
        type_="checkbox"
        checked=value
        onChange=handleOnChange
      />
    </div>
  };
};