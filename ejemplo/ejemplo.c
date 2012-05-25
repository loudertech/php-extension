
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ejemplo.h"

/** Registrar todas las funciones */
static function_entry ejemplo_functions[] = {
	PHP_FE(suma, NULL)
	{NULL, NULL, NULL}
};

/** Module Entry de la extension */
zend_module_entry ejemplo_module_entry = {
	STANDARD_MODULE_HEADER,
	PHP_EJEMPLO_EXTNAME, // Nombre de la extension
	ejemplo_functions, //Funciones de la extension
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PHP_EJEMPLO_VERSION, //Version de la extension
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_EJEMPLO
ZEND_GET_MODULE(ejemplo)
#endif


/** funciones */

PHP_FUNCTION(suma){
    RETURN_STRING("Hello World", 1);
}
