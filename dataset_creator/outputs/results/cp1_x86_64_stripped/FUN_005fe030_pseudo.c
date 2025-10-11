
long FUN_005fe030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = FUN_004a2be0(param_1,&local_40);
  if (iVar1 < 1) {
    lVar3 = 0;
    goto LAB_005fe10d;
  }
  lVar3 = local_40;
  if (local_40 == 0) goto LAB_005fe10d;
  local_48 = local_40;
  local_38 = (long)iVar1;
  lVar3 = FUN_005164c0(&local_50,"DER","PrivateKeyInfo",0,0x87,param_2,param_3);
  if (lVar3 == 0) {
LAB_005fe130:
    local_50 = FUN_005fde40(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_00514ab0(lVar3,&local_48,&local_38);
    if (iVar2 == 0) goto LAB_005fe130;
  }
  FUN_0041aef0(local_40,(long)iVar1,"../crypto/evp/evp_pkey.c",0x5b);
  FUN_00515c80(lVar3);
  lVar3 = local_50;
LAB_005fe10d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

