
long FUN_005fb610(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_58 [10];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00419fe0(0x40,0);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_0051f000();
    iVar1 = FUN_004222c0(DAT_00941008);
    if (((iVar1 == 0) || (*param_1 == 0)) ||
       (local_58[0] = param_2, lVar2 = FUN_00545b60(*param_1,local_58), lVar2 == 0)) {
      lVar3 = 0;
    }
    else {
      if (((*(long *)(lVar2 + 0x10) == 0) || (iVar1 = FUN_0051a070(), iVar1 == 0)) &&
         (iVar1 = *(int *)(lVar2 + 0x18), *(int *)(lVar2 + 0x18) == 0)) {
        do {
          iVar4 = iVar1 + 1;
          lVar3 = FUN_004364a0(*(undefined8 *)(lVar2 + 8),iVar1);
          if (lVar3 == 0) goto LAB_005fb69a;
          iVar1 = iVar4;
        } while (((*(int *)(lVar3 + 0xa0) < 1) && (((byte)DAT_009427e0 & 1) != 0)) ||
                (iVar4 = FUN_0051a070(lVar3), iVar4 == 0));
        if ((*(long *)(lVar2 + 0x10) != lVar3) && (iVar1 = FUN_0051a070(lVar3), iVar1 != 0)) {
          if (*(long *)(lVar2 + 0x10) != 0) {
            FUN_0051a0b0(*(long *)(lVar2 + 0x10),0);
          }
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x10);
      }
LAB_005fb69a:
      *(undefined4 *)(lVar2 + 0x18) = 1;
    }
    FUN_004222e0(DAT_00941008);
    FUN_0051f050();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

