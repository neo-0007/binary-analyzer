
size_t _IO_sgetn(_IO_FILE *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  size_t sVar2;
  
  lVar1 = *(long *)(param_1 + 1);
  if (lVar1 - 0x932180U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x006fd346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    sVar2 = (**(code **)(lVar1 + 0x40))();
    return sVar2;
  }
  _IO_vtable_check();
                    /* WARNING: Could not recover jumptable at 0x006fd37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = (**(code **)(lVar1 + 0x40))(param_1,param_2,param_3);
  return sVar2;
}

