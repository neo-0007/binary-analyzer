
uint * _IO_file_open(uint *param_1,char *param_2,int param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  if ((param_1[0x1d] & 2) == 0) {
    uVar1 = open64(param_2,param_3);
  }
  else {
    uVar1 = __open64_nocancel(param_2,param_3,param_4);
  }
  if ((int)uVar1 < 0) {
    return (uint *)0x0;
  }
  param_1[0x1c] = uVar1;
  *param_1 = *param_1 & 0xffffeff3 | param_5 & 0x100c;
  if ((param_5 & 0x1004) == 0x1004) {
    lVar2 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar2 - 0x932180U) {
      _IO_vtable_check();
    }
    lVar2 = (**(code **)(lVar2 + 0x80))(param_1,0,2);
    if ((lVar2 == -1) && (*(int *)(in_FS_OFFSET + -0x58) != 0x1d)) {
      __close_nocancel(uVar1);
      return (uint *)0x0;
    }
  }
  _IO_link_in(param_1);
  return param_1;
}

