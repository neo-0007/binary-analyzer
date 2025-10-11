
int FUN_006c49c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0070a340();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0x7fffffff) {
    iVar1 = -1;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    FUN_00625160(&local_38,param_3);
                    /* try { // try from 006c4a25 to 006c4a29 has its CatchHandler @ 006c4af9 */
    piVar4 = (int *)FUN_006c31f0(0x18);
    *piVar4 = iVar1;
    uVar5 = FUN_007128a0(param_2);
    *(undefined8 *)(piVar4 + 2) = uVar5;
    FUN_00625160(piVar4 + 4,&local_38);
    FUN_00625980(&local_38);
    if (*(long *)(piVar4 + 2) == 0) {
      FUN_00625980(piVar4 + 4);
      iVar1 = -1;
      thunk_FUN_007104f0(piVar4);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x38);
      local_38 = piVar4;
      if (puVar3 == *(undefined8 **)(param_1 + 0x40)) {
                    /* try { // try from 006c4ad7 to 006c4adb has its CatchHandler @ 006c4aed */
        FUN_006c4860(param_1 + 0x30,puVar3,&local_38);
      }
      else {
        *puVar3 = piVar4;
        *(undefined8 **)(param_1 + 0x38) = puVar3 + 1;
      }
      iVar1 = *piVar4;
    }
  }
  iVar2 = FUN_0070abb0(param_1);
  if (iVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  puVar3 = (undefined8 *)FUN_006231b0(8);
  *puVar3 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00403ed2 to 00403ed6 has its CatchHandler @ 00403ed7 */
  FUN_00624060(puVar3,&PTR_PTR_009339b0,FUN_00622f20);
}

