[@bs.val]
external addListener: ('a, Js.Dict.t(string), Js.Array.t(string)) => 'a =
  "browser.webRequest.onBeforeSendHeaders.addListener";
let rewriteRequestHeaders = e => {
  e;
};