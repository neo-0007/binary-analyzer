
ulong * FUN_006230b0(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  iVar2 = FUN_0070a340(&DAT_00942880);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  uVar3 = param_1 + 0x10;
  puVar6 = (ulong *)&DAT_009428a8;
  if (uVar3 < 0x10) {
    uVar3 = 0x10;
  }
  uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
  puVar5 = DAT_009428a8;
  if (DAT_009428a8 == (ulong *)0x0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    do {
      uVar1 = *puVar5;
      puVar7 = (ulong *)puVar5[1];
      if (uVar3 <= uVar1) {
        if (uVar1 - uVar3 < 0x10) {
          *puVar5 = uVar1;
          puVar4 = puVar7;
        }
        else {
          puVar4 = (ulong *)((long)puVar5 + uVar3);
          puVar4[1] = (ulong)puVar7;
          puVar5 = (ulong *)*puVar6;
          *puVar4 = uVar1 - uVar3;
          *puVar5 = uVar3;
        }
        *puVar6 = (ulong)puVar4;
        puVar7 = puVar5 + 2;
        break;
      }
      puVar6 = puVar5 + 1;
      puVar5 = puVar7;
    } while (puVar7 != (ulong *)0x0);
  }
  iVar2 = FUN_0070abb0(&DAT_00942880);
  if (iVar2 == 0) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004021f8();
}

