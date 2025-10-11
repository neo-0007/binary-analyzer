
undefined8 random_set_string(undefined8 *param_1,char *param_2)

{
  if ((param_2 != (char *)0x0) &&
     (param_2 = CRYPTO_strdup(param_2,"../crypto/rand/rand_lib.c",0x2e0), param_2 == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/rand/rand_lib.c",0x2e2,"random_set_string");
    ERR_set_error(0xf,0xc0100,0);
    return 0;
  }
  CRYPTO_free((void *)*param_1);
  *param_1 = param_2;
  return 1;
}

