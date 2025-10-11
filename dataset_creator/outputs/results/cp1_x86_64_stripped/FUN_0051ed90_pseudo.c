
void FUN_0051ed90(int param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  bool bVar12;
  int local_3c;
  
  lVar7 = FUN_0051e1a0();
  if (lVar7 != 0) {
    lVar1 = (long)*(int *)(lVar7 + 0x380) + 0x80;
    if ((*(uint *)(lVar7 + lVar1 * 4) & 3) == 3) {
      lVar2 = lVar7 + (long)*(int *)(lVar7 + 0x380) * 8;
      local_3c = *(int *)(lVar2 + 0x180);
      puVar8 = *(undefined1 **)(lVar2 + 0x100);
      *(undefined8 *)(lVar2 + 0x100) = 0;
      *(undefined4 *)(lVar7 + lVar1 * 4) = 0;
    }
    else {
      puVar8 = (undefined1 *)FUN_0041ad90(0x51,"../crypto/err/err.c",0x334);
      if (puVar8 == (undefined1 *)0x0) {
        return;
      }
      *puVar8 = 0;
      local_3c = 0x51;
    }
    iVar5 = thunk_FUN_007129d0(puVar8);
    param_1 = param_1 + -1;
    puVar11 = puVar8;
    if (param_1 < 0) {
      lVar7 = (long)local_3c;
    }
    else {
      do {
        uVar3 = *param_2;
        if (uVar3 < 0x30) {
          *param_2 = uVar3 + 8;
          pcVar10 = *(char **)((ulong)uVar3 + *(long *)(param_2 + 4));
          if (pcVar10 != (char *)0x0) goto LAB_0051ee26;
LAB_0051ee95:
          pcVar10 = "<NULL>";
          iVar5 = iVar5 + 6;
          if (iVar5 < local_3c) goto LAB_0051eea9;
LAB_0051ee36:
          local_3c = iVar5 + 0x14;
          lVar7 = (long)local_3c;
          puVar8 = (undefined1 *)FUN_0041ade0(puVar11,lVar7,"../crypto/err/err.c",0x344);
          if (puVar8 == (undefined1 *)0x0) {
            uVar9 = 0x346;
            goto LAB_0051ef15;
          }
        }
        else {
          plVar4 = *(long **)(param_2 + 2);
          *(long **)(param_2 + 2) = plVar4 + 1;
          pcVar10 = (char *)*plVar4;
          if (pcVar10 == (char *)0x0) goto LAB_0051ee95;
LAB_0051ee26:
          iVar6 = thunk_FUN_007129d0(pcVar10);
          iVar5 = iVar5 + iVar6;
          if (local_3c <= iVar5) goto LAB_0051ee36;
LAB_0051eea9:
          lVar7 = (long)local_3c;
          puVar8 = puVar11;
        }
        FUN_0041c4d0(puVar8,pcVar10,lVar7);
        bVar12 = param_1 != 0;
        param_1 = param_1 + -1;
        puVar11 = puVar8;
      } while (bVar12);
    }
    iVar5 = FUN_0051eac0(puVar8,lVar7,3,0);
    if (iVar5 == 0) {
      uVar9 = 0x34e;
      puVar11 = puVar8;
LAB_0051ef15:
      FUN_0041ad60(puVar11,"../crypto/err/err.c",uVar9);
      return;
    }
  }
  return;
}

