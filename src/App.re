[@react.component]
let make = () => {
  let (searchValue, setSearch) = React.useState(() => "");

  <div className="" style={ReactDOMRe.Style.make(~width="500px", ())}>
    <Header setSearch searchValue />
    <Table />
  </div>;
};