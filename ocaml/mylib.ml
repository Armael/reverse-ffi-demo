let hello s =
  Printf.printf "hello %s!\n%!" s

let () =
  Callback.register "hello" hello
