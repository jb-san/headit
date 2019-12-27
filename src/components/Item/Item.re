[@react.component]
let make = (~checked, ~header, ~value, ~comment, ~onChange, ~parity) => {
  <>
    <ItemCheckbox onChange={_ => ()} value=checked parity />
    <ItemInput onChange={_ => ()} value=header placeholder="Header" parity />
    <ItemInput onChange={_ => ()} value placeholder="Value" parity />
    <ItemInput onChange={_ => ()} value=comment placeholder="Comment" parity />
  </>;
};