
void FUN_005b2520(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_0043c230(*(undefined8 *)(param_1 + 8));
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar1 = FUN_005b2040();
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x68))(param_1,param_2,param_3);
      if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005b2566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x48))();
        return;
      }
    }
  }
  return;
}

