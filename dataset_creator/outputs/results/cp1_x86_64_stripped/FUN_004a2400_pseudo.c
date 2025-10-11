
undefined1 * FUN_004a2400(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *local_50;
  undefined1 *local_48;
  
  if (param_2 == (undefined1 *)0x0) {
    lVar2 = 0;
    local_50 = &DAT_0083e5c2;
  }
  else {
    lVar2 = thunk_FUN_007129d0(param_2);
    local_50 = param_2;
  }
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = FUN_00436480(param_1);
    if (iVar1 <= iVar4) break;
    uVar3 = FUN_004364a0(param_1,iVar4);
    if (iVar4 != 0) {
      uVar5 = uVar5 + lVar2;
    }
    iVar1 = FUN_004a23b0(uVar3);
    uVar5 = uVar5 + (long)iVar1;
    if ((param_3 != 0) && (param_3 < uVar5)) goto LAB_004a2520;
    iVar4 = iVar4 + 1;
  }
  local_48 = (undefined1 *)FUN_0041ad90(uVar5 + 1,"../crypto/asn1/asn1_lib.c",0x1c5);
  if (local_48 == (undefined1 *)0x0) {
LAB_004a2520:
    local_48 = (undefined1 *)0x0;
  }
  else {
    iVar4 = 0;
    puVar7 = local_48;
    while( true ) {
      iVar1 = FUN_00436480(param_1);
      if (iVar1 <= iVar4) break;
      uVar3 = FUN_004364a0(param_1,iVar4);
      iVar1 = FUN_004a23b0(uVar3);
      puVar6 = puVar7;
      if ((0 < iVar4) && (lVar2 != 0)) {
        puVar6 = puVar7 + lVar2;
        thunk_FUN_00712b50(puVar7,local_50,lVar2 + 1);
      }
      iVar4 = iVar4 + 1;
      uVar3 = FUN_004a23e0(uVar3);
      puVar7 = puVar6 + iVar1;
      thunk_FUN_00712b50(puVar6,uVar3,(long)iVar1);
    }
    *puVar7 = 0;
  }
  return local_48;
}

