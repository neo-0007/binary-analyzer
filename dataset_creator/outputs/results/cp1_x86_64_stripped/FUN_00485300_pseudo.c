
undefined4
FUN_00485300(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5,
            ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_0041cdd0(param_1,"mode");
  if (lVar2 == 0) {
LAB_0048534b:
    lVar2 = FUN_0041cdd0(param_1,&DAT_007ce335);
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)param_3 & 1);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x37;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"custom-iv");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)(param_3 >> 1) & 1);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x3d;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"cts");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)(param_3 >> 2) & 1);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x43;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"tls-multi");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)(param_3 >> 3) & 1);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x49;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"has-randkey");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d0b0(lVar2,(uint)(param_3 >> 4) & 1);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x4f;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"keylen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,param_4 >> 3);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x54;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"blocksize");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,param_5 >> 3);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x59;
        goto LAB_004854f8;
      }
    }
    lVar2 = FUN_0041cdd0(param_1,"ivlen");
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_0041d9c0(lVar2,param_6 >> 3);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x5e;
        goto LAB_004854f8;
      }
    }
    uVar4 = 1;
  }
  else {
    iVar1 = thunk_FUN_0041d380(lVar2,param_2);
    if (iVar1 != 0) goto LAB_0048534b;
    FUN_0051f420();
    uVar3 = 0x31;
LAB_004854f8:
    uVar4 = 0;
    FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",uVar3,
                 "ossl_cipher_generic_get_params");
    FUN_0051f8f0(0x39,0x68,0);
  }
  return uVar4;
}

