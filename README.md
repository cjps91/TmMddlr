# TIMEMEDDLER

**TimeMeddler** es un proyecto cuya finalidad es desarrollar una sencilla herramienta para
controlar el tiempo de trabajo, descanso y procrastinación.
Se definen 3 estados posibles:

**Trabajo:** El usuario está desarrollando una actividad productiva relacionada con su
profesión.

**Descanso:** El usuario no desarrolla actividad alguna.

**Procrastinación:** El usuario desarrolla actividades no productivas en horario que se
supone de trabajo.

Dentro de estos estados, podrían distinguirse multitud de actividades, y habría que
considerar diferenciarlas.

La herramienta recopilará esos datos, pero bajo ningún concepto saldrán de su equipo ni
serán empleados por empresas externas. La privacidad es una prioridad.

Los datos recopilados podrán usarse para analizar la productividad, el descanso y la
felicidad del usuario, en función de una serie de métricas que se definirán en un estudio
teórico previo.

La interfaz debe ser minimalista y no debe verse salvo que sea necesario (Nada de anclar
la app en ninguna barra de tareas ni nada por el estilo).
La App debe consumir los mínimos recursos posibles (CPU, RAM, etc...) y no debe
requerir funcionar en segundo plano.

Los datos de la aplicación deben poder exportarse para poder usarse en otras apps.
La aplicación se desarrollará en varias fases:

**1ª versión:** Se desarrollará la interfaz básica, sólo se registrará un día, y sólo se medirá la
proporción de los 3 estados posibles.

**2ª versión:** Se distinguirá entre diferentes actividades de cada fase. Podrán planificarse
aplicaciones con antelación.

**3ª versión:** La aplicación guardará todos los días en una estructura de calendario. La
aplicación analizará los datos de todos los días para poder ofrecer resultados históricos y
poder realizar mejores planificaciones.

**4ª versión:** La aplicación empezará a tener en cuenta las emociones del usuario,
calificando este cada tarea por como le hagan sentir y el nivel de cansancio al acabar la
tarea. Basándose en esos datos, recomendará descanso o procrastinación al usuario.
También podrá ajustarse a otros criterios como el uso de pantallas para recomendar al
usuario descansar.

La aplicación se desarrollará en un lenguaje Open Source: Swift. También podrán usarse
otros lenguajes (C++, Python, etc..) si fuera necesario. La propuesta es usar Swift con
XCode para reivindicar el carácter Open Source del lenguaje, pero puesto que todavía no
es del todo multiplataforma, podría pensarse en hacer una aplicación en 2 lenguajes
diferentes si el equipo de trabajo puede asumirlo.
