
ulong check_purpose_ns_ssl_server(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  if (((*(uint *)(param_2 + 0xe8) & 4) == 0) || (uVar1 = 0, (*(byte *)(param_2 + 0xf0) & 0x11) != 0)
     ) {
    if (param_3 == 0) {
      if (((*(uint *)(param_2 + 0xe8) & 8) != 0) && ((*(byte *)(param_2 + 0xf4) & 0x40) == 0)) {
        return 0;
      }
      if ((*(ulong *)(param_2 + 0xe8) & 0xa800000002) == 2) {
        return 0;
      }
      uVar1 = (ulong)((*(ulong *)(param_2 + 0xe8) & 0x2000000002) != 2);
    }
    else {
      uVar1 = check_ca(param_2);
      if ((int)uVar1 != 0) {
        if ((int)uVar1 != 5) {
          return 1;
        }
        return (ulong)(*(uint *)(param_2 + 0xf4) >> 2 & 1);
      }
    }
  }
  return uVar1;
}

