package main

import "fmt"

func main() {
	var a int
	fmt.Scanf("%d", &a)
	if a%2 == 1 {
		for i := 1; i <= a; i = i + 2 {
			fmt.Println(i)
		}
	} else {
		for i := 1; i < a; i = i + 2 {
			fmt.Println(i)
		}
	}
}
