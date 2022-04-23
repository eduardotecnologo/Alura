package main

import (
	"cadastro/routes"
	"net/http"
)

func main() {
	routes.LoadingRoute()
	http.ListenAndServe(":8000", nil)
}
