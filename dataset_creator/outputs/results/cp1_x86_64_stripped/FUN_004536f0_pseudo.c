
undefined8 FUN_004536f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined8 *)0x0;
  lVar2 = FUN_004a2bb0(0,param_1,param_2);
  if (lVar2 != 0) {
    iVar1 = FUN_004a2cd0(0,0,0,&local_28,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_00423da0(*local_28);
      if (iVar1 == *(int *)(param_3[1] + 0x18)) {
        uVar3 = FUN_00485290(*param_3);
        uVar3 = (*param_4)(lVar2,uVar3,0);
        goto LAB_00453759;
      }
    }
  }
  uVar3 = 0;
LAB_00453759:
  FUN_004a2c30(lVar2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

