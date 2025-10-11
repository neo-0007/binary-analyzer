
int FUN_0077d870(int param_1,int param_2,long param_3,undefined8 param_4,ulong param_5,int *param_6,
                undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_007b0710("/etc/networks");
  if (lVar4 == 0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    if (param_5 < 2) {
      *param_6 = 0x22;
      iVar2 = -2;
      *param_7 = 0xffffffff;
    }
    else {
LAB_0077d8f8:
      do {
        iVar2 = FUN_007b0770(lVar4,param_4,param_5,&local_48);
        if (iVar2 == 2) {
          iVar2 = 0;
          *param_7 = 1;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_0077d961;
        }
        if (iVar2 != 0) {
LAB_0077d944:
          *param_6 = iVar2;
          *param_7 = 0xffffffff;
          iVar2 = (iVar2 != 0x22) - 2;
          goto LAB_0077d961;
        }
        uVar3 = FUN_0077d170(param_4,param_3,param_4,param_5,param_6);
        iVar2 = FUN_007b0940(lVar4,local_48,uVar3);
        if (iVar2 != 0) {
          if (iVar2 != 0x16) goto LAB_0077d944;
          goto LAB_0077d8f8;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      } while (((param_2 != 0) && (*(int *)(param_3 + 0x10) != param_2)) ||
              (*(int *)(param_3 + 0x14) != param_1));
      iVar2 = 1;
    }
LAB_0077d961:
    FUN_006fd190(lVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

