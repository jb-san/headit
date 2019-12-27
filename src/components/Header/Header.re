[@react.component]
let make = (~setSearch, ~searchValue) => {
  <div
    className="h-12 bg-white text-gray-800  flex justify-between items-center">
    <SearchInput onChange=setSearch value=searchValue />
    <button className="w-10 h-10 text-indigo-500 hover:text-indigo-800 ">
      <Add />
    </button>
  </div>;
};