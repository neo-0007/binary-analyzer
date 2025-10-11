
undefined8 FUN_006dd840(undefined8 param_1,ulong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar6 = DAT_00946100;
  uVar2 = *(ushort *)(DAT_00946100 + 4);
  uVar3 = *(ushort *)(DAT_00946100 + 6);
  uVar7 = FUN_006e8260();
  uVar4 = *(ushort *)(lVar6 + 8);
  uVar10 = (ulong)uVar7 % (ulong)uVar4;
  uVar11 = (int)DAT_009460f8 - (uint)*(ushort *)(lVar6 + 4);
  do {
    puVar1 = (ushort *)(lVar6 + (ulong)uVar3 + uVar10 * 4);
    uVar5 = *puVar1;
    if (uVar5 == 0) {
      return 0xffffffff;
    }
    if (uVar5 < uVar11) {
      uVar8 = thunk_FUN_00712780(param_1,(ulong)(uint)uVar5 + (ulong)uVar2 + lVar6);
      if ((int)uVar8 == 0) {
        *param_2 = (ulong)puVar1[1];
        return uVar8;
      }
    }
    uVar9 = (int)uVar10 + uVar7 % (uVar4 - 2) + 1;
    if (uVar4 <= uVar9) {
      uVar9 = uVar9 - uVar4;
    }
    uVar10 = (ulong)uVar9;
  } while( true );
}

