package main

import (
	"fmt"
)

func main() {
	/*
	 *var s string = "hello"
	 *s[0] = 'c'
	 */

	s := "hello"
	c := []byte(s)
	c[0] = 'c'
	s2 := string(c)
	fmt.Printf("%s\n", s2)
}
