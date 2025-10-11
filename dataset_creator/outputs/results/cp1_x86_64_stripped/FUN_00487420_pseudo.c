
int FUN_00487420(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0xf - *(long *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x97;
      goto LAB_00487661;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0xa0;
      goto LAB_00487661;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"iv");
  if (lVar2 == 0) {
LAB_004874d3:
    lVar2 = FUN_0041cdd0(param_2,"updated-iv");
    if (lVar2 != 0) {
      if (*(ulong *)(lVar2 + 0x18) < 0xfU - *(long *)(param_1 + 8)) {
        FUN_0051f420();
        uVar3 = 0xb5;
        goto LAB_004875e1;
      }
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x30);
      if (iVar1 == 0) {
        iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar3 = 0xba;
          goto LAB_00487661;
        }
      }
    }
    lVar2 = FUN_0041cdd0(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0xc1;
        goto LAB_00487661;
      }
    }
    lVar2 = FUN_0041cdd0(param_2,"tlsaadpad");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,*(undefined8 *)(param_1 + 0x28));
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 199;
LAB_00487661:
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                     "ossl_ccm_get_ctx_params");
        FUN_0051f8f0(0x39,0x68,0);
        return 0;
      }
    }
    iVar1 = 1;
    lVar2 = FUN_0041cdd0(param_2,"tag");
    if (lVar2 != 0) {
      if ((*param_1 & 9) == 9) {
        if (*(int *)(lVar2 + 8) == 5) {
          iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (iVar1 != 0) {
            *param_1 = *param_1 & 0xe3;
            iVar1 = 1;
          }
        }
        else {
          FUN_0051f420();
          iVar1 = 0;
          FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0xd2,
                       "ossl_ccm_get_ctx_params");
          FUN_0051f8f0(0x39,0x68,0);
        }
      }
      else {
        FUN_0051f420();
        iVar1 = 0;
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0xce,
                     "ossl_ccm_get_ctx_params");
        FUN_0051f8f0(0x39,0x77,0);
      }
    }
  }
  else {
    if (0xfU - *(long *)(param_1 + 8) <= *(ulong *)(lVar2 + 0x18)) {
      iVar1 = FUN_0041e220(lVar2,param_1 + 0x30);
      if (iVar1 == 0) {
        iVar1 = FUN_0041e3e0(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18));
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar3 = 0xad;
          goto LAB_00487661;
        }
      }
      goto LAB_004874d3;
    }
    FUN_0051f420();
    uVar3 = 0xa8;
LAB_004875e1:
    iVar1 = 0;
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                 "ossl_ccm_get_ctx_params");
    FUN_0051f8f0(0x39,0x6d,0);
  }
  return iVar1;
}

