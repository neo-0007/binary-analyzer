
ulong FUN_005c0590(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_3 & 0xffffffff;
  puVar1 = (ulong *)(*(undefined8 **)(param_1 + 0x40))[1];
  if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
    puVar1 = (ulong *)**(undefined8 **)(param_1 + 0x40);
  }
  FUN_004ab6c0(param_1,0xf);
  if (-1 < (int)param_3) {
    uVar3 = param_3 & 0xffffffff;
    if (*puVar1 < (ulong)(long)(int)param_3) {
      uVar3 = *puVar1 & 0xffffffff;
    }
  }
  if ((param_2 != 0) && (0 < (int)uVar3)) {
    lVar2 = (long)(int)uVar3;
    thunk_FUN_00713a50(param_2,puVar1[1],lVar2);
    *puVar1 = *puVar1 - lVar2;
    puVar1[2] = puVar1[2] - lVar2;
    puVar1[1] = puVar1[1] + lVar2;
    return uVar3;
  }
  if ((*puVar1 == 0) && (uVar3 = (ulong)*(uint *)(param_1 + 0x38), *(uint *)(param_1 + 0x38) != 0))
  {
    FUN_004ab6e0(param_1,9);
    return uVar3;
  }
  return uVar3;
}

