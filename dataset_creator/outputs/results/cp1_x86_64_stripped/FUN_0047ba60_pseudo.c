
undefined8 FUN_0047ba60(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (param_3 <= *(uint *)(param_1 + 0xc))) {
    if (param_2 != 0) {
      thunk_FUN_00713a50(param_2,*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}

