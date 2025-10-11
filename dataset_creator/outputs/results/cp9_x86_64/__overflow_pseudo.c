
int __overflow(_IO_FILE *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  
  if (param_1->_mode == 0) {
    param_1->_mode = -1;
  }
  lVar1 = *(long *)(param_1 + 1);
  if (lVar1 - 0x932180U < 0x828) {
                    /* WARNING: Could not recover jumptable at 0x006fcbaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(lVar1 + 0x18))();
    return iVar2;
  }
  _IO_vtable_check();
                    /* WARNING: Could not recover jumptable at 0x006fcbce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(lVar1 + 0x18))(param_1,param_2);
  return iVar2;
}

