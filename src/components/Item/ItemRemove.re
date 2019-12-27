[@react.component]
let make = (~parity) => {
  switch (parity) {
  | "odd" =>
    <div className="text-gray-300 bg-gray-200  border-r border-gray-500 hover:text-gray-500">
      <Remove />
    </div>
  | "even" =>
    <div className="text-gray-300 bg-gray-100  border-r border-gray-500 hover:text-gray-500">
      <Remove />
    </div>
  | _ =>
    <div className="text-gray-300 bg-gray-100  border-r border-gray-500 hover:text-gray-500">
      <Remove />
    </div>
  };
};