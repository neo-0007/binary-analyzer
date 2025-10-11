
long d_parmlist(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  plVar5 = &local_28;
  pcVar4 = *(char **)(param_1 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  cVar1 = *pcVar4;
  if ((cVar1 != 'E' && cVar1 != '\0') && (cVar1 != '.')) {
    while (((cVar1 != 'R' && (cVar1 != 'O')) || (pcVar4[1] != 'E'))) {
      lVar3 = d_type(param_1);
      if (lVar3 == 0) goto LAB_006b8394;
      lVar3 = d_make_comp(param_1,0x2e,lVar3,0);
      *plVar5 = lVar3;
      if (lVar3 == 0) goto LAB_006b8394;
      pcVar4 = *(char **)(param_1 + 0x18);
      plVar5 = (long *)(lVar3 + 0x18);
      cVar1 = *pcVar4;
      if ((cVar1 == '\0' || cVar1 == 'E') || (cVar1 == '.')) break;
    }
    if (local_28 != 0) {
      lVar3 = local_28;
      if (((*(long *)(local_28 + 0x18) == 0) && (**(int **)(local_28 + 0x10) == 0x27)) &&
         (lVar2 = *(long *)(*(int **)(local_28 + 0x10) + 4), *(int *)(lVar2 + 0x1c) == 9)) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(lVar2 + 8);
        *(undefined8 *)(local_28 + 0x10) = 0;
      }
      goto LAB_006b8396;
    }
  }
LAB_006b8394:
  lVar3 = 0;
LAB_006b8396:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}

