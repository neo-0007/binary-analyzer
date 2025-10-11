
ulong check_purpose_ssl_client(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  if (((*(uint *)(param_2 + 0xe8) & 4) == 0) || (uVar1 = 0, (*(byte *)(param_2 + 0xf0) & 2) != 0)) {
    if (param_3 == 0) {
      uVar1 = 0;
      if (((*(ulong *)(param_2 + 0xe8) & 0x8800000002) != 2) &&
         (uVar1 = 1, (*(uint *)(param_2 + 0xe8) & 8) != 0)) {
        return (ulong)(*(uint *)(param_2 + 0xf4) >> 7 & 1);
      }
    }
    else {
      uVar1 = check_ca(param_2);
      if ((int)uVar1 != 0) {
        if ((int)uVar1 == 5) {
          return (ulong)(*(uint *)(param_2 + 0xf4) >> 2 & 1);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

