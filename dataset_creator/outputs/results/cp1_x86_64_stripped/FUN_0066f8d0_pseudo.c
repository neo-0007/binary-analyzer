
void FUN_0066f8d0(long param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0066f8e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,(int)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

