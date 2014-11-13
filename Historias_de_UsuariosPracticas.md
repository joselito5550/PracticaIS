#### 1 | INSERTAR

**Historia**: Insertar.  
**Como**: Administrativo.  
**Quiero**: Poder insertar nuevos contactos a la agenda.  
**Para**: Mantenerme en contacto con los clientes.  
**Dependencias:** Ordenar.  
**Prioridad: **1.  
**Criterios de aceptación:  **
- Tras cada insertado, se ordenadará el fichero.
- Si buscamos el contacto insertado debemos encontrarlo.
- Debe permitir insertar todos los datos que aparecen en la tabla X.
- No se podrá dar de alta a dos usuarios con los mismos campos.

#### 2 | BUSCAR

**Historia:** Buscar.  
**Como: **Administrativo.  
**Quiero:** Poder buscar clientes por apellido.  
**Para: **Poder encontrarlos mas facilmente.  
**Dependencias: **Insertar y ordenar.  
**Prioridad: **2.  
**Criterios de aceptación:**  
- Siempre se realizará la busqueda por apellido.  
- Se mostrarán todos los campos por pantalla.  
- Si hay dos personas con el mismo apellido se muestran los dos.  

#### 3 | MODIFICAR

**Historia:** Modificar.  
**Como:** Administrativo.  
**Quiero:** Poder modificar los datos de los contactos.  
**Para:** tener actualizada la agenda.  
**Dependencias:** Insertar , ordenar y buscar.  
**Prioridad:** 5.  
**Criterios de aceptación:**  
- Ningún campo obligatorio podrá estar vacío.  
- Al modificar un contacto, este aparecerá con la nueva información. al instante.
- Tras la modificacion, el fichero seguira ordenado.
- Se podrá modificar cualquier campo del contacto.

#### 4 | BORRAR

**Historia:** Borrar.  
**Como:** Administrativo.  
**Quiero: **Poder borrar contactos.  
**Para: **Eliminar contactos innecesarios de la agenda.  
**Dependencias:** Insertar y buscar.  
**Prioridad: **6.  
**Criterios de aceptación:**  
- El contacto borrado no aparecerá en el fichero.  
- Al mostrar por pantalla los contactos, este no deberá de aparecer.

#### 5 | COPIAS DE SEGURIDAD

**Historia:** Copias de seguridad.  
**Como:**Administrativo.  
**Quiero:** Poder realizar copias de seguridad.  
**Para:** No perder informacion.  
**Dependencias: **Insertar.  
**Prioridad:**3.  
**Criterios de aceptación:**  
- Se hará una copia de todo el fichero en “.txt”.  
- Al restaurarla deberán de estar exactamente los mismos contactos con los mismos datos.  

#### 6 | RESTAURAR COPIAS DE SEGURIDAD

//depende de "Copias de seguridad"  

**Historia:** Restaurar copias de seguridad.  
**Como: **Administrativo.  
**Quiero:** Poder restaurar copias realizadas.  
**Para:** No perder nunca la agenda.  
**Dependencias:** Copias de seguridad.  
**Prioridad:**4.  
**Criterios de aceptación:**  
- Deberán de aparecer solamente los contactos que esten en la copia de seguridad.

#### 7 | FAVORITO

**Historia:** Favorito.  
**Como:** Administrativo.  
**Quiero:** Marcar o desmarcar cualquier contacto como favorito o normal.  
**Para: **Poder buscarlo más facilmente y distingir el contacto del resto.  
**Dependencias:** Insertar y buscar.  
**Prioridad:** 9.  
**Criterios de aceptación:  **
- Debera de aparecer un 1 si el contacto esta asignado como favorito y 0 si no.
- Al insertar un nuevo contacto podré marcarlo como favorito o no.(Es decir será un dato más.)

#### 8 | IMPRIMIR FAVORITO

//depende de "Favorito"  

**Historia:** Imprimir favoritos.  
**Como:** Administrativo.  
**Quiero:** Imprimir solamente los usuarios que sean favoritos.  
**Para:** Poder tener un acceso más rápido a ciertos contactos.  
**Dependencias:** Insertar y buscar.  
**Prioridad: **10.  
**Criterios de aceptación: **
- Solo apareceran los contactos que son favoritos .
- Si tenemos varios contactos favoritos los imprimimos todos.
