
uint FUN_006209c0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  if (*param_1 != 0) {
    param_1[0x18] = 5;
    uVar6 = 0;
    goto LAB_00620a07;
  }
  lVar2 = FUN_00622930(param_2[2],*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
  uVar6 = 0;
  if (lVar2 == 0) {
    param_1[0x18] = 1;
    goto LAB_00620a07;
  }
  lVar3 = FUN_00620d70(param_2[4],param_2[5]);
  if (lVar3 == 0) {
LAB_00620a7f:
    uVar6 = 0xffffffff;
  }
  else {
    uVar4 = FUN_00622920(lVar2);
    iVar1 = FUN_005ae4f0(&local_38,uVar4);
    if ((iVar1 != 1) || (iVar1 = FUN_006212a0(lVar3,local_38), iVar1 != 1)) goto LAB_00620a7f;
    iVar1 = FUN_00620850(param_1);
    if (iVar1 == 1) {
      if (param_2[1] != 0) {
        uVar4 = FUN_0059ef80();
        iVar1 = FUN_005ae4f0(&local_40,uVar4);
        if ((iVar1 != 1) || (iVar1 = FUN_00621260(lVar3,local_40), iVar1 != 1)) goto LAB_00620a7f;
        goto LAB_00620acf;
      }
LAB_00620aee:
      iVar5 = 4;
    }
    else {
LAB_00620acf:
      FUN_00621320(lVar3,param_2[3]);
      iVar1 = FUN_00620f00(lVar3,*param_2,0);
      if (iVar1 != 1) goto LAB_00620aee;
      iVar1 = FUN_00621330(lVar3,param_1);
      iVar5 = (iVar1 != 1) + 2;
      uVar6 = (uint)(iVar1 == 1);
    }
    param_1[0x18] = iVar5;
  }
  FUN_005ae290(local_40);
  FUN_005ae290(local_38);
  FUN_00620e60(lVar3);
LAB_00620a07:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

