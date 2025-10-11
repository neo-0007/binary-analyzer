
undefined8 FUN_004f5cd0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = FUN_004f5c50();
  if (iVar3 == 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x98);
  plVar2 = *(long **)(param_2 + 0x98);
  if (*plVar2 != 0) {
    lVar4 = FUN_004f0340();
    *plVar1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar4 = plVar2[2];
  plVar1[1] = plVar2[1];
  if (lVar4 != 0) {
    lVar4 = FUN_004ed9d0();
    plVar1[2] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((long)plVar1 + 0x19) = *(undefined1 *)((long)plVar2 + 0x19);
  lVar4 = plVar2[5];
  lVar5 = plVar2[6];
  plVar1[4] = plVar2[4];
  plVar1[7] = plVar2[7];
  if (lVar4 == 0) {
    plVar1[5] = 0;
  }
  else {
    lVar4 = FUN_0041c320(lVar4,lVar5,"../crypto/ec/ec_pmeth.c",0x55);
    plVar1[5] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = plVar2[6];
  }
  plVar1[6] = lVar5;
  return 1;
}

