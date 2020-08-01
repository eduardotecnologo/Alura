import React, { useState } from 'react';
import { Link } from 'react-router-dom';
import PageDefault from '../../../components/PageDefault';

function CadastroCategoria() {
  const [categorias, setCategorias] = useState(['Teste']);

  const valueInitial = {
    nome: 'Categoria inicial',
    descricao: 'Descrição da Categoria',
    cor: '#000',
  }
  const [values, setValues] = useState(valueInitial);

  function setValue(key, value){
    setValues({
      ...values,
      [key]: value,
    })
  }

  return (
    <PageDefault>
      <h1>Cadastro de Categoria: {values.nome}</h1>
      <form onSubmit={
        function handleSubmit(dataEvent){
          dataEvent.preventDefault();
          setCategorias([
            ...categorias,
            values
          ]);

        }
      }>
      {/* State */}
        <div>
            <label>
              Nome da Categoria:
            <input
                   type="text"
                   value={values.nome}
                   onChange={
                function functionHandler(dataEvent) {
                  setValue('nome', dataEvent.target.value);
                  // setNomeDaCategoria(dataEvent.target.value);
                }} />
            </label>

        </div>

          <div>
            <label>
              Descrição:
            <textarea
                type="text"
              value={values.descricao}
                onChange={
                  function functionHandler(dataEvent) {
                    // setNomeDaCategoria(dataEvent.target.value);
                  }} />
            </label>
          </div>

          <div>
            <label>
              Cor:
            <input
                type="color"
              value={values.cor}
                onChange={
                  function functionHandler(dataEvent) {
                    // setNomeDaCategoria(dataEvent.target.value);
                  }} />
            </label>
          </div>


        <button>
          Cadastrar
        </button>
      </form>

      <ul>
          {categorias.map((categoria, indice) => {
            return(
              <li key={`${categoria}${indice}`}>
                {categoria}
              </li>
            )
          })}
      </ul>


      <Link to="/">
        Ir para home
      </Link>
    </PageDefault>
  )
}

export default CadastroCategoria;