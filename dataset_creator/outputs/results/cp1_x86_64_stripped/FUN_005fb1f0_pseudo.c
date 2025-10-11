
void FUN_005fb1f0(long param_1,long param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_00435f40(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 < 0) break;
    FUN_00435ec0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) != param_2) {
    return;
  }
  FUN_0051a0b0(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

