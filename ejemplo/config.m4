
PHP_ARG_ENABLE(ejemplo, habilitar ejemplo, [ --enable-ejemplo   Habilita extension ejemplo])

if test "$PHP_EJEMPLO" = "yes"; then
  AC_DEFINE(HAVE_EJEMPLO, 1, [Whether you have Ejemplo])
  PHP_NEW_EXTENSION(ejemplo, ejemplo.c, $ext_shared)
fi
