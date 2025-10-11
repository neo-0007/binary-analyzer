
bool FUN_0047aec0(long param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  puVar1 = puVar2 + 0xd;
  uVar3 = *puVar2;
  if (((param_4 == 0) || (param_5 == 0)) ||
     (iVar4 = FUN_0047ae30(puVar2,param_4,param_5,0,0,0,0), iVar4 != 0)) {
    lVar5 = puVar2[4];
    puVar7 = puVar1;
    while( true ) {
      puVar6 = param_2;
      iVar4 = FUN_0053f310(uVar3,puVar2 + 5,lVar5,0);
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = FUN_0053f330(uVar3,puVar7,puVar2[4]);
      if (iVar4 == 0) {
        return false;
      }
      if (param_3 <= (ulong)puVar2[4]) break;
      iVar4 = FUN_0053f650(uVar3,puVar6,0);
      if (iVar4 == 0) {
        return false;
      }
      lVar5 = puVar2[4];
      param_3 = param_3 - lVar5;
      param_2 = (undefined8 *)((long)puVar6 + lVar5);
      puVar7 = puVar6;
    }
    iVar4 = FUN_0053f650(uVar3,puVar1,0,0x40);
    if (iVar4 != 0) {
      thunk_FUN_00713a50(puVar6,puVar1,param_3);
      iVar4 = FUN_0047ae30(*(undefined8 *)(param_1 + 0xf8),param_4,param_5,0,0,0,0);
      return iVar4 != 0;
    }
  }
  return false;
}

