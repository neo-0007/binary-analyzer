
undefined4 ossl_ecx_public_from_private(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 2) {
    iVar2 = ossl_ed25519_public_from_private(*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]);
    if (iVar2 == 0) {
      ERR_new();
      uVar3 = 0x25;
LAB_005043d8:
      ERR_set_debug("../crypto/ec/ecx_backend.c",uVar3,"ossl_ecx_public_from_private");
      ERR_set_error(0x10,0xa6,0);
      return 0;
    }
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      ossl_x25519_public_from_private((long)param_1 + 0x11,param_1[10]);
      return 1;
    }
    ossl_x448_public_from_private((long)param_1 + 0x11,param_1[10]);
  }
  else if ((uVar1 == 3) &&
          (iVar2 = ossl_ed448_public_from_private
                             (*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]), iVar2 == 0)) {
    ERR_new();
    uVar3 = 0x2f;
    goto LAB_005043d8;
  }
  return 1;
}

