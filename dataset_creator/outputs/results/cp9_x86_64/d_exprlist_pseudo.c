
undefined8 d_exprlist(long param_1,char param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  plVar4 = &local_38;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (**(char **)(param_1 + 0x18) == param_2) {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = d_make_comp(param_1,0x2e,0,0);
      return uVar3;
    }
  }
  else {
    do {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      lVar2 = d_expression_1(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      if (lVar2 == 0) {
LAB_006b9963:
        lVar2 = 0;
        goto LAB_006b9965;
      }
      lVar2 = d_make_comp(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      if (lVar2 == 0) goto LAB_006b9963;
      plVar4 = (long *)(lVar2 + 0x18);
    } while (**(char **)(param_1 + 0x18) != param_2);
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    lVar2 = local_38;
LAB_006b9965:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

