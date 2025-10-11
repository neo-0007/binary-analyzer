
undefined8 FUN_0059be40(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_4;
  if ((param_1 == 0) ||
     (param_1 = FUN_0041c2c0(param_1,"../crypto/x509/v3_utl.c",0x2f), param_1 != 0)) {
    if (param_2 != 0) {
      lVar3 = thunk_FUN_007134f0(param_2,0,param_3);
      if (lVar3 != 0) goto LAB_0059bea4;
      param_2 = FUN_0041c400(param_2,param_3,"../crypto/x509/v3_utl.c",0x35);
      if (param_2 != 0) goto LAB_0059bf3f;
      goto LAB_0059bea7;
    }
LAB_0059bf3f:
    puVar4 = (undefined8 *)FUN_0041ad90(0x18,"../crypto/x509/v3_utl.c",0x39);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0059bea7;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar4 = 0;
      lVar3 = *param_4;
      puVar4[1] = param_1;
      puVar4[2] = param_2;
      iVar2 = FUN_00435f80(lVar3,puVar4);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
      FUN_0051f8f0(0x22,0xc0100,0);
      goto LAB_0059bedf;
    }
    lVar3 = FUN_00436410();
    *param_4 = lVar3;
    if (lVar3 != 0) {
      *puVar4 = 0;
      puVar4[1] = param_1;
      puVar4[2] = param_2;
      iVar2 = FUN_00435f80(lVar3,puVar4);
      if (iVar2 != 0) {
        return 1;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
LAB_0059bea4:
    param_2 = 0;
LAB_0059bea7:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
    FUN_0051f8f0(0x22,0xc0100,0);
    puVar4 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0059bedf;
    }
  }
  FUN_004360b0(*param_4);
  *param_4 = 0;
LAB_0059bedf:
  FUN_0041ad60(puVar4,"../crypto/x509/v3_utl.c",0x49);
  FUN_0041ad60(param_1,"../crypto/x509/v3_utl.c",0x4a);
  FUN_0041ad60(param_2,"../crypto/x509/v3_utl.c",0x4b);
  return 0;
}

