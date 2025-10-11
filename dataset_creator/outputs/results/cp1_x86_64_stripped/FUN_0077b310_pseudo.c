
int FUN_0077b310(int param_1,long param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_007b0710("/etc/protocols");
  if (lVar4 == 0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    do {
      if (param_4 < 2) {
        *param_5 = 0x22;
        iVar2 = -2;
        goto LAB_0077b3df;
      }
LAB_0077b382:
      iVar2 = FUN_007b0770(lVar4,param_3,param_4,&local_48);
      if (iVar2 == 2) {
        iVar2 = 0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        goto LAB_0077b3df;
      }
      if (iVar2 != 0) goto LAB_0077b3cd;
      uVar3 = FUN_0077ade0(param_3,param_2,param_3,param_4,param_5);
      iVar2 = FUN_007b0940(lVar4,local_48,uVar3);
      if (iVar2 != 0) goto code_r0x0077b3c8;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
    } while (*(int *)(param_2 + 0x10) != param_1);
    iVar2 = 1;
LAB_0077b3df:
    FUN_006fd190(lVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x0077b3c8:
  if (iVar2 != 0x16) {
LAB_0077b3cd:
    *param_5 = iVar2;
    iVar2 = (iVar2 != 0x22) - 2;
    goto LAB_0077b3df;
  }
  goto LAB_0077b382;
}

