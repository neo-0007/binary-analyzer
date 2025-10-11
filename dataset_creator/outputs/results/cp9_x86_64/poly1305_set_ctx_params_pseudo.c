
undefined8 poly1305_set_ctx_params(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  lVar1 = OSSL_PARAM_locate_const(param_2,"key");
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) == 0x20) {
      Poly1305_Init(param_1 + 8,*(undefined8 *)(lVar1 + 0x10));
      return 1;
    }
    ERR_new();
    uVar2 = 0;
    ERR_set_debug("../providers/implementations/macs/poly1305_prov.c",0x54,"poly1305_setkey");
    ERR_set_error(0x39,0x69,0);
  }
  return uVar2;
}

