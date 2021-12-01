# Nematic液晶相転移シミュレーション



~~~gnuplot {cmd=true hide=true output="html"}
set terminal svg
set title "simulation " font ",20"
set key left box
set samples 50
set style data points


set pm3d map
set pm3d corners2color c1
splot "c" with pm3d
splot "after" with pm3d
~~~