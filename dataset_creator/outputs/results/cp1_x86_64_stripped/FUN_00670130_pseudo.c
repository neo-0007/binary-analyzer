
undefined8 * FUN_00670130(long param_1,uint param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong extraout_RDX;
  char *pcVar8;
  int iVar9;
  
  cVar6 = (char)param_3;
  if (0x7ffffffe < param_2) {
    pcVar8 = "ios_base::_M_grow_words is not valid";
    goto LAB_0067018f;
  }
  iVar9 = 8;
  puVar4 = (undefined8 *)(param_1 + 0x40);
  if (7 < (int)param_2) {
    iVar9 = param_2 + 1;
    puVar4 = (undefined8 *)FUN_006c3240((long)iVar9 << 4,&DAT_008219c3);
    param_3 = param_3 & 0xffffffff;
    if (puVar4 == (undefined8 *)0x0) {
      while( true ) {
        cVar6 = (char)param_3;
        pcVar8 = "ios_base::_M_grow_words allocation failed";
LAB_0067018f:
        uVar3 = *(uint *)(param_1 + 0x20) | 1;
        *(uint *)(param_1 + 0x20) = uVar3;
        if ((uVar3 & *(uint *)(param_1 + 0x1c)) == 0) break;
        FUN_004042e0(pcVar8);
        param_3 = extraout_RDX;
      }
      if (cVar6 == '\0') {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      return (undefined8 *)(param_1 + 0x30);
    }
    lVar5 = (long)iVar9 + -2;
    puVar7 = puVar4;
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
    } while (lVar5 != -2);
    iVar1 = *(int *)(param_1 + 0xc0);
    puVar7 = *(undefined8 **)(param_1 + 200);
    lVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = ((undefined8 *)((long)puVar7 + lVar5))[1];
        *(undefined8 *)((long)puVar4 + lVar5) = *(undefined8 *)((long)puVar7 + lVar5);
        ((undefined8 *)((long)puVar4 + lVar5))[1] = uVar2;
        lVar5 = lVar5 + 0x10;
      } while ((long)iVar1 * 0x10 != lVar5);
    }
    if (((undefined8 *)(param_1 + 0x40) != puVar7) && (puVar7 != (undefined8 *)0x0)) {
      thunk_FUN_007104f0();
    }
  }
  *(undefined8 **)(param_1 + 200) = puVar4;
  *(int *)(param_1 + 0xc0) = iVar9;
  return puVar4 + (long)(int)param_2 * 2;
}

