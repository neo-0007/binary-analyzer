
void _IO_default_seekpos(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 - 0x932180U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x006fd7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x48))(param_1,param_2,0);
    return;
  }
  _IO_vtable_check();
                    /* WARNING: Could not recover jumptable at 0x006fd82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x48))(param_1,param_2,0,param_3);
  return;
}

