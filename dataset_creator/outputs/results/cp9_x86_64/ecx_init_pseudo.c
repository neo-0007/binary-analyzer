
undefined8 ecx_init(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (*(long *)(param_2 + 0x58) == *param_1)) &&
       (iVar1 = ossl_ecx_key_up_ref(param_2), iVar1 != 0)) {
      ossl_ecx_key_free(param_1[1]);
      param_1[1] = param_2;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/exchange/ecx_exch.c",0x55,"ecx_init");
    ERR_set_error(0x39,0xc0103,0);
    uVar2 = 0;
  }
  return uVar2;
}

