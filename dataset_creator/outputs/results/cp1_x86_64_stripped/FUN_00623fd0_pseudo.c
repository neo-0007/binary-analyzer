
void FUN_00623fd0(uint param_1,long param_2)

{
  int *piVar1;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00623ed0(*(undefined8 *)(param_2 + -0x38));
  }
  LOCK();
  piVar1 = (int *)(param_2 + -0x60);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))(param_2 + 0x20);
    }
    FUN_00623210(param_2 + 0x20);
    return;
  }
  return;
}

