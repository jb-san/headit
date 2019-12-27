[@react.component]
let make = () => {
  <>
    <div
      className="border-t border-b border-gray-500 text-blue-600"
      style={ReactDOMRe.Style.make(
        ~display="grid",
        ~gridTemplateColumns="3rem 1fr 2fr 2fr 3rem 3rem",
        (),
      )}>
      <TableHeader> {React.string("")} </TableHeader>
      <TableHeader> {React.string("Header")} </TableHeader>
      <TableHeader> {React.string("Value")} </TableHeader>
      <TableHeader> {React.string("Comment")} </TableHeader>
      <TableHeader> {React.string("Edit")} </TableHeader>
      <TableHeader> {React.string("")} </TableHeader>
    </div>
    <div
      className="text-blue-800 border-b  border-gray-500"
      style={ReactDOMRe.Style.make(
        ~display="grid",
        ~gridTemplateColumns="3rem 1fr 2fr 2fr  3rem 3rem",
        ~maxHeight="300px",
        ~overflowY="scroll",
        (),
      )}>
      // This is where the items should loop

        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
        <Item
          checked=false
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="odd"
        />
        <Item
          checked=true
          header="iv-user"
          value="198711090178"
          comment="asdf"
          onChange={_ => ()}
          parity="even"
        />
      </div>
  </>;
};