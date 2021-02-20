- [EN description](#en)  
- [TR açıklama](#tr)

## File Tree/Dosya Ağacı

* /bin
  - readme.txt
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


# [EN]
## USAGE
### For Linux
&emsp;&emsp;Makefile file is written compatible with the gcc compiler. In generally, gcc compiler is installed default on Linux. So, if you are using a Linux operating system, just go to the directory of the downloaded repository;

    make  

run this command is enough.

### For Windows
&emsp;&emsp; If your computer doesn't have the gcc compiler;

> Mingw: http://www.mingw.org/  
> Mingw Install: https://osdn.net/projects/mingw/releases/  
> Mingw Documentation: http://www.mingw.org/wiki  
> Mingw How to install: https://www.youtube.com/watch?v=QqphmHIYULE 

After installing the gcc compiler without any problems, go to the same directory as your repository and run;

> mingw32-make  

## How to work ?
&emsp;&emsp; The program reads the data in the Kisiler.txt file line by line. A data in the Kisiler.txt file must be in the following format;

    "Name#Birthday#Weight"  

&emsp;&emsp;For each row it reads, a node is created in the AVL tree, an object created in the heap zone from the "Kisi" class inside the node, and a Stack that points to the heap zone. "Kisi" object holds the person data. Stack object keeps the movements of the node relative to the depth.

> 'Y' is added to the stack if it approaches the root node  
> 'A' is added to the stack if it moves away from the root node  
> 'D' is added if it remains the same distance from the root node    

There is a balancing for each node that occurs. When balancing the AVL tree in this repository, if equal values are encountered the values are added to the left of the node. However, since it is a balancing act, both children of the nodes should be checked when searching data.

# [TR]
### Linux
&emsp;&emsp;Makefile dosyası gcc derleyicisine uyumlu yazılmıştır. Linux üzerinde gcc genelde otomatik yüklü gelmektedir. Dolayısıyla Linux işletim sistemi kullanıyorsanız yalnızca indirilen deponun dizine gelerek;

    make

komutunu çalıştırmanız yeterlidir.

### Windows
&emsp;&emsp; Bilgisayarınızda gcc derleyicisi kurulu değilse;

> Mingw: http://www.mingw.org/  
> Mingw kurulum dosyası: https://osdn.net/projects/mingw/releases/  
> Mingw dökümantasyon: http://www.mingw.org/wiki  
> Mingw kurulumu: https://www.youtube.com/watch?v=QqphmHIYULE  

gcc derleyicisini sorunsuz bir şekilde kurduktan sonra konsol üzerinden indirdiğiniz deponun seviyesine gelin ve çalıştırın;

    mingw32-make

## NASIL ÇALIŞIR
&emsp;&emsp;Programa verilen Kisiler.txt'nin içerisinde bilgileri satır satır okumaya başlar. Kisiler.txt içerisinde her satırda bir kişi bilgisi ve kişi bilgisinin dizaynı şu şekilde olmalıdır;

    "İsim#Doğum-tarihi#Kilo"

&emsp;&emsp;Okuduğu her satır için AVL ağacına bir düğüm, düğümün içerisinde "Kisi" sınıfından heap bölgesinde oluşturulmuş bir nesne ve yine heap bölgesini işaret eden bir yığıt oluşturulur. "Kisi" nesnesi kişinin verilerini tutar. Yığıt nesnesi ise düğümün bulunduğu derinliğe göre hareketlerini tutar.

> Kök düğüme yaklaşırsa yığıta 'Y' eklenir  
> Kök düğümden uzaklaşırsa yığıta 'A' eklenir  
> Kök düğüme aynı uzaklıkta kalırsa 'D' eklenir  

Oluşan her düğüm için bir dengeleme söz konusudur. Bu depoda bulunan AVL ağacında dengeleme yapılırken düğüme eşit değerde gelen yeni düğümler düğümün soluna eklenir. Ancak dengeleme söz konusu olacağı için veri araması yaparken düğümlerin her iki çocuğu da kontrol edilmelidir.
