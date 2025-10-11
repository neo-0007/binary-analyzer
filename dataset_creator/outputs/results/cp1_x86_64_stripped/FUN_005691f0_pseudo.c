
int FUN_005691f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_005afa30(0,local_30,&local_34,&local_28,param_2);
  if (iVar1 != 0) {
    lVar2 = FUN_0056a5f0(0,local_30,(long)local_34);
    if (lVar2 != 0) {
      iVar1 = FUN_0042b2a0(lVar2,local_28);
      if (iVar1 != 0) {
        FUN_0042c5d0(lVar2,0xf000);
        iVar1 = **(int **)(param_1 + 8);
        if (iVar1 == 6) {
          FUN_0042c5f0(lVar2,0);
          iVar1 = **(int **)(param_1 + 8);
        }
        else if (iVar1 == 0x390) {
          FUN_0042c5f0(lVar2,0x1000);
          iVar1 = **(int **)(param_1 + 8);
        }
        iVar1 = FUN_0040f1c0(param_1,iVar1,lVar2);
        if (iVar1 != 0) {
          iVar1 = 1;
          goto LAB_00569230;
        }
      }
      FUN_0042b980(lVar2);
      goto LAB_00569230;
    }
  }
  iVar1 = 0;
LAB_00569230:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

