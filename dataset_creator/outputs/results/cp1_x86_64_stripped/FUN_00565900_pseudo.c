
void FUN_00565900(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  pcVar2 = *(code **)(param_1 + 0xf0);
  if (lVar1 != 0) {
    pcVar3 = *(code **)(param_1 + 0xe8);
    *(undefined1 *)(param_1 + 0xd0 + lVar1) = 1;
    if (lVar1 + 1U < 0x10) {
      thunk_FUN_00713720(param_1 + 0xd1 + lVar1,0,0xf - lVar1);
    }
    (*pcVar3)(param_1,param_1 + 0xd0,0x10,0);
  }
  (*pcVar2)(param_1,param_2,param_1 + 0xc0);
  FUN_004227b0(param_1,0xf8);
  return;
}

