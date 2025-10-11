
undefined8 FUN_005adc70(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)FUN_0041aec0(0x30,"../crypto/x509/x_pubkey.c",0x73);
  local_38 = plVar1;
  if (plVar1 == (long *)0x0) {
LAB_005add30:
    FUN_005adbf0(&local_38,0);
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x_pubkey.c",0x78,"x509_pubkey_ex_new_ex");
    FUN_0051f8f0(0xd,0xc0100,0);
    uVar3 = 0;
  }
  else {
    if (*plVar1 == 0) {
      lVar2 = FUN_004a87c0();
      *plVar1 = lVar2;
      if (lVar2 == 0) goto LAB_005add30;
    }
    if (plVar1[1] == 0) {
      lVar2 = FUN_004a7820();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_005add30;
    }
    plVar1[3] = param_3;
    FUN_0041ad60(plVar1[4],"../crypto/x509/x_pubkey.c",0x34);
    plVar1[4] = 0;
    if (param_4 != 0) {
      lVar2 = FUN_0041c2c0(param_4,"../crypto/x509/x_pubkey.c",0x37);
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_005add30;
    }
    *param_1 = plVar1;
    uVar3 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

