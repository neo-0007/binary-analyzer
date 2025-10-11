
void FUN_007a1dc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xc0) < 1) {
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00706520();
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0xa0) + 0x40) != 0) {
    FUN_006ffe00();
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar1 - 0x93f160U) {
    FUN_00703130();
  }
                    /* WARNING: Could not recover jumptable at 0x007a1e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x48))(param_1,param_2,0,param_3);
  return;
}

