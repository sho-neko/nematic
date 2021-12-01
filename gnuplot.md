# gnuplotで描画してみます

とりあえずチュートリアルに載っている簡単なグラフから

~~~gnuplot {cmd=true output="html"}
set terminal svg
set title "Simple Plots" font ",20"
set key left box
set samples 50
set style data points


load "gp.gp"
~~~