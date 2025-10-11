
undefined4 * __alloc_dir(ulong param_1,char param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  if (param_2 == '\0') {
    iVar1 = __fcntl64_nocancel(param_1,2,1);
    if (-1 < iVar1) {
      uVar3 = *(ulong *)(param_4 + 0x38);
      if (uVar3 < 0x8000) {
        uVar3 = 0x8000;
      }
      if (0x100000 < uVar3) {
        uVar3 = 0x100000;
      }
      puVar2 = (undefined4 *)malloc(uVar3 + 0x30);
      if (puVar2 != (undefined4 *)0x0) goto LAB_0075f030;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_4 + 0x38);
    if (uVar3 < 0x8000) {
      uVar3 = 0x8000;
    }
    if (0x100000 < uVar3) {
      uVar3 = 0x100000;
    }
    puVar2 = (undefined4 *)malloc(uVar3 + 0x30);
    if (puVar2 == (undefined4 *)0x0) {
      __close_nocancel(param_1 & 0xffffffff);
      return (undefined4 *)0x0;
    }
LAB_0075f030:
    *puVar2 = (int)param_1;
    puVar2[1] = 0;
    *(ulong *)(puVar2 + 2) = uVar3;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[10] = 0;
  }
  return puVar2;
}

