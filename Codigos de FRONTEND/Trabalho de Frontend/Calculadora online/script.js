var valor1 = ''
var operador = ''
var novo_numero = false
function one(num){
    var visor = document.getElementById("display")
    if (visor.innerHTML.length >= 10) {
        window.alert("Número máximo de dígitos atingido!")
        visor.innerHTML = ' '
        return
    }
    if (novo_numero == true){ 
        visor.innerHTML = ''
        novo_numero = false
    }
    visor.innerHTML += num;
}

function math(op){
    var visor = document.getElementById("display")
    novo_numero = false
    valor1 = visor.innerHTML
    operador = op
    novo_numero = true
}
function calcular(){
    var visor = document.getElementById("display")
    var valor2 = visor.innerHTML
    var resultado = 0
    switch(operador) {
        case '+':
            resultado = Number(valor1) + Number(valor2)
            break;
        case '-':
            resultado = Number(valor1) - Number(valor2)
            break;
        case '*':   
            resultado = Number(valor1) * Number(valor2)
            break;
        case '/':
            resultado = Number(valor1) / Number(valor2)
            break;
        case '^':
            resultado = Math.pow(Number(valor1), Number(valor2))
            break;
        default:
            resultado = 'Operador inválido'
    }
    if (String(resultado).length > 10) {
        window.alert("Resultado muito grande!")
        visor.innerHTML = ''
        return;
    }
    novo_numero = true
    visor.innerHTML = resultado
}