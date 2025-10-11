
long FUN_005ae8f0(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5,
                 int param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long in_FS_OFFSET;
  long *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_2;
  local_50 = (long *)0x0;
  if (param_4 == 0 && param_5 == 0) {
    pplVar4 = (long **)0x0;
    if (param_6 != 0) {
      plVar3 = (long *)FUN_0041aec0(0x30,"../crypto/x509/x_pubkey.c",0x1f5);
      local_50 = plVar3;
      if (plVar3 != (long *)0x0) {
        plVar3[3] = 0;
        FUN_0041ad60(plVar3[4],"../crypto/x509/x_pubkey.c",0x34);
        plVar3[4] = 0;
        goto LAB_005aeac6;
      }
LAB_005aea02:
      lVar2 = 0;
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_pubkey.c",0x1f7,"d2i_PUBKEY_int");
      FUN_0051f8f0(0xb,0xc0100,0);
      goto LAB_005ae9a5;
    }
LAB_005ae940:
    lVar1 = FUN_005ae210(pplVar4,&local_48,param_3);
    if (lVar1 == 0) {
      lVar2 = 0;
      plVar3 = local_50;
    }
    else {
      lVar2 = FUN_005ae880(lVar1);
      FUN_005ae290(lVar1);
      local_50 = (long *)0x0;
      if (lVar2 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        *param_2 = local_48;
        plVar3 = param_1;
        if (param_1 != (long *)0x0) {
          FUN_0040f4f0(*param_1);
          *param_1 = lVar2;
          plVar3 = local_50;
        }
      }
    }
  }
  else {
    plVar3 = (long *)FUN_0041aec0(0x30,"../crypto/x509/x_pubkey.c",0x1f5);
    local_50 = plVar3;
    if (plVar3 == (long *)0x0) goto LAB_005aea02;
    plVar3[3] = param_4;
    FUN_0041ad60(plVar3[4],"../crypto/x509/x_pubkey.c",0x34);
    plVar3[4] = 0;
    if (param_5 == 0) {
LAB_005aeac6:
      pplVar4 = &local_50;
      *(byte *)(local_50 + 5) = (byte)param_6 & 1 | *(byte *)(local_50 + 5) & 0xfe;
      goto LAB_005ae940;
    }
    lVar2 = FUN_0041c2c0(param_5,"../crypto/x509/x_pubkey.c",0x37);
    plVar3[4] = lVar2;
    plVar3 = local_50;
    if (lVar2 != 0) goto LAB_005aeac6;
  }
  FUN_005ae290(plVar3);
LAB_005ae9a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

