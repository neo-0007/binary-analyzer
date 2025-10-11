
bool validate_ecx_derive_constprop_0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecx_meth.c",0x2dc,"validate_ecx_derive");
    ERR_set_error(0x10,0x8c,0);
    return false;
  }
  lVar1 = evp_pkey_get_legacy();
  lVar2 = evp_pkey_get_legacy(*(undefined8 *)(param_1 + 0x90));
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x2e6,"validate_ecx_derive");
      ERR_set_error(0x10,0x85,0);
    }
    else {
      *param_2 = *(long *)(lVar1 + 0x50);
      *param_3 = lVar2 + 0x11;
    }
    return lVar2 != 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ecx_meth.c",0x2e2,"validate_ecx_derive");
  ERR_set_error(0x10,0x7b,0);
  return false;
}

