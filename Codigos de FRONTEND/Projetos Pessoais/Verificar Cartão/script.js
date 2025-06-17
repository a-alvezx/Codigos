window.alert("Site feito para diversão! Use dados fictícios!")

function verificar() {
    // 1. Verificar o tipo de cartão
    const typecard = document.querySelector('#typecard').value
    var img = document.createElement('img')
    img.setAttribute('id', 'foto')
    var foto = document.querySelector('#img')
    foto.innerHTML = '' // Limpa a imagem anterior
    switch (typecard) {
        case 'Visa':
            img.setAttribute('src', 'https://www.mobills.com.br/blog/wp-content/uploads/2022/06/logo-da-visa-bandeira-cartao-e1709061738681.png');
            break
        case 'Mastercard':
            img.setAttribute('src', '')
            break;
        case 'Elo':
            img.setAttribute('src', '')
            break;
        case 'Hipercard':
            img.setAttribute('src', '')
            break;
        
        case 'padrão':
            window.alert("Selecione um tipo de cartão válido!")
            return
        default:
            window.alert('Error, tente novamente')
            return
    }
   foto.appendChild(img);     
   //--------------------------------------------------------//
   // 2. Inserir o Nome do titular
   const ncard = document.querySelector('#namecard').value
   var rescard = document.querySelector('#nome_titular').innerHTML = ncard.toUpperCase()

}   