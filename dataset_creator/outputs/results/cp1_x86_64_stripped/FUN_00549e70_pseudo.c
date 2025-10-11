
long FUN_00549e70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00420f10(param_1,param_2,0);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar3 = FUN_00421190(param_1,param_2,0,0);
    if (lVar3 == 0) goto LAB_00549ebe;
    iVar1 = FUN_00420a00(lVar3,1,0);
    if (iVar1 != 0) {
      local_38 = lVar3;
      iVar1 = FUN_00421380(lVar3,&local_38,param_3);
      if (iVar1 == 0) {
        FUN_00420b10(lVar3,1);
        FUN_00420d40(lVar3);
      }
      else {
        lVar4 = local_38;
        if ((local_38 != lVar3) &&
           (iVar1 = FUN_00420a00(local_38,1,0), lVar4 = local_38, iVar1 == 0)) {
          FUN_00420d40(local_38);
          lVar4 = lVar2;
        }
      }
      goto LAB_00549ebe;
    }
  }
  else {
    iVar1 = FUN_00420a00(lVar2,1,0);
    lVar3 = lVar2;
    if (iVar1 != 0) goto LAB_00549ebe;
  }
  FUN_00420d40(lVar3);
  lVar4 = 0;
LAB_00549ebe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

