var vp = document.getElementById("villaplatzi");
var papel = vp.getContext("2d");
var mapa = "tile.png";

var imagen = new Image();
imagen.src = mapa;
imagen.addEventListener("load", dibujar);

function dibujar()
{
  papel.drawImage(imagen, 0, 0);
}
