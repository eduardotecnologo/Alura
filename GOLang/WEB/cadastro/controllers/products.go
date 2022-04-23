package controllers

import (
	"cadastro/models"
	"html/template"
	"log"
	"net/http"
	"strconv"
)

var temp = template.Must(template.ParseGlob("templates/*.html"))

func Index(w http.ResponseWriter, r *http.Request) {
	allProducts := models.SearchAllProduct()
	temp.ExecuteTemplate(w, "Index", allProducts)
}
func New(w http.ResponseWriter, r *http.Request) {
	temp.ExecuteTemplate(w, "New", nil)
}

func Insert(w http.ResponseWriter, r *http.Request) {
	if r.Method == "POST" {
		name := r.FormValue("name")
		description := r.FormValue("description")
		price := r.FormValue("price")
		quantity := r.FormValue("quantity")

		priceConvert, err := strconv.ParseFloat(price, 64)
		if err != nil {
			log.Println("Erro ao converter preço!", err)
		}

		qtdConvert, err := strconv.Atoi(quantity)
		if err != nil {
			log.Println("Erro ao converter quantidade!", err)
		}

		models.InsertProduct(name, description, priceConvert, qtdConvert)
	}
	http.Redirect(w, r, "/", 301)
}
