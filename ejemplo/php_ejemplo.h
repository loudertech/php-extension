
#ifndef PHP_EJEMPLO_H
#define PHP_EJEMPLO_H 1

#define PHP_EJEMPLO_VERSION "1.0"
#define PHP_EJEMPLO_EXTNAME "ejemplo"

PHP_FUNCTION(suma);

extern zend_module_entry ejemplo_module_entry;

#define phpext_hello_ptr &ejemplo_module_entry

#endif