
undefined8 * infopair_copy(undefined8 *param_1)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"../crypto/provider_core.c",0x100);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)*param_1 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup((char *)*param_1,"../crypto/provider_core.c",0x105);
    *ptr = pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_0041ddcc;
  }
  if ((char *)param_1[1] == (char *)0x0) {
    return ptr;
  }
  pcVar1 = CRYPTO_strdup((char *)param_1[1],"../crypto/provider_core.c",0x10a);
  ptr[1] = pcVar1;
  if (pcVar1 != (char *)0x0) {
    return ptr;
  }
  pcVar1 = (char *)*ptr;
LAB_0041ddcc:
  CRYPTO_free(pcVar1);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

