
UI_METHOD * UI_create_method(char *name)

{
  int iVar1;
  UI_METHOD *obj;
  char *ptr;
  
  obj = (UI_METHOD *)CRYPTO_zalloc(0x58,"../crypto/ui/ui_lib.c",0x256);
  if (obj != (UI_METHOD *)0x0) {
    ptr = CRYPTO_strdup(name,"../crypto/ui/ui_lib.c",599);
    *(char **)obj = ptr;
    if (ptr != (char *)0x0) {
      iVar1 = CRYPTO_new_ex_data(0xe,obj,(CRYPTO_EX_DATA *)(obj + 0x48));
      if (iVar1 != 0) {
        return obj;
      }
      ptr = *(char **)obj;
    }
    CRYPTO_free(ptr);
  }
  CRYPTO_free(obj);
  ERR_new();
  ERR_set_debug("../crypto/ui/ui_lib.c",0x25d,"UI_create_method");
  ERR_set_error(0x28,0xc0100,0);
  return (UI_METHOD *)0x0;
}

