
uint FUN_004d7050(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (int *)0x0) {
    iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
    uVar2 = (uint)(0 < iVar1);
    goto LAB_004d70da;
  }
  local_48 = *(undefined8 *)(param_3 + 2);
  lVar3 = FUN_004da510(0,&local_48,(long)*param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
    iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
    if (0 < iVar1) {
      uVar2 = FUN_00598950(param_1,param_3,param_4);
    }
    goto LAB_004d70da;
  }
  FUN_004da810(lVar3,&local_40,&local_38);
  iVar1 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
  if (iVar1 == 1) {
    iVar1 = FUN_005bc920(param_1,"r:   ",local_40,0,param_4);
    if (iVar1 == 0) goto LAB_004d70cf;
    iVar1 = FUN_005bc920(param_1,"s:   ",local_38,0,param_4);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
LAB_004d70cf:
    uVar2 = 0;
  }
  FUN_004da4d0(lVar3);
LAB_004d70da:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

