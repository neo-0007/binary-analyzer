
void d_print_comp(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && (*(int *)(param_3 + 4) < 2)) {
    iVar1 = *(int *)(param_1 + 0x134);
    if (iVar1 < 0x401) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      local_30 = *(undefined8 *)(param_1 + 0x148);
      *(int *)(param_1 + 0x134) = iVar1 + 1;
      *(long **)(param_1 + 0x148) = &local_38;
      local_38 = param_3;
      d_print_comp_inner(param_1,0x11,param_3);
      *(undefined8 *)(param_1 + 0x148) = local_30;
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + -1;
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
      goto LAB_006be6ca;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 1;
LAB_006be6ca:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

