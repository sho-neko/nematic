# Nematic液晶相転移シミュレーション



~~~gnuplot {cmd=true output="html"}
set terminal svg
set title "simulation " font ",20"


set pm3d map
set pm3d corners2color c1
set cbrange[0:1]
set palette defined(0"#ff0000",1"#ff8000",2"#ffff00",3"#80ff00",4"#00ff00",5"#00ff80",6"#00ffff",7"#0080ff",8"#0000ff",9"#8000ff",10"#ff00ff",11"#ff0080",12"#ff0000")
splot "c" with pm3d
splot "after" with pm3d
~~~