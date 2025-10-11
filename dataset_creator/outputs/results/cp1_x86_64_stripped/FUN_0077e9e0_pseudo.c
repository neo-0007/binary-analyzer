
int FUN_0077e9e0(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_007b1110(&local_50,10,"/etc/shadow",param_4,0);
  if (iVar3 == 1) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    uVar2 = *local_50;
    if (param_3 < 2) {
      *param_4 = 0x22;
      iVar3 = -2;
    }
    else {
      do {
        iVar4 = FUN_007b0770(uVar2,param_2,param_3,&local_48);
        if (iVar4 == 2) {
          iVar3 = 0;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_0077eae7;
        }
        if (iVar4 != 0) break;
        uVar5 = FUN_007ac080(param_2,param_1,param_2,param_3,param_4);
        iVar4 = FUN_007b0940(uVar2,local_48,uVar5);
        if (iVar4 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_0077eae7;
        }
      } while (iVar4 == 0x16);
      *param_4 = iVar4;
      iVar3 = (iVar4 != 0x22) - 2;
    }
LAB_0077eae7:
    FUN_007b1260(local_50);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

