
int FUN_00708450(uint *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if ((uVar3 & 8) != 0) {
    return -(uint)(param_2 != -1);
  }
  if ((uVar3 & 0xc00) == 0x400) {
    puVar5 = *(undefined1 **)(param_1 + 2);
    uVar3 = uVar3 | 0x800;
    *param_1 = uVar3;
    *(undefined1 **)(param_1 + 10) = puVar5;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 10);
  }
  lVar2 = *(long *)(param_1 + 0xe);
  uVar6 = *(long *)(param_1 + 0x10) - lVar2;
  if ((ulong)((long)puVar5 - *(long *)(param_1 + 8)) < (param_2 == -1) + uVar6) {
LAB_0070858a:
    if (param_2 != -1) {
      *(undefined1 **)(param_1 + 10) = puVar5 + 1;
      *puVar5 = (char)param_2;
      puVar5 = *(undefined1 **)(param_1 + 10);
    }
    if (*(undefined1 **)(param_1 + 4) < puVar5) {
      *(undefined1 **)(param_1 + 4) = puVar5;
    }
  }
  else {
    if (((uVar3 & 1) == 0) && (uVar1 = uVar6 * 2 + 100, uVar6 <= uVar1)) {
      lVar4 = FUN_007101b0(uVar1);
      if (lVar4 != 0) {
        if (lVar2 != 0) {
          thunk_FUN_00713a50(lVar4,lVar2,uVar6);
          FUN_007104f0(lVar2);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        thunk_FUN_00713720(lVar4 + uVar6,0,uVar1 - uVar6);
        FUN_007069a0(param_1,lVar4,lVar4 + uVar1,1);
        puVar5 = (undefined1 *)((*(long *)(param_1 + 10) + lVar4) - lVar2);
        *(long *)(param_1 + 6) = (*(long *)(param_1 + 6) + lVar4) - lVar2;
        *(long *)(param_1 + 2) = (*(long *)(param_1 + 2) - lVar2) + lVar4;
        *(long *)(param_1 + 4) = (*(long *)(param_1 + 4) - lVar2) + lVar4;
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
        *(long *)(param_1 + 8) = lVar4;
        *(undefined1 **)(param_1 + 10) = puVar5;
        goto LAB_0070858a;
      }
    }
    param_2 = -1;
  }
  return param_2;
}

