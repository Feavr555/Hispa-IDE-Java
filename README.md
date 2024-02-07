# Hispa-IDE-Java

Hispa IDE Java

Es un IDE de gestión de archivos y paquetes java, junto con un Makefile para poder compilar y ejecutar java sin necesidad de tener Eclipse en segundo plano. Para usuarios, por ejemplo, de Vim y NeoVim.

Instrucciones de uso (una vez configurado, vease bin de más abajo):
1. En la carpeta donde desea iniciar un nuevo proyecto escriba, sin comillas:
"proyecto nuevo [nombre del proyecto]"
Sin corchetes, y todo junto el nombre.
2. Entre a la carpeta, desde la terminal todo, e ingrese:
"package [nombre de paquete] [nombre del archivo .java]"
Tome en cuenta de respetar la sintaxis de paquetes en minuscula y archivos con inicial mayuscula, no inserte el .java.
3. Repita el anterior paso todas la veces que necesite.
4. Puedes insertar varios archivos por paquete, puedes insertar en el paquete principal, 'main'. Todos los paquetes están en la carpeta 'src'.

5. El 'make':
make --> compila y ejecuta su programa
make jar --> exporta su programa a la carpera 'export', como un .jar.

Compilacion:
gcc mingw 64bits (mysys64)

Pon 'make', y se compilara.

bin:
    Pon la carpeta bin en el path de su pc.

1. click derecho en este equipo
2. propiedades
3. configueracion avanzada del sistema
4. variables del entorno
5. en 'variables del usuario para...' doble click en path
6. agrega la direccion de la carpeta bin al path, con 'nuevo'

¡Que difrute del IDE y Makefile para java!
