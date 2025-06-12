function test(){
    var a = parseInt(document.getElementById('a').value)
    var b = parseInt(document.getElementById('b').value)
    var c = parseInt(document.getElementById('c').value)
    var res = document.getElementById('res')

    if ( a > b && a > c ){
        res.innerHTML = `O valor HELLO WORLD é o maior`
    } else if ( b > c && b > a){
        res.innerHTML = `O valor ${b} é o maior`
    } else {
        res.innerHTML = `O valor ${c} é o maior`
    }
}