
undefined8 FUN_005afa90(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_005afa30(0,0,0,&local_30,param_1);
    if ((iVar1 != 0) && (local_30 != 0)) {
      iVar1 = FUN_005afa30(0,0,0,&local_28,param_2);
      if ((iVar1 != 0) && (local_28 != 0)) {
        iVar1 = FUN_004a89c0(local_30);
        uVar4 = 0;
        if (iVar1 != 0) goto LAB_005afb5a;
        lVar2 = FUN_005ae7f0(param_1);
        if (lVar2 != 0) {
          lVar3 = FUN_005ae7f0(param_2);
          if (lVar3 != 0) {
            uVar4 = FUN_00410190(lVar2,lVar3);
            goto LAB_005afb5a;
          }
        }
      }
    }
    uVar4 = 0xfffffffe;
  }
LAB_005afb5a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

