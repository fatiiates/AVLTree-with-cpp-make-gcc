## Hiyerarşik Düzen

* /bin
  - readme.txt(Hiyerarşi için oluşturuldu.)
  - Test.exe
* /doc
  - readme.txt
  - Kisiler.txt
* /include
  * /AVL
    - AVL.hpp
    - Node.hpp
  * /Stack
    - Stack.hpp
    - Node.hpp
  - Kisi.hpp
* /lib
  - readme.txt
  - AVL.o
  - AVLNode.o
  - Kisi.o
  - Stack.o
  - StackNode.o
* /src
  * /AVL
    - AVL.cpp
    - Node.cpp
  * /Stack
    - Node.cpp
    - Stack.cpp
  - Kisi.cpp
  - Test.cpp
* makefile

## KULLANIM
### Linux
&emsp;&emsp;Makefile dosyası gcc derleyicisine uyumlu yazılmıştır. Linux üzerinde gcc genelde otomatik yüklü gelmektedir. Dolayısıyla Linux işletim sistemi kullanıyorsanız yalnızca indirilen deponun dizine gelerek;
> make

komutunu çalıştırmanız yeterlidir.

### Windows
&emsp;&emsp; Bilgisayarınızda gcc derleyicisi kurulu değilse;
> Mingw: http://www.mingw.org/  
> Mingw kurulum dosyası: https://osdn.net/projects/mingw/releases/  
> Mingw dökümantasyon: http://www.mingw.org/wiki  
> Mingw kurulumu: https://www.youtube.com/watch?v=QqphmHIYULE  

gcc derleyicisini sorunsuz bir şekilde kurduktan sonra konsol üzerinden indirdiğiniz deponun seviyesine gelin ve çalıştırın;

> mingw32-make

## NASIL ÇALIŞIR
&emsp;&emsp;Programa verilen Kisiler.txt'nin içerisinde bilgileri satır satır okumaya başlar. Kisiler.txt içerisinde her satırda bir kişi bilgisi ve kişi bilgisinin dizaynı şu şekilde olmalıdır;
> "İsim#Doğum-tarihi#Kilo"

&emsp;&emsp;Okuduğu her satır için AVL ağacına bir düğüm, düğümün içerisinde "Kisi" sınıfından heap bölgesinde oluşturulmuş bir nesne ve yine heap bölgesini işaret eden bir yığıt oluşturulur. "Kisi" nesnesi kişinin verilerini tutar. Yığıt nesnesi ise düğümün bulunduğu derinliğe göre hareketlerini tutar.
> Kök düğüme yaklaşırsa yığıta 'Y' eklenir  
> Kök düğümden uzaklaşırsa yığıta 'A' eklenir  
> Kök düğüme aynı uzaklıkta kalırsa 'D' eklenir  

Oluşan her düğüm için bir dengeleme söz konusudur. Bu depoda dengeleme yapılırken düğüme eşit değerde gelen yeni düğümler düğümün soluna eklenir. Ancak dengeleme söz konusu olacağı için veri araması yaparken düğümlerin her iki çocuğu da kontrol edilmelidir.
