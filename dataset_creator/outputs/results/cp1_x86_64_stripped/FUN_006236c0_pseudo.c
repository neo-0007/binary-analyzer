
undefined8 FUN_006236c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 local_30 [2];
  
  pbVar6 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  local_30[0] = param_3;
  while( true ) {
    uVar5 = 0;
    bVar4 = 0;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      uVar5 = uVar5 | (ulong)(bVar1 & 0x7f) << bVar2;
    } while ((char)bVar1 < '\0');
    if (uVar5 == 0) break;
    uVar3 = FUN_00623600(param_1);
    uVar3 = FUN_00623430(uVar3,param_2,local_30);
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
  }
  return 0;
}

