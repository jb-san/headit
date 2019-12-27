[@react.component]
let make = (~parity) => {
  switch (parity) {
  | "odd" =>
    <div className="text-blue-300 bg-gray-200  border-r border-gray-500">
      <Remove />
    </div>
  | _ =>
    <div className="text-blue-300 bg-gray-100  border-r border-gray-500">
      <Remove />
    </div>
  };
};