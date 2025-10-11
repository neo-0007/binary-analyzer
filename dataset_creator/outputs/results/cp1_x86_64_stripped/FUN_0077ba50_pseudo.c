
int FUN_0077ba50(int param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,int *param_6
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_007b0710("/etc/services");
  if (lVar4 == 0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    if (param_5 < 2) {
      *param_6 = 0x22;
      iVar2 = -2;
    }
    else {
LAB_0077bad0:
      do {
        do {
          iVar2 = FUN_007b0770(lVar4,param_4,param_5,&local_48);
          if (iVar2 == 2) {
            iVar2 = 0;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
            goto LAB_0077bb2e;
          }
          if (iVar2 != 0) {
LAB_0077bb1c:
            *param_6 = iVar2;
            iVar2 = (iVar2 != 0x22) - 2;
            goto LAB_0077bb2e;
          }
          uVar3 = FUN_0077b480(param_4,param_3,param_4,param_5,param_6);
          iVar2 = FUN_007b0940(lVar4,local_48,uVar3);
          if (iVar2 != 0) {
            if (iVar2 != 0x16) goto LAB_0077bb1c;
            goto LAB_0077bad0;
          }
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        } while (*(int *)(param_3 + 0x10) != param_1);
        if (param_2 == 0) break;
        iVar2 = thunk_FUN_00712780(*(undefined8 *)(param_3 + 0x18));
      } while (iVar2 != 0);
      iVar2 = 1;
    }
LAB_0077bb2e:
    FUN_006fd190(lVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

