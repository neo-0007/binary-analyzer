
void _dl_signal_exception(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  plVar1 = *(long **)(in_FS_OFFSET + -8);
  if (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)*plVar1;
    uVar3 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = param_2[2];
    *(int *)plVar1[1] = (int)param_1;
                    /* WARNING: Subroutine does not return */
    __longjmp((__jmp_buf_tag *)(plVar1 + 2),1);
  }
                    /* WARNING: Subroutine does not return */
  fatal_error(param_1,*param_2,param_3,param_2[1]);
}

