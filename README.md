# IOT_wechat-control
## IOT idea

----

## 1.Preparing

- Arduino  Singlechip . I recommend you to use Arduino UNO.It is easy for new user.

  [**more infomation aboue arduino**](http://www.arduino.com/)

  ![img](https://gss1.bdstatic.com/9vo3dSag_xI4khGkpoWK1HF6hhy/baike/s%3D220/sign=33aef4b99b8fa0ec7bc7630f1696594a/b7003af33a87e9506454c5e61a385343faf2b4fc.jpg)

- ESP8266 wifi module.  It is a Low power waste  as well as  high integration Wi-Fi chip .I recommend to use esp8266-01 version.

  **[more infomation about esp8266](http://www.espressif.com)**     

![img](https://ss0.baidu.com/73x1bjeh1BF3odCf/it/u=4131652540,3955675566&fm=85&s=9286D30508A4761B9F3104DE030050A1)



-  A server that can be accessed .In this project ,I used a server SAE which is a quick application of [sinaclound](http://www.sinacloud.com/).

  ![img](http://www.sinacloud.com/static/common/image/sinacloud_logo.png)

---

## 2.Connect ESP8266 with the Arduino Singlechip 

![img](http://img.blog.csdn.net/20150725182903573?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQv/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/Center)

PIN Explain And connection instruction：

> - **TX** (UART TX)
> - **RX** (UART RX)
> - **CH_PD** (chip power down, should be pulled highto start the chip)
> - **RST** (reset)
> - **GPIO0** and **GPIO2** (generalpurpose input/output pins)
> - **VCC** (power supply 3.3V, [max. ~300mA](http://wiki.iteadstudio.com/ESP8266_Serial_WIFI_Module) )

> | ESP8266-01 | Arduino |
> | :--------: | :-----: |
> |    UTXD    |   RX    |
> |    URXD    |   TX    |
> |    3.3V    |  3.3V   |
> |   CH_PD    |  3.3V   |
> |    GND     |   GND   |
>
> 

---

## 3.Upload program into arduino Singlechip 

- First , download the [Arduino IDE](https://www.arduino.cc/en/Main/Software)

  ![img](https://www.arduino.cc/en/uploads/Main/Create-software1.svg)

   

- use arduino ide to open the file "demo.ino" which under the folder "arduino + esp8266" .

- modify the code accoding to the code explain,such as the wifi name and password as well as the server ip or hostname.

  ![](https://steemitimages.com/DQmWyvgdiYjniiiJ6dARAfZ4cw3mLFQSyMKr6ukAbDDTma4/%E5%9B%BE%E7%89%87.png)

- Use usb to connect arduino with the computer and click upload button

  ***(remember disconnect the rx and tx with the esp8266 while uploading program)***

  ![](https://steemitimages.com/DQmTKQuAjopASVBcXwrgh5fedzLR4rZ71jvdCXkvjhggZkL/%E5%9B%BE%E7%89%87.png)

---

## 4. Configure the server and database

- Upload  **api.php** and **index.php** into server.I reccommend to place this two file in the root of the server.

   （**note the location of the php file , it will affect the code in arduino**）

- set up a new table in database and name it app_smeat8266.After that ,import the file app_smart8266.sql.

---

## 5. Configure the Wechat public number

- visit the [wechat website](https://mp.weixin.qq.com/debug/cgi-bin/sandbox?t=sandbox/login) and open the wechat application to scan the QR code so you can login in.

  ![](https://steemitimages.com/DQmb9nC4RRVvk5waw3847UUmfN5v2YBzhZxjARQZGsuxNrM/%E5%9B%BE%E7%89%87.png)

- input the url of the file index.php and the token you set in the code.

  ![like this](https://steemitimages.com/DQmbJqqyau79eRke67FofcoAHL6T7MuMjtqYrXJnubtdheU/%E5%9B%BE%E7%89%87.png)

---

## 6. Testing

- connect esp8266 wifi module with the Arduino mimichip as the step2 above


- use wechat application scan the QR code and  subscribe it

  ![](https://steemitimages.com/DQmXmbjvjkaBJ8ZVtkD1VygYZfWnzX5ABYL6FZ1psfnq721/%E5%9B%BE%E7%89%87.png)

- send order to the testing number which you set up in the file.php

  ![IMG_1122.PNG](https://steemitimages.com/DQmT9Yuxj8GQGN3xsSyPWNYzE3VY77PLd6mHxLUYq1Qmeih/IMG_1122.PNG)



---

## 7. Extend function

- add more sensors and Motor module instead of the LED
- add new function of using voice instea of message order
- develop web so you can do it visualizatly



---

## 8. Display more about my achievement

![IMG_1015.PNG](https://steemitimages.com/DQmYBkBLBPaWHEqfNc5CU6r8DBTUmEzQfqeveg6w9S2889B/IMG_1015.PNG)![IMG_0888.PNG](https://steemitimages.com/DQmWM4D7pE2MPUGYq4EBuR148h8YdPHsAwJcvC65XiadfQ9/IMG_0888.PNG)![IMG_0968.PNG](https://steemitimages.com/DQmU4Gp3rQWTTX7CHMEFv6znRk3mK7UdLkd2cyS86mzPGK1/IMG_0968.PNG)![IMG_1102.PNG](https://steemitimages.com/DQmWw3F4w9bCRx6ZMP7uFBJVtxutRwqxQJXUb4hN2SWvLoC/IMG_1102.PNG)





---

# The project was done in Chinese , so you may be difficult to understand  Comprehensively. If you have any question ,contact me and I  will appreciate it   .Thanks.
