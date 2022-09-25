proc NimMain(){.importc.}
proc hello*():string {.exportc.}= 
  return "nim hello"
