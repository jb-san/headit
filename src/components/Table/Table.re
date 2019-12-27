[@react.component]
let make = () => {
  <>
    <div
      className="border-t border-b border-gray-500 text-indigo-600"
      style={ReactDOMRe.Style.make(
        ~display="grid",
        ~gridTemplateColumns="32px 1fr 2fr 2fr",
        (),
      )}>
      <TableHeader> {React.string("")} </TableHeader>
      <TableHeader> {React.string("Header")} </TableHeader>
      <TableHeader> {React.string("Value")} </TableHeader>
      <TableHeader> {React.string("Comment")} </TableHeader>
    </div>
    <div
      className="text-indigo-800 border-b  border-gray-500"
      style={ReactDOMRe.Style.make(
        ~display="grid",
        ~gridTemplateColumns="32px 1fr 2fr 2fr",
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