/*
http://tibyte.kr/253
*/


window.onload = init;

var canvas;
var ctx;

function init()
{
   canvas = document.getElementById("canvas");
   ctx = canvas.getContext("2d");

   drawCircle(ctx, 100, 120, 119);
   drawCircle(ctx, 50, 200, 119);
   drawCircle(ctx, 25, 190, 170);
   drawCircle(ctx, 75, 120, 189);

}

function drawCircle(ctx, r, cx, cy)
{
    var x, y;
    var p;

    x = 0;
    y = r;
    p = 1 - r;

    ctx.fillStyle = "#FF0000";

    ctx.fillRect(x+cx, y+cy, 1, 1);
    ctx.fillRect(x+cx, -y+cy, 1, 1);
    ctx.fillRect(y+cx, x+cy, 1, 1);
    ctx.fillRect(-y+cx, x+cy, 1, 1);

    ++x;
    while(x < y) {
        if(p < 0) {
            p += x+x+1;
        }
        else {
            p += x+x-y-y+1;
            --y;
        }

        ctx.fillRect(x+cx , y+cy, 1, 1);
        ctx.fillRect(x+cx , -y+cy , 1, 1);
        ctx.fillRect(-x+cx, y+cy , 1, 1);
        ctx.fillRect(-x+cx, -y+cy, 1, 1);
        ctx.fillRect(y+cx , x+cy , 1, 1);
        ctx.fillRect(y+cx , -x+cy, 1, 1);
        ctx.fillRect(-y+cx, x+cy , 1, 1);
        ctx.fillRect(-y+cx, -x+cy, 1, 1);

        ++x;
    }
}
