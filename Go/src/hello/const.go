package main

/*
 *const constName = "const"
 *const Pi float32 = 3.1415926
 *
 *const Pi = 3.1415926
 *const i = 10000
 *const MaxThread = 10
 *const prefix = "astaxie_"
 */

import "fmt"

var frenchHello string
var emptyString string = ""

func test() {
	no, yes, maybe := "no", "yes", "maybe"
	japaneseHello := "Konichiwa"
	frenchHello = "Bonjour"
	fmt.Printf(no, yes, maybe, japaneseHello, frenchHello)
}
