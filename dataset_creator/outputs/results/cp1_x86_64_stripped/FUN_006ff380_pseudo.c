
void FUN_006ff380(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    FUN_00701c30(param_1,1);
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 - 0x93f160U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x006ff3ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(param_1,param_2);
    return;
  }
  FUN_00703130();
                    /* WARNING: Could not recover jumptable at 0x006ff3f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,param_2);
  return;
}

