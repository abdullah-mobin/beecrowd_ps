package main

import "fmt"

func main() {
	var a int
	c := 0
	for i := 0; i < 6; i++ {
		fmt.Scanf("%d", &a)
		if a > 0 {
			c++
		}
	}
	fmt.Println(c, "valores positivos")
}
