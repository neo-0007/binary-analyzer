
undefined8 FUN_005a03b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    iVar2 = FUN_0059f880(lVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0059f6a0(*(undefined8 *)(lVar1 + 8),1,param_2,&local_44);
      if (-1 < iVar2) {
LAB_005a0414:
        uVar4 = FUN_00436410();
        if (0 < local_44) {
          iVar6 = 0;
          do {
            lVar5 = FUN_004364a0(*(undefined8 *)(lVar1 + 8),iVar6 + iVar2);
            iVar3 = FUN_0059e7e0(uVar4,*(undefined8 *)(lVar5 + 8),1);
            if (iVar3 == 0) {
              FUN_0059f890(lVar1);
              FUN_00436430(uVar4,FUN_005b0200);
              uVar4 = 0;
              goto LAB_005a04f3;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_44);
        }
        FUN_0059f890(lVar1);
        goto LAB_005a04f3;
      }
      lVar5 = FUN_0059ff30();
      FUN_0059f890(lVar1);
      if (lVar5 != 0) {
        iVar2 = FUN_005a00e0(param_1,1,param_2,lVar5);
        if (iVar2 == 0) {
          FUN_0059f740(lVar5);
          uVar4 = 0;
          goto LAB_005a04f3;
        }
        FUN_0059f740(lVar5);
        iVar2 = FUN_0059f880(lVar1);
        if (iVar2 != 0) {
          iVar2 = FUN_0059f6a0(*(undefined8 *)(lVar1 + 8),1,param_2,&local_44);
          if (-1 < iVar2) goto LAB_005a0414;
          FUN_0059f890(lVar1);
        }
      }
    }
  }
  uVar4 = 0;
LAB_005a04f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

