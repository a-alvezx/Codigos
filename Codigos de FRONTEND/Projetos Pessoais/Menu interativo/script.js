let open_menu = document.getElementById('btn-abrir-menu')
let menu = document.getElementById('menu')
let close_menu = document.getElementById('btn-close-menu')
let btn_menu = document.getElementById('btn-menu')
let btn_overlay = document.getElementById('btn-overlay')
let btn_info = document.getElementById('btn-info')
let info = document.getElementById('box-info')
let info_overlay = document.getElementById('btn-overlay2')

btn_info.addEventListener('click', () =>{
    info.classList.add('info')
})
info_overlay.addEventListener('click', () =>{
    info.classList.add('info')
})

menu.addEventListener('mouseover', () =>{
    menu.classList.add('on')
})
menu.addEventListener('mouseout', () =>{
    menu.classList.remove('on')
})

open_menu.addEventListener('click', () =>{
    menu.classList.add('menu-on')
})
close_menu.addEventListener('click', () =>{
    menu.classList.remove('menu-on')
})
btn_menu.addEventListener('click', () =>{
    menu.classList.remove('menu-on')
})
btn_overlay.addEventListener('click', () =>{
    menu.classList.remove('menu-on')
})
