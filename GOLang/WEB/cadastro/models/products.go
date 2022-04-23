package models

import (
	"cadastro/db"
)

type Product struct {
	Id          int
	Name        string
	Description string
	Price       float64
	Quantity    int
}

func SearchAllProduct() []Product {
	db := db.ConnectDB()
	selectAllPrducts, err := db.Query("SELECT * FROM products order by id asc")
	if err != nil {
		panic(err.Error())
	}

	p := Product{}
	products := []Product{}

	for selectAllPrducts.Next() {
		var id, quantity int
		var name, description string
		var price float64

		err = selectAllPrducts.Scan(&id, &name, &description, &price, &quantity)
		if err != nil {
			panic(err.Error())
		}

		p.Id = id
		p.Name = name
		p.Description = description
		p.Price = price
		p.Quantity = quantity

		products = append(products, p)
	}
	defer db.Close()
	return products
}

func InsertProduct(name, description string, price float64, quantity int) {
	db := db.ConnectDB()
	insertProduct, err := db.Prepare("INSERT INTO products(name, description, price, quantity) VALUES($1, $2, $3, $4)")
	if err != nil {
		panic(err.Error())
	}

	insertProduct.Exec(name, description, price, quantity)
	defer db.Close()
}

func DeleteProduct(id string) {
	db := db.ConnectDB()
	deleteProduct, err := db.Prepare("DELETE FROM products WHERE id=$1")
	if err != nil {
		panic(err.Error())
	}

	deleteProduct.Exec(id)
	defer db.Close()
}

func EditProduct(id string) Product {
	db := db.ConnectDB()
	selectProduct, err := db.Query("SELECT * FROM products WHERE id=$1", id)
	if err != nil {
		panic(err.Error())
	}

	productUpdate := Product{}

	for selectProduct.Next() {
		var id, quantity int
		var name, description string
		var price float64

		err = selectProduct.Scan(&id, &name, &description, &price, &quantity)
		if err != nil {
			panic(err.Error())
		}

		productUpdate.Id = id
		productUpdate.Name = name
		productUpdate.Description = description
		productUpdate.Price = price
		productUpdate.Quantity = quantity
	}
	defer db.Close()
	return productUpdate
}

func UpdateProduct(id int, name string, description string, price float64, quantity int) {

	db := db.ConnectDB()
	updateProduct, err := db.Prepare("UPDATE products SET name=$1, description=$2, price=$3, quantity=$4 WHERE id=$5")
	if err != nil {
		panic(err.Error())
	}

	updateProduct.Exec(name, description, price, quantity, id)
	defer db.Close()

}
