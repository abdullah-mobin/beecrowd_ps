package main

import "fmt"

func main() {
	var a int
	fmt.Scanf("%d", &a)
	if a%2 == 1 {
		for i := a; i <= a+11; i = i + 2 {
			fmt.Println(i)
		}
	} else {
		for i := a + 1; i < a+12; i = i + 2 {
			fmt.Println(i)
		}
	}
}
