[@react.component]
let make = () => {
  let (searchValue, setSearch) = React.useState(() => "");

  <div className="" style={ReactDOMRe.Style.make(~width="700px", ())}>
    <Header setSearch searchValue />
    <Table />
  </div>;
};