
void __woverflow(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    _IO_fwide(param_1,1);
  }
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 - 0x932180U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x006f59ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(param_1,param_2);
    return;
  }
  _IO_vtable_check();
                    /* WARNING: Could not recover jumptable at 0x006f59e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,param_2);
  return;
}

