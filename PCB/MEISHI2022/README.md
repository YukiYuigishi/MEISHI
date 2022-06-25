# MEISHI v1.0
# 目次
1. 回路図等
2. 書き込み方法
3. パーツリスト
4. その他

## 回路図
![schema](https://user-images.githubusercontent.com/64316110/175349371-24d166ac-e4e9-4cea-ad8f-36dcb3871eca.png)
![pcb](https://user-images.githubusercontent.com/64316110/175352096-fd380c30-9ea0-4956-81cd-58b535027415.png)

## 書き込み方法
QRコードを右下において、一番右下にある 5V G RX0 TX0のピンが書き込み用ピンです。
秋月電子通商の[FT234X 超小型USBシリアル変換モジュール](https://akizukidenshi.com/catalog/g/gM-08461/)をそのまま刺して使用できるように設計されています。
![how to write](https://user-images.githubusercontent.com/64316110/175750739-ce044c1a-340d-4494-a012-f7e1f3c8cc12.png)
書き込み方法は、[ht-deko.comさんの記事](https://ht-deko.com/arduino/esp-wroom-32.html#04_02)を参考にしてください。
所感ですが

1. 書き込み開始
2. IO0 を押す
3. ENを押す
4. 書き込み失敗
5. ENを離す
6. 書き込み再試行

というふうにすれば大体書き込めます。
## パーツリスト
基本的に、秋月電子通商様で取り扱っているものを採用しています。
Necessary   
O   --必須の部品  
1   --AC100Vをスイッチングするために必要なパーツ  
2   --圧電ブザーを実装するために必要なパーツ  
3   --モータードライバを実装するためにひつようなパーツ  

|Value|Qty|Reference(s)|Necessary|Link|
|----|---|---|---|--|
|2012 10u|2|C1, C3|O|
|2012 22u|1|C2|O|
|2012 0.1u|3|C4, C5, C6|O|
|D|1|D2|1|https://akizukidenshi.com/catalog/g/gI-06014/|
|TB67H450FNG EL|2|IC1, IC2||https://akizukidenshi.com/catalog/g/gI-14967/|
|JST_VH|1|J1, J3||
|USB_B_Micro|1|J2||https://www.marutsu.co.jp/pc/i/838014/|
|Pin Header 1x4|1|J4|O|
|IO0|1|J5||
|IO2|1|J6||
|IO1|1|J7||
|XA 1x3|1|J8||
|XA 1x2|1|J10| J11||
|942H-2C-5DS|1|K1|1|https://akizukidenshi.com/catalog/g/gP-01214/
|Speaker_Ultrasound|1|LS1||https://akizukidenshi.com/catalog/g/gP-04118/
|1608 1k|5|R1, R6, R7, R8, R9||
|R|1|R3||
|1608 110|1|R4|1|
|1608 4.7k|2|R5, R13|O|
|3225 0.1|2|R10, R11||
|SW_MEC_5E|2|SW1, SW2|O|https://akizukidenshi.com/catalog/g/gP-06185/
|AZ1117-3.3|1|U1|O|https://akizukidenshi.com/catalog/g/gI-16155/
|TLP172AM|1|U2||https://akizukidenshi.com/download/ds/toshiba/TLP172AM_datasheet_ja_20191028.pdf
|ESP32-WROOM-32D|1|U3|O|https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32d_esp32-wroom-32u_datasheet_en.pdf




## その他
MEISHI v1.0用のヘッダーファイルは[ここ]()に置いてあります。  
  
MEISHI v1.0の製作、使用によって起きたいかなる損害について、唯岸 雪は一切の責任を負いかねます。  
何か質問・疑問がありましたら、[@yuigishidev](https://twitter.com/yuigishidev)までおねがいします。  
