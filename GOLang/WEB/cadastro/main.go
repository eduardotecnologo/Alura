package main

import (
	"database/sql"
	"html/template"
	"net/http"

	_ "github.com/lib/pq"
)

func connectDB() *sql.DB {
	connect := "user=postgres dbname=LojaGoWeb password=root host=localhost:5433 sslmode=disable"
	db, err := sql.Open("postgres", connect)
	if err != nil {
		panic(err.Error())
	}
	return db
}

type Product struct {
	Name        string
	Description string
	Price       float64
	Quantity    int
}

var temp = template.Must(template.ParseGlob("templates/*.html"))

func main() {
	db := connectDB()
	defer db.Close()
	http.HandleFunc("/", index)
	http.ListenAndServe(":8080", nil)
}

func index(w http.ResponseWriter, r *http.Request) {
	produtos := []Product{
		{
			Name:        "Notebook",
			Description: "I7 16GB 1TB",
			Price:       2000,
			Quantity:    10,
		},
		{
			Name:        "Smartphone",
			Description: "Iphone X",
			Price:       3000,
			Quantity:    20,
		},
	}
	temp.ExecuteTemplate(w, "index.html", produtos)
}
