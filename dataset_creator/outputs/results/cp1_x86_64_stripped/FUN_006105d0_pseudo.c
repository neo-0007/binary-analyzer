
undefined8 FUN_006105d0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = FUN_0059e6d0();
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x118));
  iVar2 = FUN_005a9980(lVar5);
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar4 <= 0x7fffffff - iVar1) {
    iVar2 = FUN_00436480(param_2[1]);
    iVar3 = FUN_00436480(*param_2);
    iVar7 = 0;
    if (-1 < iVar3) {
      iVar7 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((iVar7 <= 0x7fffffff - iVar2) &&
       ((iVar4 + iVar1 == 0 || (iVar7 + iVar2 <= (int)(0x100000 / (long)(iVar4 + iVar1)))))) {
      iVar4 = FUN_005a9980(lVar5);
      if (iVar4 < 1) {
LAB_00610695:
        for (iVar4 = 0; iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x118)), iVar4 < iVar1;
            iVar4 = iVar4 + 1) {
          uVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x118),iVar4);
          uVar6 = FUN_00610180(uVar6,param_2);
          if ((int)uVar6 != 0) goto LAB_006106e5;
        }
        uVar6 = 0;
      }
      else {
        local_58[0] = 4;
        local_50 = lVar5;
        uVar6 = FUN_00610180(local_58,param_2);
        if ((int)uVar6 == 0) {
          local_58[0] = 1;
          iVar4 = -1;
          do {
            iVar4 = FUN_005a9a30(lVar5,0x30,iVar4);
            if (iVar4 == -1) goto LAB_00610695;
            uVar6 = FUN_005a9a70(lVar5,iVar4);
            local_50 = FUN_005aa210(uVar6);
            if (*(int *)(local_50 + 4) != 0x16) {
              uVar6 = 0x35;
              break;
            }
            uVar6 = FUN_00610180(local_58,param_2);
          } while ((int)uVar6 == 0);
        }
      }
      goto LAB_006106e5;
    }
  }
  uVar6 = 1;
LAB_006106e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

