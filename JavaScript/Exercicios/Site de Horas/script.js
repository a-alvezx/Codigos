function carregar(){
    var msg = document.getElementById('time')
    var img = document.getElementById('image')
    var hora = prompt ("Que horas são?")
    var corpo = document.body
    msg.innerHTML = `São ${hora} horas`
    if ( hora >= 6 && hora < 12 ){
        document.getElementById('res').innerHTML = `Agora é Manhã`
        corpo.style.background = '#FFDAB9'
        img.src = 'manha.jpg'
    } else if ( hora >= 12 && hora < 18 ){
        document.getElementById('res').innerHTML = `Agora é tarde`
        img.src = 'tarde.jpg'
        corpo.style.background ='#FFB482'
    } else if ( hora >= 18 && hora < 24 ){
        document.getElementById('res').innerHTML = `Agora é Noite`
        img.src = 'noite.jpg'
        corpo.style.background = '#1A2533'
    } else if ( hora == 24 ){
        document.getElementById('res').innerHTML = `Meia Noite! <br> Horario Oficial do óleo de macaco!`
        corpo.style.background = '#00001A'
        img.src = 'oleomono.jpg'
    } else {    
        document.getElementById('res').innerHTML = `Horario Invalido`
    }
}

