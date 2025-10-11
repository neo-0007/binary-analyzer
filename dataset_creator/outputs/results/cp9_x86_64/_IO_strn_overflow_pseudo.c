
undefined4 _IO_strn_overflow(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0xf0;
  if (*(long *)(param_1 + 0x38) != lVar1) {
    **(undefined1 **)(param_1 + 0x28) = 0;
    _IO_setb();
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = param_1 + 0x130;
    *(long *)(param_1 + 0x18) = lVar1;
    *(long *)(param_1 + 0x20) = lVar1;
  }
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = lVar1;
  return param_2;
}

