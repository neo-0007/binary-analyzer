
undefined8 _IO_wfile_underflow_maybe_mmap(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _IO_file_underflow_maybe_mmap();
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x006f77b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0xe0) + 0x20))(param_1);
    return uVar2;
  }
  return 0xffffffff;
}

