# 3 日目 - 2022/11/13

### 08:00
起床．朝食．  

ご飯を食べながらあれこれ考えた．  

思い付いたので実装してみる．  

### 10:30
なんかダメっぽい
実装が悪いのかな...

### 11:00
別な案を試した．  

具体的には，次数の最も高い頂点と最も低い頂点との次数の差が小さくなる，$k = \frac{N}{2}$ 周辺を使わないようにして，なるべく次数の差が大きくなるように調整した．  
端の方を使うといい．  

[AC](https://atcoder.jp/contests/ahc016/submissions/36462509): Absolute $673284783$ 点

$1$ ページ目に復帰したっぽい．  
直ぐに落ちた．  

### 12:00
昼食をとる．  
もぐ

### 12:30
食べた．  

ビジュアライザを眺めてみる．  

何も思いつかないので，ローカルのテストケースを 1000 個に増やした．  
焼きなましとかは全くしてない(何もわからん)ので，実行時間は未だに 30ms くらい．  

こんなの焼けるの？

### 15:00
もうこんな時間になってた

$k = 0$ の判別がうまくいってない
次数が高いグループの個数が $0$ になってしまって難しいっぽい．  
確かに...

$M < N$ のときは $0$ を使わないようにした
[AC](https://atcoder.jp/contests/ahc016/submissions/36466712): $701023130$ 点

$N$ エラー率で余分にとったりしていたので，別に $N$ で判別する必要はなかった．
シンプルに，$M < 100$ のとき $0$ を使わないようにした
[AC](https://atcoder.jp/contests/ahc016/submissions/36467402): $704922405$ 点

### 16:00
時間が溶ける溶ける...

パラメータを微調整．
得点は変わらず．  
でも多分良くはなってる．

### 17:00
何一つ進展がない．  
私の手腕では $\epsilon$ が大きいときの正答率をあげることはかなり厳しそう．  
それはいったん諦めて，$\epsilon$ が小さいときの $N$ を削る方向で考えてみたい．  

### 20:00
次数を 高い/低い の 2 種類だけでなく， 高い/中くらい/低い の 3 種に分割することを考えた．
雑な実装では伸びず...  

明日ちゃんと考えて書こうかな

(そろそろ学校の期末考査があるので結構時間がヤバい)  

あのあと $2$ 度提出したけど，スコアは全く変わらなかった．  

### 24:00

就寝．  
かなり不完全燃焼．  

順位は $31$ 位まで下がっている．  
予選は通るのか...？

いや通ったら通ったでヤバいんだけど．  
親になんて説明すればいいんだ...