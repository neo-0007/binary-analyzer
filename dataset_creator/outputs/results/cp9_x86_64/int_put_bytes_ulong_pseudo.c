
void int_put_bytes_ulong(undefined8 param_1,ulong *param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar5 = 0;
    uVar3 = uVar1;
    do {
      uVar2 = uVar3;
      lVar5 = lVar5 + 1;
      uVar3 = uVar2 >> 8;
    } while (uVar3 != 0);
    *param_3 = (int)uVar2;
    lVar4 = 1;
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
    WPACKET_put_bytes__(param_1,uVar1,lVar4);
    return;
  }
  WPACKET_put_bytes__(param_1,0,1);
  return;
}

