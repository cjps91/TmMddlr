# TIMEMEDDLER

**TimeMeddler** es una sencilla herramienta para controlar el tiempo de trabajo, descanso y procrastinación.
Se definen 3 estados posibles:

**Trabajo:** El usuario está desarrollando una actividad productiva relacionada con su profesión.

**Descanso:** El usuario no desarrolla actividad alguna.

**Procrastinación:** El usuario desarrolla actividades no productivas en horario que se supone de trabajo.

La herramienta recopilará esos datos, pero bajo ningún concepto saldrán de su equipo ni serán empleados por empresas externas. La privacidad es una prioridad.

Los datos recopilados podrán usarse para analizar la productividad, el descanso y la felicidad del usuario, en función de una serie de métricas.

Los datos de la aplicación se exportan en varios formatos entre ellos **CSV** para poder usarse en otras aplicaciones como ***MS Excel*** o ***LibreOffice Math***.

**ACCESIBILIDAD:**

La interfaz gráfica de TimeMeddler es vistosa y minimalista, adaptada para los casos de daltonismo y otras deficiencias visuales.
En una próxima versión tendrá nueva funcionalidad para personas con deficiencias visuales severas gracias a la incorporación de sonidos guía.

**FUNCIONES EN DESARROLLO:**

Se preveen las siguientes funcionalidades para la aplicación:

 - Podrán planificarse actividades con antelación, teniendo un tiempo personalizable por el usuario.
 
 - La aplicación analizará los datos de todos los días para poder ofrecer resultados históricos y
poder realizar mejores planificaciones.

 - Basándose en el analisis de esos datos, recomendará descanso o procrastinación al usuario.
También podrá ajustarse a otros criterios como el uso de pantallas para recomendar al
usuario descansar.

**INSTRUCCIONES DE INSTALACIÓN**

Para Sistemas Operativos Windows, descomprimir el archivo del release correspondiente en la carpeta requerida y ejecutar TM.exe

Para sistemas linux lanzar un terminal en la carpeta donde se extrajo y ejecutar la instruccion:

~~~

unzip ./release_1.0_linux.zip
sudo ./release_1.0_linux/TM

~~~

**INTROUCCIONES DE COMPILACION**

Se han utilizado las librerias gráficas wxWidgets y el compilador gcc, se recomienda seguir la guía completa de compilación recogida en la dirección de nuestro blog.

Para más información no duden en visitar http://thetimemeddler.wordpress.com
