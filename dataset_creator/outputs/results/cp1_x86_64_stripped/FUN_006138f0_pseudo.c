
undefined8 FUN_006138f0(long *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((param_2 == 0 || param_3 == 0) || (param_1 == (long *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_sxnet.c",0x9c,"SXNET_add_id_INTEGER");
    FUN_0051f8f0(0x22,0x6b,0);
    return 0;
  }
  if (param_4 == -1) {
    param_4 = thunk_FUN_007129d0(param_3);
    if (0x40 < param_4) goto LAB_006139bd;
  }
  else if (0x40 < param_4) {
LAB_006139bd:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_sxnet.c",0xa2,"SXNET_add_id_INTEGER");
    FUN_0051f8f0(0x22,0x84,0);
    return 0;
  }
  plVar5 = (long *)*param_1;
  plVar3 = plVar5;
  if (plVar5 == (long *)0x0) {
    plVar3 = (long *)FUN_00613840();
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0) {
      iVar1 = thunk_FUN_0049f880(*plVar3,0);
      if (iVar1 != 0) goto LAB_00613946;
      plVar4 = (long *)0x0;
      plVar5 = plVar3;
    }
  }
  else {
LAB_00613946:
    lVar2 = FUN_00613880(plVar3,param_2);
    if (lVar2 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_sxnet.c",0xad,"SXNET_add_id_INTEGER");
      FUN_0051f8f0(0x22,0x85,0);
      lVar2 = *param_1;
      goto joined_r0x00613aac;
    }
    plVar4 = (long *)FUN_006137a0();
    plVar5 = plVar3;
    if (plVar4 != (long *)0x0) {
      if (param_4 == -1) {
        param_4 = thunk_FUN_007129d0(param_3);
      }
      iVar1 = thunk_FUN_004a1fa0(plVar4[1],param_3,param_4);
      if ((iVar1 != 0) && (iVar1 = FUN_00435f80(plVar3[1],plVar4), iVar1 != 0)) {
        *plVar4 = param_2;
        *param_1 = (long)plVar3;
        return 1;
      }
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_sxnet.c",0xc1,"SXNET_add_id_INTEGER");
  FUN_0051f8f0(0x22,0xc0100,0);
  FUN_006137c0(plVar4);
  lVar2 = *param_1;
  plVar3 = plVar5;
joined_r0x00613aac:
  if (lVar2 == 0) {
    FUN_00613860(plVar3);
  }
  return 0;
}

