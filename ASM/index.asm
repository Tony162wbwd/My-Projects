; ---------------------------------------------
; Programa que imprime un string en la pantalla
; ---------------------------------------------
	.model small              ; modelo de memoria

	.stack                    ; segmento del stack

	.data                     ; segmento de datos
	Cadena1 DB 'Hola Mundo. ; string a imprimir (finalizado en $)

	.code                     ; segmento del código

; ---------------------------------------------
; Inicio del programa
; ---------------------------------------------
	programa:
		; ----------------------------------------------------------------------------------------------------
		; inicia el segmento de datos
		; ----------------------------------------------------------------------------------------------------
		MOV AX, @data          ; carga en AX la dirección del segmento de datos
		MOV DS, AX             ; mueve la dirección al registro de segmento por medio de AX
		
		; ----------------------------------------------------------------------------------------------------
		; Imprime un string en pantalla
		; ----------------------------------------------------------------------------------------------------
		MOV DX, offset Cadena1 ; mueve a DX la dirección del string a imprimir
		MOV AH, 9              ; AH = código para indicar al MS DOS que imprima en la pantalla, el string en DS:DX
		INT 21h                ; llamada al MS DOS para ejecutar la función (en este caso especificada en AH)
		
		; ----------------------------------------------------------------------------------------------------
		; Finaliza el programa
		; ----------------------------------------------------------------------------------------------------
		INT 20h                ; llamada al MS DOS para finalizar el programa

	end programa