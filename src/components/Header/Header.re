[@react.component]
let make = (~setSearch, ~searchValue) => {
  <div
    className="h-12 bg-white text-gray-800  flex justify-between items-center">
    <div className="flex flex-grow">
      <div className="w-12 h-12 bg-blue-800">
        <button className="p-3 text-white"> <Menu /> </button>
      </div>
      <SearchInput onChange=setSearch value=searchValue />
    </div>
    <button className="w-10 h-10 text-blue-500 hover:text-blue-800 ">
      <Add />
    </button>
  </div>;
};