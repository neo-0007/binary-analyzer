
undefined8
FUN_0041ca70(long param_1,ulong param_2,long param_3,ulong param_4,byte param_5,int param_6)

{
  byte *pbVar1;
  
  if (param_4 < param_2) {
    thunk_FUN_00713720(param_1 + param_4,param_5,param_2 - param_4);
    thunk_FUN_00713a50(param_1,param_3,param_4);
    return 1;
  }
  if (param_2 != param_4) {
    pbVar1 = (byte *)(param_3 + param_2);
    do {
      if (param_5 != *pbVar1) {
        return 0;
      }
      pbVar1 = pbVar1 + 1;
    } while (pbVar1 != (byte *)(param_3 + param_4));
  }
  if ((param_6 != 0) && ((char)(param_5 ^ *(byte *)(param_3 + -1 + param_2)) < '\0')) {
    return 0;
  }
  thunk_FUN_00713a50(param_1,param_3,param_2);
  return 1;
}

