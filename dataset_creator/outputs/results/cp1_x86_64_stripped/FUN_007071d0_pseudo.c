
void FUN_007071d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 - 0x93f160U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x0070720a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x48))(param_1,param_2,0);
    return;
  }
  FUN_00703130();
                    /* WARNING: Could not recover jumptable at 0x0070723c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x48))(param_1,param_2,0,param_3);
  return;
}

