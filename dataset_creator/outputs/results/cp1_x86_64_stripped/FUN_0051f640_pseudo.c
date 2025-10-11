
void FUN_0051f640(uint param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  
  lVar4 = FUN_0051e1a0();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = (long)*(int *)(lVar4 + 0x380);
  if (param_3 == 0) {
    puVar6 = (undefined1 *)0x0;
    uVar9 = 0;
    uVar10 = 0;
    goto LAB_0051f706;
  }
  lVar1 = lVar4 + lVar5 * 8;
  uVar10 = *(ulong *)(lVar1 + 0x180);
  puVar7 = *(undefined1 **)(lVar1 + 0x100);
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar4 + 0x200 + lVar5 * 4) = 0;
  if ((uVar10 < 0x400) &&
     (puVar6 = (undefined1 *)FUN_0041ade0(puVar7,0x400,"../crypto/err/err_blocks.c",0x54),
     puVar6 != (undefined1 *)0x0)) {
    uVar10 = 0x400;
LAB_0051f81f:
    iVar3 = FUN_004aeaa0(puVar6,uVar10,param_3,param_4);
    iVar8 = 0;
    if (-1 < iVar3) {
      iVar8 = iVar3;
    }
    puVar6[iVar8] = 0;
    puVar7 = (undefined1 *)FUN_0041ade0(puVar6,(long)(iVar8 + 1),"../crypto/err/err_blocks.c",0x67);
    if (puVar7 == (undefined1 *)0x0) {
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      uVar9 = 3;
      goto LAB_0051f706;
    }
    puVar6 = puVar7 + iVar8;
    uVar2 = (long)(iVar8 + 1);
  }
  else {
    puVar6 = puVar7;
    if (puVar7 != (undefined1 *)0x0) goto LAB_0051f81f;
    puVar6 = (undefined1 *)FUN_0041ade0(0,1,"../crypto/err/err_blocks.c",0x67);
    uVar2 = 1;
    puVar7 = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      uVar9 = 0;
      goto LAB_0051f706;
    }
  }
  uVar10 = uVar2;
  *puVar6 = 0;
  lVar5 = (long)*(int *)(lVar4 + 0x380);
  uVar9 = 3;
  puVar6 = puVar7;
LAB_0051f706:
  lVar1 = lVar5 + 0x80;
  if ((*(byte *)(lVar4 + 0x200 + lVar5 * 4) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0x100 + lVar5 * 8) = 0;
    *(undefined8 *)(lVar4 + 0x180 + lVar5 * 8) = 0;
    *(undefined4 *)(lVar4 + lVar1 * 4) = 0;
  }
  else {
    puVar7 = *(undefined1 **)(lVar4 + 0x100 + lVar5 * 8);
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = 0;
      lVar5 = (long)*(int *)(lVar4 + 0x380);
      *(undefined4 *)(lVar4 + lVar1 * 4) = 1;
    }
  }
  if (param_1 == 2) {
    param_2 = param_2 | 0x80000000;
  }
  else {
    param_2 = (param_1 & 0xff) << 0x17 | param_2 & 0x7fffff;
  }
  lVar1 = lVar4 + lVar5 * 8;
  *(ulong *)(lVar1 + 0x80) = (ulong)param_2;
  if (param_3 != 0) {
    if ((*(byte *)(lVar4 + 0x200 + lVar5 * 4) & 1) != 0) {
      FUN_0041ad60(*(undefined8 *)(lVar1 + 0x100),"../crypto/err/err_local.h",0x49);
    }
    *(undefined1 **)(lVar1 + 0x100) = puVar6;
    *(ulong *)(lVar1 + 0x180) = uVar10;
    *(undefined4 *)(lVar4 + (lVar5 + 0x80) * 4) = uVar9;
  }
  return;
}

