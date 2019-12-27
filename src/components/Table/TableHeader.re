[@react.component]
let make = (~children) => {
  <div
    className="bg-white border-r border-b border-gray-500 text-xs font-bold px-2 py-1">
    children
  </div>;
};