function verificar(){
    var data = new Date()
    var ano = data.getFullYear()
    var fano = document.getElementById('ano')
    var res = document.getElementById('res')

    if ( fano.value.length == 0 || Number(fano.value) > ano ){
        res.innerHTML = 'O ano é invalido!'
    } else {
        var fsex = document.getElementsByName('sex')
        var idade = ano - Number(fano.value)
        var genero = ''
        var img = document.createElement('img')
        img.setAttribute('id', 'foto')
        if ( fsex[0].checked ){
            genero = 'um homem'
            if ( idade == 0 ){
                img.setAttribute( 'src', '0anos.jpg')
                genero = 'um espermatozoide'
                idade = 'nenhum'
            } else if (idade >= 1 && idade <= 5 ) {
                img.setAttribute( 'src', 'bebe.jpg')
            } else if ( idade >= 6 && idade <= 12 ){
                img.setAttribute( 'src', 'criança.jpg')
            } else if ( idade >= 13 && idade < 18 ){
                img.setAttribute( 'src', 'ado.jpg')
            } else if ( idade >= 18 && idade < 35){ 
                img.setAttribute( 'src', 'jovem.jpg')
            } else if ( idade >= 35 && idade < 60 ){
                img.setAttribute( 'src', 'adulto.jpg')
            } else if ( idade > 60 && idade < 100 ){
                img.setAttribute( 'src', 'velho.jpg')
            } else if ( idade > 100 ){
                img.setAttribute( 'src', 'mds.jpg')
                var idade = 'muitos'
            }
        } else {
            genero = 'Mulher'
            
        }
        res.innerHTML = `Detectamos ${genero} com ${idade} anos`;
        res.appendChild(img);
    }


}