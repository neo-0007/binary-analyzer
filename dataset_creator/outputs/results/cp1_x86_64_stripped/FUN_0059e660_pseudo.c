
ulong FUN_0059e660(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*(byte *)(param_1 + 0x86) & 0x10) == 0) && ((*(byte *)(param_2 + 0x86) & 0x10) == 0)) {
    iVar1 = thunk_FUN_00713570(param_1 + 0xb8,param_2 + 0xb8,0x14);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (ulong)(0 < iVar1);
    }
    return uVar2;
  }
  return 0xfffffffe;
}

