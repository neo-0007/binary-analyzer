
int * FUN_006042b0(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_0055fbf0(param_1,0xa7);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0x10) {
      local_18 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
      uVar2 = FUN_004a8750();
      piVar1 = (int *)FUN_004a55c0(0,&local_18,(long)**(int **)(piVar1 + 2),uVar2);
    }
    else {
      piVar1 = (int *)0x0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

