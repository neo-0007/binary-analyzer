
undefined8 * new_file_ctx(undefined4 param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x48,"../providers/implementations/storemgmt/file_store.c",0x81);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_2,"../providers/implementations/storemgmt/file_store.c",0x82);
      puVar1[1] = pcVar2;
      if (pcVar2 == (char *)0x0) {
        free_file_ctx_part_0(puVar1);
        return (undefined8 *)0x0;
      }
    }
    *(undefined4 *)(puVar1 + 2) = param_1;
    *puVar1 = param_3;
  }
  return puVar1;
}

