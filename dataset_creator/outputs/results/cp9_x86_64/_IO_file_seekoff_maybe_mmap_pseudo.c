
long _IO_file_seekoff_maybe_mmap(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar1 - 0x932180U) {
    _IO_vtable_check();
    param_3 = param_3 & 0xffffffff;
  }
  lVar1 = (**(code **)(lVar1 + 0x80))(param_1,param_2,param_3);
  if (lVar1 < 0) {
    lVar1 = -1;
  }
  else {
    *(long *)(param_1 + 0x90) = lVar1;
  }
  return lVar1;
}

