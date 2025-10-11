
uint FUN_005bf3e0(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint local_3c;
  
  if ((((param_2 == 0) || (param_3 == 0)) ||
      (puVar1 = *(uint **)(param_1 + 0x40), puVar1 == (uint *)0x0)) ||
     (*(long *)(param_1 + 0x48) == 0)) {
LAB_005bf510:
    uVar5 = 0;
  }
  else {
    FUN_004ab6c0(param_1,0xf);
    local_3c = 0;
    uVar5 = puVar1[4];
    while( true ) {
      lVar3 = *(long *)(puVar1 + 2);
      uVar2 = puVar1[5];
      if (uVar5 != 0) {
        uVar4 = uVar5;
        if ((int)param_3 <= (int)uVar5) {
          uVar4 = param_3;
        }
        thunk_FUN_00713a50(param_2,lVar3 + (int)uVar2,(long)(int)uVar4);
        puVar1[4] = puVar1[4] - uVar4;
        uVar2 = puVar1[5] + uVar4;
        local_3c = local_3c + uVar4;
        puVar1[5] = uVar2;
        if ((int)param_3 <= (int)uVar5) goto LAB_005bf540;
        lVar3 = *(long *)(puVar1 + 2);
        param_3 = param_3 - uVar4;
        param_2 = param_2 + (int)uVar4;
      }
      uVar4 = uVar2 + 0xfff + param_3;
      uVar5 = uVar4 + 0xfff;
      if (-1 < (int)uVar4) {
        uVar5 = uVar4;
      }
      uVar5 = uVar5 & 0xfffff000;
      if ((int)*puVar1 < (int)uVar5) {
        lVar3 = FUN_0041ade0(lVar3,(long)(int)uVar5,"../crypto/bio/bf_readbuff.c",0x61);
        if (lVar3 == 0) goto LAB_005bf510;
        *(long *)(puVar1 + 2) = lVar3;
        uVar2 = puVar1[5];
        *puVar1 = uVar5;
      }
      uVar5 = FUN_004ab770(*(undefined8 *)(param_1 + 0x48),lVar3 + (int)uVar2,param_3);
      if ((int)uVar5 < 1) break;
      puVar1[4] = uVar5;
    }
    FUN_004ac5f0(param_1);
    if ((uVar5 == 0) || (0 < (int)local_3c)) {
LAB_005bf540:
      uVar5 = local_3c;
    }
  }
  return uVar5;
}

