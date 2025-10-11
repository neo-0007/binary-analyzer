
int FUN_00607660(int *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [16];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (int)param_3;
  if (*param_1 == 0) {
    iVar1 = FUN_006075c0(auStack_58,*(undefined8 *)(param_1 + 2),param_3,0);
    if (iVar1 != 0) {
      iVar1 = **(int **)(param_1 + 2) * 8 - ((uint)*(undefined8 *)(*(int **)(param_1 + 2) + 4) & 7);
      goto LAB_006076f2;
    }
LAB_006077a0:
    iVar3 = -1;
  }
  else {
    if (*param_1 == 1) {
      iVar1 = FUN_006075c0(auStack_58,**(undefined8 **)(param_1 + 2),param_3,0);
      if (iVar1 == 0) goto LAB_006077a0;
      iVar2 = *param_2;
      iVar1 = iVar3 * 8;
      if (iVar2 != 0) goto LAB_006076fa;
LAB_006076b7:
      iVar2 = FUN_006075c0(local_48,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff,0);
      if (iVar2 == 0) goto LAB_006077a0;
      iVar2 = **(int **)(param_2 + 2) * 8 - ((uint)*(undefined8 *)(*(int **)(param_2 + 2) + 4) & 7);
    }
    else {
      iVar1 = 0;
LAB_006076f2:
      iVar2 = *param_2;
      if (iVar2 == 0) goto LAB_006076b7;
LAB_006076fa:
      if (iVar2 == 1) {
        iVar2 = FUN_006075c0(local_48,**(undefined8 **)(param_2 + 2),param_3 & 0xffffffff,0);
        if (iVar2 == 0) goto LAB_006077a0;
        iVar2 = iVar3 * 8;
      }
      else {
        iVar2 = 0;
      }
    }
    iVar3 = thunk_FUN_00713570(auStack_58,local_48,(long)iVar3);
    if (iVar3 == 0) {
      iVar3 = iVar1 - iVar2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

