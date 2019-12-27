type webRequest;

[@bs.send]
external add_onBefore_sendHeaders_listener:
  (webRequest, Js.Dict.t(string)?, Js.Array.t(string)?) => unit =
  "browser.webRequest.onBeforeSendHeaders.addListener";

type request = {requestHeaders: Js.Dict.t(string)};

let concatRequestHeaders = requestHeaders => {
  Js.log(requestHeaders);
};
let onBeforeSendHeaders = e => {
  {requestHeaders: e.requestHeaders};
};

add_onBefore_sendHeaders_listener(concatRequestHeaders,) /* browser##webRequest##onBeforeSendHeaders##addListener*/;