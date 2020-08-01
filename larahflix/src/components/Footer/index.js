import React from 'react';
import { FooterBase } from './styles';
import Logo from '../../assets/img/Logo.png'


function Footer() {
  return (
    <FooterBase>
      <a href="/">
        <img className="Logo" src={Logo} alt="Laraflix" />
      </a>
      <p>
        Suavão, criado com S2 e muito café | Eduardo Developer
        {' '}
        <a href="http://localhost:3000/">
        </a>
      </p>
    </FooterBase>
  );
}

export default Footer;
